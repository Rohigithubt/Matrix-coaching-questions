//factorial program in c
#include<stdio.h>
#include<conio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1); //recursion call
}
int main()
{
    int n;
    printf("Enter the number you want to find factorial of :\n");
    scanf("%d",&n);
    printf("The factorial of %d is=%d",n,factorial(n));   //function call
}
/* output->
Enter the number you want to find factorial of :
5
The factorial of 5 is=120
*/