import random

alphabet = "abcdefghijklmnopqrstuvwxyz"


def encryption(message, F=None):
   if F is None:
      l = list(alphabet)
   random.shuffle(l)
   key = "".join(l)
   meg = []
   for letter in message:
       meg.append(key[alphabet.index(letter)])
   return [''.join(meg), key]

def decryption(cryptext, key=None):
   if key is not None:
      meg = []
   for letter in cryptext:
       meg.append(alphabet[key.index(letter)])
   return "".join(meg)

 
mono =input("Enter your plaintext(in small latter): ")
encrypt = encryption(mono, None)

print("Encyption Output: ", encrypt)

print("Decrypt message:  ",decryption(encrypt[0], encrypt[1]))