#include <stdio.h>

unsigned int My_strspn(const char *str1, const char *str2);
char str1[50],str2[50];
unsigned  int ret;
int main () {

    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    ret=My_strspn(str1,str2);
    printf("----------------------------------\n");
    if(ret ) {
        printf("Length of initial segment matching: %d\n", ret );
       
   } else {
    printf("Character not found");
   }
     return(0);
}
unsigned int My_strspn(const char *str1, const char *str2)
{
    char *tempstr1=(unsigned char *)str1;
     char *tempstr2=(unsigned char *)str2;
     unsigned int counter=0;
    if(str1 == NULL || str2 == NULL)
    {
        printf("NULL pionter Error state!!!");
        return 0;
    }
    else
    {
    while(*tempstr1 != '\0' )
    {
        while(*tempstr2 != '\0' )
        {
       if (*tempstr1 == *tempstr2)
       {
        counter++;
        break;
       }
       tempstr2++;
        }
        tempstr1++,tempstr2=(unsigned char *)str2;
    }

    }
    return counter;
}