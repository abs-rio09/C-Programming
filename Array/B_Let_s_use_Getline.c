#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[1000000];
   fgets(str,sizeof(str),stdin);
   // Remove newline
   str[strcspn(str, "\n")] = '\0';
   //stop at backslash
   str[strcspn(str, "\\")] = '\0';
 
   printf("%s",str);
    return 0;
}