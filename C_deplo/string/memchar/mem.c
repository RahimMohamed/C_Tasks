#include <stdio.h>
#include <stdlib.h>
void *My_memchr( const void *str, char c, unsigned int n);
char *str,*res,lett;
unsigned int len;
int main () {

    printf("Enter the length of string:");
    scanf("%i",&len);
    str=malloc(len);
    if(NULL==str)
    {
        printf("Error state:");
    }
    else
    {
    printf("Enter the string:");
    fflush(stdin);
    scanf("%s",str);
    }
    printf("Enter the character you want to find it first:");
    fflush(stdin);
    scanf("%s",&lett);
    res=My_memchr(str,lett,len);
    if(NULL==res)
    {
  printf("---------------------------------\n");
   printf("character not found.\n");
    }
    else
    {
   printf("---------------------------------\n");
   printf("String after (%c) is : %s\n", lett, res);
   }
   printf("---------------------------------\n");
   printf("The old string: %s\n",str);
   return(0);
}
void *My_memchr( const void *str, char c, unsigned int n){
    char *re=(char*)str;
    if (NULL == str) {
    printf("NULL POINTER ERROR !!! \n");
    return NULL;
                } 
  else {
    while (len--)
    {
        if(c==*re)
        {
           return  re;
        }
        re++;
    }
  }
    return NULL;
}