//insert item in sorted array in c++
#include<bits/stdc++.h>
using namespace std;
void insertInsorted(int *arr,int size,int item){   //function definition
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
    cout<<"Array after insertion\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int size,item;
    cout<<"Enter the size of the array:\n";
    cin>>size;
    int *arr=new int[size]; //create a dynamic array
    cout<<"Enter the element in the array in sorted array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
        while(i>0 && arr[i]<=arr[i-1]){
            if(arr[i]<arr[i-1]){
                cout<<"Enter the elements in the sorted order:\n";
            }
            cin>>arr[i];
        }
    }
    cout<<"Enter the item you want to insert:\n";
    cin>>item;
    insertInsorted(arr,size,item);
    delete[] arr; //release the storage in the array
}
/* output->
Enter the size of the array:
5
Enter the element in the array in sorted array:
10
20       
30
40
50
Enter the item you want to insert:
35
Array after insertion
10      20      30      35      40      50
*/