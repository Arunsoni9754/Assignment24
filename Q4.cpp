#include<iostream>
using namespace std;
void pascal(int);
int fact(int);
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return (f);
}
int police(int,int);
int police(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void pascal(int a)
{
    int i,j,k,r;
    for(i=1;i<=a;i++)
    {
         k=1;r=0;
        for(j=1;j<=2*a-1;j++)
        {
            if(j>=a+1-i&&j<=a-1+i&&k)
            {
                cout<<police(i-1,r);
                k=0;r++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
    
}
int main()
{
    int a;
    cout<<"e ter the ni ofd rows ";
    cin>>a;
    pascal(a);
    }