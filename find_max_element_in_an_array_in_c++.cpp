//find maximum element in a dynamic array in c++
#include<bits/stdc++.h>
using namespace std;
int maximum(int *arr,int size){ //function definition
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int *arr;
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    arr=new int[size]; //create dynamic array
    cout<<"Enter the elements in the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The maximum element is="<<maximum(arr,size);
    delete[] arr; //releasing storage in the array so that storage can not be wastege
}
/* output->
Enter the size of the array:
5
Enter the elements in the array:1
2
3 
4
5
The maximum element is=5
*/