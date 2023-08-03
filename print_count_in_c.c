//print count range from starting to end in c
#include<stdio.h>
#include<conio.h>
void count(int i,int n){
    if(i>n){
        return;
    }
    
   printf("%d\n",i);
    count(i+1,n);  //recursion call
  
}
int main()
{
    int i,n;
    printf("Enter the starting number you want to start :");
    scanf("%d",&i);
    printf("Enter the number you want to print upto :");
    scanf("%d",&n);
    count(i,n);   //function call
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