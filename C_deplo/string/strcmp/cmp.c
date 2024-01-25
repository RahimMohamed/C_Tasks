#include <stdio.h>
int My_strcmp(const char *str1, const char *str2);
char str1[50],str2[50];
int ret;
int main () 
{   printf("Enter the first string:");
    gets(str1);
    printf("Enter the second sting:");
     gets(str2);
    ret= My_strcmp(str1,str2);
    if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
     
 return(0);
}
int My_strcmp(const char *str1, const char *str2)
 {
    unsigned int c=0;
    char *tempstr1=(char *)str1;
      char *tempstr2=(char *)str2;
    if(str1 == NULL || str2 == NULL )
    {
        printf("Error state, NULL pionter !!!");
    }
    else
    {
    while(*tempstr1 != '\0' || *tempstr2 != '\0' )
    {
        if(*tempstr1==*tempstr2)
        {
        }
        else if (*tempstr1 > *tempstr2)
        {
        return 1;
        break;
        }
      else if (*tempstr1 < *tempstr2)
      {
      return -1;
      break;
      }
        tempstr1++,tempstr2++;
    }
    }
    return c;
 }