#include <stdio.h>

unsigned int My_strlen(const char *str);
char str[50];
int main () {

    printf("Enter the string:");
    gets(str);
    printf("----------------------------------\n");
printf("Length of (%s) is:  %d \n", str, My_strlen(str));
    
     return(0);
}
unsigned int My_strlen(const char *str){
    char *tempstr=(unsigned char *)str;
    unsigned int len=0;
    if(str == NULL)
    {
        printf("NULL pionter Error state!!!");
        return 0;
    }
    while(*tempstr != '\0')
    {
        len++,tempstr++;
    }
    return len;
}