#include<iostream>
using namespace std;
int prime(int);
int prime(int i)
{
    int j,l=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            l=1;
            break;
        }
    }
    return l;
}
int main()
{
int n,k;
cout<<"Enter the number ";
cin>>n;
k=prime(n);
if(k==0)
{
    cout<<"This is a prime number";
}
else 
{
  cout<<"This is not a prime number";  
}
return 0;
}