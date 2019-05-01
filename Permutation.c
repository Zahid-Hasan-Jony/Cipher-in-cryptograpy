#include <stdio.h>
#include <string.h>
 
void swap(char *m, char *n)
{
    char a;
    a = *m;
    *m = *n;
    *n = a;
}
 
void Permutation(char *e, int f, int g)
{
   int i;
   
   if (f == g)
     printf("%s\n", e);
   else
   {
       for (i = f; i <= g; i++)
       {
          swap((e+f), (e+i));
          permutation(e, f+1, g);
          swap((e+l), (e+i));
       }
   }
}
 
int main()
{
    char Word[20];
    int h;
    
    printf("Enter a string: ");
    scanf("%s", &Word);
    
	h = strlen(Word);
    permutation(Word, 0, h-1);
    
	return 0;
}
