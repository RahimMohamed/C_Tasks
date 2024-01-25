#include <stdio.h>
void *My_memset(void *str, char c, unsigned char len);
char str[50],chara;
unsigned char len;
char *ret=NULL;
int main () {

    printf("Enter the string:");
    gets(str);
    printf("Enter the character you want :");
    scanf("%s",&chara);
     printf("Enter the length :");
    scanf("%i",&len);
    printf("--------------------------\n");
    printf("The  string before copy:  %s\n",str);
    ret=My_memset(str,chara,len);
     if (NULL== ret){
        printf("NULL pionter Error state!!!");
    }
    else{
    printf("--------------------------\n");
    printf("The string after copy:  %s\n",str);
    }
     return(0);
}

void *My_memset(void *str, char c, unsigned char len)
{
    char *tempstr=(unsigned char *)str;
    if(str == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    while(len--)
    {
        *tempstr=c;
        tempstr++;
    }
    return tempstr;
}
