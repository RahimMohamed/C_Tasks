#include <stdio.h>
unsigned int  My_strcspn(const char *str1, const char *str2);
char str1[50],str2[50];
char  ret=0;
int main () {

    printf("Enter first string : ");
    scanf("%s",str1);
    printf("Enter second string : ");
    scanf("%s",str2);
    ret=My_strcspn(str1,str2);
    printf("First matched character is at %d\n", ret+1);
    
     return(0);
}
unsigned int  My_strcspn(const char *str1, const char *str2){
    char *tempstr1=(unsigned char *)str1;
     char *tempstr2=(unsigned char *)str2;
     unsigned int counter=0;
    if(str1 == NULL || str2 == NULL)
    {
        printf("NULL pionter Error state!!!");
        return 0;
    }
    while(*tempstr1 != '\0')
    {
        while(*tempstr2 != '\0')
        {
         if(*tempstr2 == *tempstr1)
         {
            return counter;
         }
         else
         {
            tempstr2++;
         }
        }
        tempstr1++,tempstr2=(unsigned char *)str2,counter++;
    }
    
}