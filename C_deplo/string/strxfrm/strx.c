#include <stdio.h>

unsigned int My_strxfrm(char *dest, const char *src, unsigned int n);
char src[50],dest[50];
unsigned  int len;
int main () {

    printf("Enter the  string:");
    gets(src);
    len=My_strxfrm(dest,src,30);
    printf("----------------------------------\n");
    if(len ) {
      printf("Length of string |%s| is: |%d|", dest, len);
       
   } else {
    printf("Error!!!");
   }
     return(0);
}
unsigned int My_strxfrm(char *dest, const char *src, unsigned int n)
{
    char *tempdest=(unsigned char *)dest;
     char *tempsrc=(unsigned char *)src;
     unsigned int counter=0;
    if(dest == NULL || src == NULL)
    {
        printf("NULL pionter Error state!!!");
        return 0;
    }
    else
    {
    while(n-- )
    {
        while(*tempsrc != '\0' )
        {
            *tempdest=*tempsrc;
            counter++,tempdest++,tempsrc++;
        }
        break;

    }
    }
    return counter;
}