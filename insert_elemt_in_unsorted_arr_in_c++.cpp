//insert element at a perticular position in an unsorted array in c++
#include<bits/stdc++.h>
using namespace std;
void insertAtpostion(int *arr,int item,int size,int pos){    //function definition
    size++;
     for(int i=size;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    cout<<"Array after insertion:\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int size,item,pos;
    cout<<"Enter the size of the array:\n";
    cin>>size;
    int *arr=new int[size];  //create dynamic array
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position of the array you want to insert:\n";
    cin>>pos;
    cout<<"Enter the item you want to insert:\n";
    cin>>item;
    insertAtpostion(arr,item,size,pos);
   
    delete[] arr;   //release storage of the array
}
/*  output->
Enter the size of the array:
5
Enter the elements in the array:
10
20
30
40
50
Enter the position of the array you want to insert:
4
Enter the item you want to insert:
35
Array after insertion:
10      20      30      35      40      50
*/