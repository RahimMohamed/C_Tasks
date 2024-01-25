#include <stdio.h>

char *My_strrchr(const char *str, int c);
char str1[50];
int ch;
char *ret=NULL;
int main () {

    printf("Enter the string:");
    gets(str1);
    printf("Enter the character :");
    scanf("%s",&ch);
    ret=My_strrchr(str1,ch);
    printf("----------------------------------\n");
    if(ret == NULL) {
       printf("Character not found");
   } else {
     printf("String after (%c) is : %s\n", ch, ret);
   }
     return(0);
}
char *My_strrchr(const char *str, int c)
{
    char *tempstr1=(unsigned char *)str1;
    if(str1 == NULL )
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    else
    {
    while(*tempstr1 != '\0')
    {
       tempstr1++;
    }
    while(*(--tempstr1) != '\0')
    {
       if(*tempstr1 == c)
       {
        return tempstr1;
        break;
       }
    }
    }
    return NULL;
}