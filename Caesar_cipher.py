def caesar_cipher(text, s_num):
 
  word = ''
  for character in text: 
    if character == ' ':
      word = word + character
    elif  character.isupper():
      word = word + chr((ord(character) + s_num - 65) % 26 + 65)
    else:
      word = word + chr((ord(character) + s_num - 97) % 26 + 97)
  
  return word
 
    
def caesar_cipherD(C_text, key):
 
  word = ''
  for character in C_text: 
    if character == ' ':
      word = word + character
    elif  character.isupper():
      word = word + chr(90-((90-ord(character) + key ) % 26))
    elif character.islower():
      word = word + chr(122-((122-ord(character) +key) % 26))
  
  return word
    
String=int(input("For encryption enter 1\nFor decryption enter 2 :"))
if String==1:
   Plaintext = input("Input your plaintext: ")
   n = int(input("Input your key Number: "))
   print("Plaintext is: ", Plaintext)
   print("Cyphertext is: ", caesar_cipher(Plaintext, n).upper())
elif String==2:
   cryptext = input("Input your cryptext: ")
   n = int(input("Input your key Number: "))
   print("Cryptext is: ", cryptext)
   print("Plaintext is: ", caesar_cipherD(cryptext, n).lower())
else:
    print("Enter a proper digit")
