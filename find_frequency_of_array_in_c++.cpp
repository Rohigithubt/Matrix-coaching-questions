//to find frequency of each element of the array in c++ language
#include<bits/stdc++.h>
using namespace std;
void findfrequency(int *arr,int size){   //function definition
    int visited=-1;
    int *freq=new int[50];   //create frequency array
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
                cout<<"the frequency of the "<<arr[i]<<" is="<<freq[i]<<endl;
            }
        }
    delete[] freq;   //delete wastage memory of the array
}
int main()
{
    int size;
    cout<<"Enter the size of the array:\n";
    cin>>size;
    int *arr=new int[50];   //create a dynamic array
    cout<<"Enter the elements in the array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    findfrequency(arr,size);   //function call
    delete[] arr;
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
the frequency of the 3 is=3
the frequency of the 4 is=1
the frequency of the 5 is=1
*/