#include <stdio.h>
char *My_strcat(char *dest, const  char *src);
char dest[50],src[50];
char *ret;
int main () {

    printf("Enter the destination string:");
    gets(dest);
    printf("Enter the source string:");
    gets(src);
    printf("--------------------------\n");
    printf("The dest string before copy:  %s\n",dest);
     ret= My_strcat(dest,src);
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
char *My_strcat(char *dest_1, const char *src){
    char *dest_2=dest_1;
    char *tempsrc=(char *)src;
    if(dest_1 == NULL || src ==NULL)
    {
        printf("Error state, NULL pionter !!!");
    }
    else{
    while(*dest_2 != '\0')
        dest_2++;
    while(*tempsrc != '\0')
    {
        *dest_2=*tempsrc;
        tempsrc++,dest_2++;
    }
    }
    return dest_2;
}