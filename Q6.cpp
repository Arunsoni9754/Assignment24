#include<iostream>
using namespace std;
void swap(int &,int &);
void swap(int &m,int &n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}