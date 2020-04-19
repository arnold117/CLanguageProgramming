/*
string.h 
char *strcat(char *dest, const char *src)
*/
#include <stdio.h>
#include <string.h>
 
int main ()
{
   char src[50], dest[50];
 
   strcpy(src,  "This is source. ");
   strcpy(dest, "This is destination. ");
 
   strcat(dest, src);
 
   printf("Final： |%s|", dest);

   char src[] = {"BBBB"};
   char dest[] = {"AAAA"};

   strcat(dest, src);

   printf("Final： |%s|", dest);
   
   return(0);
}