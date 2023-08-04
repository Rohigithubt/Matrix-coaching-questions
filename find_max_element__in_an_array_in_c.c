//program to find maximum element in an dynamic array in c
#include<stdio.h>
#include<stdlib.h>
int maximum(int *arr,int size){    //function definition
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int *arr;
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    
    arr=(int*)malloc(size*sizeof(int));  //create dynamic array
    
    printf("Enter the elements in the array:\n");
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("The maximum element is=%d",maximum(arr,size));
    free(arr);    //release the storage of the array so that storage can not be wastege
}
/* output->
Enter the size of the array:
5
Enter the elements in the array:
1
2
3
4
5
The maximum element is=5
*/