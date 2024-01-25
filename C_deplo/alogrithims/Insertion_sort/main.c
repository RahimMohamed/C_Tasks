#include <stdio.h>

#define MAX_SIZE 10

typedef signed int sint32;
void insertion_sort (sint32 Data[],sint32 array_len);
void swap (unsigned int *num1,unsigned int *num2);
void print_array(sint32 Data[],sint32 array_len);

sint32 Data[MAX_SIZE]={12,50,40,5,65,100,81.16,44,30,14};

int main (){

print_array(Data,MAX_SIZE);
printf("\n");
printf("------------------------------------------------\n");
printf("------------------------------------------------\n");

insertion_sort(Data,MAX_SIZE);

print_array(Data,MAX_SIZE);


    return 0;
}

void insertion_sort (sint32 Data[],sint32 array_len){

unsigned int counter1=0,temp_item=0;
sint32 compered_counter=0;
for(counter1=1;counter1<array_len;counter1++){
temp_item=Data[counter1];
compered_counter=counter1-1;
while((temp_item < Data[compered_counter]) && (compered_counter >= 0)){

    Data[compered_counter+1]=Data[compered_counter];
    compered_counter --;
}

Data[compered_counter+1]=temp_item;

}
}
   


void swap (unsigned int *num1,unsigned int *num2){


    unsigned int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void print_array(sint32 Data[],sint32 array_len){

    unsigned char counter =0;
     for(counter=0;counter < array_len;counter ++)
     {
        printf("%i\t",Data[counter]);
     }
}