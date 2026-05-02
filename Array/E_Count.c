#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000000];
   fgets(str,sizeof(str),stdin);
   long long int sum = 0 ; 
  
   for(int i=0; i<strlen(str)-1; i++)
   {
       sum += str[i] - '0'; // Convert char to int and add to sum
   }

    printf("%lld",sum);
  
    return 0;
}