#include<stdio.h>
#include<string.h>
 
int main(){
    char message[] = "ZAHIDHASANJONY";
    char key[] = "JONY";
    int mlen = strlen(message), kl = strlen(key), a, b;
 
    char Nkey[mlen], encryptedM[mlen], decryptedM[mlen];
 
    for(a = 0, b = 0; a < mlen; ++a, ++b){
        if(b == kl)
            b = 0;
 
        Nkey[a] = key[b];
    }
 
    Nkey[i] = '\0';
 
    
    for(a = 0; a < mlen; ++a)
        encryptedM[a] = ((message[a] + Nkey[a]) % 26) + 'A';
 
    encryptedM[a] = '\0';
 
    for(a = 0; a < mlen; ++a)
        decryptedM[a] = (((encryptedM[a] - Nkey[a]) + 26) % 26) + 'A';
 
    decryptedM[a] = '\0';
 
    printf("Your Message: %s\n", message);
    printf("Your Key: %s\n", key);
    printf("Full length Key: %s", Nkey);
    printf("Cryptext: %s", encryptedM);
    printf("Plaintext: %s", decryptedM);
 
	return 0;
}
