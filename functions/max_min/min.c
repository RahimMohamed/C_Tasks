#include <stdio.h>
unsigned int max (unsigned int array [], unsigned int index);
unsigned int min (unsigned int array [], unsigned int index);
unsigned int j,i;
int main()
{ 
    printf("Enter number of elements :\n");
    scanf("%i",&j);
    unsigned int array[j];
    printf("Enter the elements:\n");
    for(i=0;i<j;i++)
    {
        scanf("%i",&array[i]);
    }
    printf("The Max number =%i\n",max(array,j));
    printf("The Min number =%i",min(array,j));

return 0;
}
unsigned int max (unsigned int array [], unsigned int j){
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
unsigned int min (unsigned int array [], unsigned int j){
    unsigned int  min=array[0];
    for(i=0;i<j;i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    return min;

}