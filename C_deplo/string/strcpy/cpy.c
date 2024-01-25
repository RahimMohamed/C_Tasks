#include <stdio.h>
char *My_strcpy(char *dest, const char *src);
char dest[50],src[50];
char  *ret=NULL;
int main () {

    My_strcpy(src,"This is tutorialspoint.com");
    My_strcpy(dest,src);
    printf("The dest string :  %s\n",dest);
     My_strcpy(src,"This is source");
    printf("----------------------------------\n");
    printf("The src string :  %s\n",src);
    
     return(0);
}
char *My_strcpy(char *dest, const char *src){
    char *tempdest=(unsigned char *)dest;
     char *tempsrc=(unsigned char *)src;
    if(dest == NULL || src == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    while(*tempsrc != '\0')
    {
        *tempdest=*tempsrc;
        tempsrc++,tempdest++;
    }
    if(*(tempdest++) != '\0')
    {
        while(*tempdest != '\0')
        {
            *tempdest= '\0';
            tempdest++;
        }
    }
     
    return tempdest;
}