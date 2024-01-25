#include <stdio.h>
void *My_memmov(  void *str1, const void *str2, unsigned int len);
char dest[50],src[50];
char *ret;
int main () {

    printf("Enter the destination string:");
    gets(dest);
    printf("Enter the source string:");
    gets(src);
    printf("--------------------------\n");
    printf("The dest string before copy:  %s\n",dest);
    ret=My_memmov(dest,src,30);
     if (NULL== ret){
        printf("NULL pionter Error state!!!");
    }
    else{
    printf("--------------------------\n");
    printf("The dest string after copy:  %s\n",dest);
    }
     return(0);
}
void *My_memmov(  void *str1, const void *str2, unsigned int len){
    char *tempdest=(unsigned char *)str1;
     char *tempsrc=(unsigned char *)str2;
    if(str1 == NULL || str2 == NULL)
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