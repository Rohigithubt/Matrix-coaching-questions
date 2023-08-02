//program for reverse an array in c
#include<stdio.h>
#include<conio.h>
void revrse(int arr[],int size){   // reverse function
    int temp,start=0,end=size-1;
    while(start<end){
        temp=arr[start];   //swapping process
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    printf("Enter the size of an array : \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in an array : \n");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    printf("Original array : \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");  
    
    revrse(arr,size);     //function call
    
    printf("Array after reverse operation : \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return(0);
}


/*  output->
Enter the size of an array : 
5
Enter the elements in an array : 
1 2 3 4 5
Original array : 
1       2       3       4       5
Array after reverse operation : 
5       4       3       2       1
*/