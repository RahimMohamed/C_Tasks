#include <stdio.h>
char *My_strncpy(char *dest, const char *src, unsigned int n);
char dest[50],src[50];
char  *ret=NULL;
int main () {

    My_strncpy(src,"This is tutorialspoint.com",10);
    My_strncpy(dest,src,10);
    printf("The dest string :  %s\n",dest);
     My_strncpy(src,"This is source",10);
    printf("----------------------------------\n");
    printf("The src string :  %s\n",src);
    
     return(0);
}
char *My_strncpy(char *dest, const char *src, unsigned int n){
    char *tempdest=(unsigned char *)dest;
     char *tempsrc=(unsigned char *)src;
    if(dest == NULL || src == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    while(n--)
    {
        *tempdest=*tempsrc;
        tempsrc++,tempdest++;
    }
    return tempdest;
}