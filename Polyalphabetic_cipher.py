#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: zahid
"""
def encryption(text, key):
    length = len(key)
    key=key.lower()
    text=text.lower()
    unicode = [ord(i) for i in key]
    p_unicode = [ord(i) for i in text]
    new = ''
    for i in range(len(p_unicode)):
       chiper = (p_unicode[i] + unicode[i % length]+26-194) % 26
       new += chr(chiper + 65)
    return new

def decryption(text, key):
    length = len(key)
    key=key.lower()
    text=text.lower()
    unicode = [ord(i) for i in key]
    c_unicode = [ord(i) for i in text]
    new = ''
    for i in range(len(c_unicode)):
        chiper = (c_unicode[i] -unicode[i % length]+26)%26
        new += chr(chiper + 97)
    return new
character=input("Enter 'E' for Encryption and 'D' for decryption:\n")
if character== 'e' or character== 'E':

    plaintext=input("Enter your plaintext: ")
    key=input("Enter your key: ")
    print("Encrypted message: ",encryption(plaintext,key))
elif character== 'd' or character== 'D':
    cryptext=input("Enter your cryptext: ")
    key=input("Enter your key: ")
    print("Encrypted message: ",decryption(cryptext,key))
else:
    print("Choose properly")
