#include <stdio.h>

char *My_strpbrk(const char *str1, const char *str2);
char str1[50],str2[50];
char *ret=NULL;
int main () {

    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    ret=My_strpbrk(str1,str2);
    printf("----------------------------------\n");
    if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }
     return(0);
}
char *My_strpbrk(const char *str1, const char *str2){
    char *tempstr1=(unsigned char *)str1;
    char *tempstr2=(unsigned char *)str2;
    if(str1 == NULL || str2 == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    while(*tempstr1 != '\0')
    {
        while(*tempstr2 != '\0')
        {
            if(*tempstr2 == *tempstr1)
            {
                return tempstr2;
                break;
            }
            else
            tempstr2++;
        }
        tempstr1++,tempstr2=(unsigned char *)str2;
    }
    return NULL;
}