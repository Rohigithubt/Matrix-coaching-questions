//print count range from starting to end in c++
#include<bits/stdc++.h>
using namespace std;
void count(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<"\n";
    count(i+1,n);    //recursion call
}
int main()
{
    int i,n;
    cout<<"Enter the starting number you want to start :";
    cin>>i;
    cout<<"Enter the number you want to print upto :";
    cin>>n;   
    count(i,n);    //function call
    return 0;
}
/* output->
Enter the starting number you want to start :0
Enter the number you want to print upto :10
0
1
2
3
4
5
6
7
8
9
10
*/