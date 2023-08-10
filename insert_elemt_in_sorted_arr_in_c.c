//insert element in the sorted array in c
#include<stdio.h>
#include<stdlib.h>
void insertInsorted(int *arr,int size,int item){  //function definition
    int pos;
    for(int i=0;i<size;i++){
        if(arr[i]<item && arr[i+1]>item){
            pos=i+1;
        }
    }
    size++;
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
    printf("Array after insertion:\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
int main()
{
    int size,item;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));  //create a dynamic array
    printf("Enter the elements in the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        while(i>0 && arr[i]<=arr[i-1]){
            if(arr[i]<arr[i-1]){
                printf("Enter the element in the sorted order:\n");
            }
            scanf("%d",&arr[i]);
        }
    }
    printf("Enter the item you want to insert:\n");
    scanf("%d",&item);
    insertInsorted(arr,size,item);
    free(arr);   //release storage of the array
}
/* output->
Enter the size of the array:
5
Enter the elements in the array:
10
20
30
40
50
Enter the item you want to insert:
35
Array after insertion:
10      20      30      35      40      50
*/