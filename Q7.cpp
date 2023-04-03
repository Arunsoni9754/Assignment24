#include<iostream>
using namespace std;
int add(int ,int ,int);
int add(int m,int n,int t=0)
{
    return m+n+t;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<add(a,b,c)<<" "<<add(a,b);
}