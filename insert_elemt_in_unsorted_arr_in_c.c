//insert element at a perticular position in an unsorted array in c
#include<stdio.h>
#include<stdlib.h>
void intsertAtposition(int *arr,int size,int pos,int item){   //function defintion
    size++;
    for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    printf("Array after insertion:\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int size,item,pos;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));  //create dynamic array
    printf("Enter the element in the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to insert:\n");
    scanf("%d",&pos);
    printf("Enter the item you want to insert:\n");
    scanf("%d",&item);
    intsertAtposition(arr,size,pos,item);   //function call
    free(arr); //release storage of the array
}
/* output->
Enter the size of the array:
5
Enter the element in the array:
10
20
30
40
50
Enter the position you want to insert:
4
Enter the item you want to insert:
35
Array after insertion:
10      20      30      35      40      50
*/