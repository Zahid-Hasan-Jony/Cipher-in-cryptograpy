Cryptext = input("Input your cryptext: ")

LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

for key in range(len(LETTERS)):
    word = ''
    for character in Cryptext:
        if character == ' ':
           word = word + character
        elif character.isupper():
           word = word + chr(90-((90-ord(character) + key ) % 26))
        else:
           word = word + chr(122-((122-ord(character) +key) % 26))
    print('Possible Plaintext key #%s: %s' % (key, word))
