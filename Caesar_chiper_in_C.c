#include<stdio.h>
 
int main()
{
   int b;
   Printf("Enter 1 for Encryption\n Enter 2 for Decryption\n");
   scanf("%d",&b);
   if (b==1) Encrypt();
   else if (b==2) Decrypt();
   else printf("Enter a proper number");
   return 0;
}
char Encrypt(){
  char meg[200], String;
	int a, k;
	
	printf("Enter Cryptext: ");
	gets(meg);

	printf("Enter key: ");
	scanf("%d", &k);
	
	for(a = 0; meg[a] != '\0'; ++a){
		String = meg[a];
		
		if( String>= 'a' && String <= 'z'){
			String = String - k;
			
			if(String < 'a'){
				String = String + 'z' - 'a' + 1;
			}
			
			meg[a] = String;
		}
		else if(String >= 'A' && String <= 'Z'){
			String = String - k;
			
			if(String < 'A'){
				String = String + 'Z' - 'A' + 1;
			}
			
			meg[a] = String;
		}
	}
	
	printf("Plaintext: %s", message);

  }

 char Decrypt(){
  char meg[200], String;
	int a, k;
	
	printf("Enter Plaintext: ");
	gets(meg);

	printf("Enter key: ");
	scanf("%d", &k);
	
	for(a = 0; meg[a] != '\0'; ++a){
		String = meg[a];
		
		if( String>= 'a' && String <= 'z'){
			String = String + k;
			
			if(String < 'a'){
				String = String - 'z' + 'a' - 1;
			}
			
			meg[a] = String;
		}
		else if(String >= 'A' && String <= 'Z'){
			String = String + k;
			
			if(String < 'A'){
				String = String - 'Z' + 'A' - 1;
			}
			
			meg[a] = String;
		}
	}
	
	printf("Cryptext: %s", message);

  }
