//to find frequency of each element of an array in c language
#include<stdio.h>
#include<stdlib.h>
void findfrequency(int *arr,int size){        //function definition
    int visited=-1;
    int *freq=(int*)malloc(size*sizeof(int));  //create frequency array
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=visited;
            }
        }
        if(freq[i]!=visited){
            freq[i]=count;
        }
    }
    for(int i=0;i<size;i++){
        if(freq[i]!=visited){
            printf("the frequency of %d is=%d\n",arr[i],freq[i]);
        }
    }
    free(freq);
}
int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int)); //create a dynamic array
    printf("Enter the elements in the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    findfrequency(arr,size);  //function call
    free(arr);   //delete wastage space
    return(0);
}
/* output->
Enter the size of the array:
5
Enter the elements in the array:
3
3
3
4
5
the frequency of 3 is=3
the frequency of 4 is=1
the frequency of 5 is=1
*/