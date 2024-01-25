#include <stdio.h>

char *My_strstr(const char *haystack, const char *needle);
char str1[50],str2[50];
char *ret=NULL;
int main () {

    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    ret=My_strstr(str1,str2);
    printf("----------------------------------\n");
    if(ret == NULL ) {
       
        printf("string not found");
       
   } else {
     printf("The substring is: %s\n", ret);
   }

     return(0);
}
char *My_strstr(const char *haystack, const char *needle)
{
    char *tempstr1=(unsigned char *)haystack;
     char *tempstr2=(unsigned char *)needle;
     char *ret=NULL;
     unsigned int counter1=0,counter2=0;

    if(haystack == NULL || needle == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    else
    {
        while(*tempstr2 != '\0' )
        {
          counter1++,tempstr2++;
        }
     tempstr2=(unsigned char *)needle;
    while(*tempstr1 != '\0' )
    {
          if (*tempstr1 == *tempstr2)
              {
                 ret=tempstr1;
                 break;
              }
              tempstr1++;
    }
    
     while(*tempstr2 != '\0' )
     {
         if (*tempstr1 == *tempstr2)
         {
            counter2++;
         }
       tempstr1++,tempstr2++;
     }
    
    }
    if(counter1 == counter2)
    {
        return ret;
    }
    else
    {
        return NULL;
    }
   

}