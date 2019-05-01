#include<stdio.h>
void flush();
 
int main()
{
   int b;
   Printf("Enter 1 for Encryption\nEnter 2 for Decryption\n");
   scanf("%d",&b);
   if (b==1) Encrypt();
   else if (b==2) Decrypt();
   else printf("Enter a proper number");
   return 0;
}
char Decrypt(){
  char meg[200], String;
	int a, k;
	
        flush();
	printf("Enter Cryptext: ");
	fgets(meg,200,stdin);

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
	
	printf("Plaintext: %s", meg);

  }

 int Encrypt(){
  char meg[200], String;
	int a, k;
	
        flush();
	printf("Enter Plaintext: ");
	fgets(meg,200,stdin);

	printf("Enter key: ");
	scanf("%d", &k);
	
	for(a = 0; meg[a] != '\0'; ++a){
		String = meg[a];
		
		if( String>= 'a' && String <= 'z'){
			String = String + k;
			
			if(String > 'z'){
				String = String - 'z' + 'a' - 1;
			}
			
			meg[a] = String;
		}
		else if(String >= 'A' && String <= 'Z'){
			String = String + k;
			
			if(String >'Z'){
				String = String - 'Z' + 'A' - 1;
			}
			
			meg[a] = String;
		}
	}
	
	printf("Cryptext: %s", meg);

  }

 void flush(){
      int c;
      while ((c=getchar()) != '\n' && c != EOF);
    }
