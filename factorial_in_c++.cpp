//factorial program in c++
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return n;
    }
    return n*factorial(n-1);    //recursion call
}
int main()
{
    int n;
    cout<<"Enter the number you want to find factorial of:"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is="<<factorial(n);   //function call
}
/* output->
Enter the number you want to find factorial of:
5
The factorial of 5 is=120
*/