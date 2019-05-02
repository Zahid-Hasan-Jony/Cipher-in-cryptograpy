#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""

@author: zahid
"""

def transposition(text, length):
   return [text[i:i + length] for i in range(0, len(text), length)]

def encrypt(key, plaintext):
    seg = {
      int(val): num for num, val in enumerate(key)
     }
    ciphertext = ''

    for index in sorted(seg.keys()):
        for part in transposition(plaintext, len(key)):
           try:ciphertext += part[seg[index]]
           except IndexError:
            continue
    return ciphertext
P=input("Enter your message: ")
c=input("Enter your order numbers: ")
print(encrypt(c, P))