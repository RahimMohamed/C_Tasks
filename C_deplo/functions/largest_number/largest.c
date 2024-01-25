#include <stdio.h>
unsigned int largest (unsigned int array [], unsigned int index);
unsigned int array[100];
unsigned int j,i;
int main()
{ 
    printf("Enter number of elements :\n");
    scanf("%i",&j);
    printf("Enter the elements:\n");
    for(i=0;i<j;i++)
    {
        scanf("%i",&array[i]);
    }
    printf("The largest number =%i",largest(array,j));

return 0;
}
unsigned int largest (unsigned int array [], unsigned int j){
    unsigned int  lar=0;
    for(i=0;i<j;i++)
    {
        if (array[i]>lar)
        {
            lar=array[i];
        }
    }
    return lar;

}