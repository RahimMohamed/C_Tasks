#include <stdio.h>
char *My_strchr(const char *str,unsigned int c);
char str[50],chara;
char *ret;
int main () 
{

    printf("Enter the string:");
    gets(str);
    printf("Enter the character:");
    scanf("%s",&chara);
     ret= My_strchr(str,chara);
     if (ret== NULL)
     {
        printf("Error state, NULL pionter !!!");
     }
     else{
     printf("--------------------------\n");
    printf("String after (%c) is - |%s|\n", chara, ret);
       }
 return(0);
}
 char *My_strchr(const char *str, unsigned int  c)
 {
    char *tempstr=(char *)str;
    if(str == NULL )
    {
        printf("Error state, NULL pionter !!!");
    }
    else
    {
    while(*tempstr != '\0')
    {
        if(*tempstr==c)
        {
            return tempstr;
            break;
        }
        tempstr++;
    }
    }
    return NULL;
 }