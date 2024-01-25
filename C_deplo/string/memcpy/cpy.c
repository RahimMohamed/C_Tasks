#include <stdio.h>
void *My_memcpy( const void *dest, const void *src, unsigned int len);
char dest[50],src[50];
char  *ret=NULL;
int main () {

    printf("Enter the destination string:");
    gets(dest);
    printf("Enter the source string:");
    gets(src);
    printf("--------------------------\n");
    printf("The dest string before copy:  %s\n",dest);
    ret=My_memcpy(dest,src,30);
    if (NULL== ret){
        printf("NULL pionter Error state!!!");
    }
    else{
     printf("--------------------------\n");
    printf("The dest string after copy:  %s\n",dest);
    }
     return(0);
}
void *My_memcpy( const void *dest, const void *src, unsigned int len){
    char *tempdest=(unsigned char *)dest;
     char *tempsrc=(unsigned char *)src;
    if(dest == NULL || src == NULL)
    {
        printf("NULL pionter Error state!!!");
        return NULL;
    }
    while(len--)
    {
        *tempdest=*tempsrc;
        tempsrc++,tempdest++;
    }
    return tempdest;
}