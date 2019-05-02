#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: zahid
"""


def makeVernamCypher( text, key ):
    
    answer = ""
    p = 0 
    for char in text:
        answer += chr(ord(char) ^ ord(key[p]))
        p += 1
        if p==len(key):
            p = 0
    return answer

                      
KEY = "zahidhasan"
while True:
    print("---Vernam Cypher---")
    PlainText = input("Enter text to encrypt: ")
    
    Cypher = makeVernamCypher(PlainText, KEY)
    print("Cypher text: "+Cypher)
    
    decrypt = makeVernamCypher(Cypher, KEY)
    print("Decrypt: "+decrypt)