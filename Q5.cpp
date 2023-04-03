#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int temp,i,l;
    cout<<"Enter the number to be checked  ";
    cin>>temp;
    for(i=1;;i++)
    {
        l=fibo(i);
    if(l==temp)
    {
        cout<<"number found";
        exit(0);
    }
    if(l>temp)
    {
        cout<<" not";
        exit(0);
    }
    }
}
int fibo(int a)
{
    if (a==1||a==2)
    {
        return 1;
    }
    return(fibo(a-1)+fibo(a-2));
    
}