#include <stdio.h>
char *My_strncat(char *dest, const char *src, unsigned int len);
char dest[50],src[50],len;
char *ret;
int main () {

    printf("Enter the destination string:");
    gets(dest);
    printf("Enter the source string:");
    gets(src);
     printf("Enter number of letters you want to append:");
    scanf("%d",&len);
    printf("--------------------------\n");
    printf("The dest string before copy:  %s\n",dest);
   
     ret= My_strncat(dest,src,len);
     if (ret== NULL)
     {
        printf("Error state, NULL pionter !!!");
     }
     else{
     printf("--------------------------\n");
    printf("The dest string after copy:  %s\n",dest);
    printf("--------------------------\n");
    printf("The source string after copy:  %s\n",src);
     }
     return(0);
}
 char *My_strncat(char *dest, const char *src, unsigned int len){
    char *tempdest=dest;
    char *tempsrc=(char *)src;
    if(dest == NULL || src ==NULL)
    {
        printf("Error state, NULL pionter !!!");
    }
    else{
    while(*tempdest != '\0')
        tempdest++;
    while(len--)
    {
        *tempdest=*tempsrc;
        tempsrc++,tempdest++;
    }
    }
    return tempdest;
}