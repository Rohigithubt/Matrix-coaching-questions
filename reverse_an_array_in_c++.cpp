//program for reverse an array in c++
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){     //reverse function
    int temp,start=0,end=size-1;
    while(start<end){
        temp=arr[start];     //swapping process
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in an array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Original Array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    reverse(arr,size);  //function call
    cout<<"Array after reverse operation : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}

/* output  ->
Enter the size of an array : 5
Enter the elements in an array : 
1
2
3
4
5
Original Array : 
1       2       3       4       5
Array after reverse operation : 
5       4       3       2       1
*/