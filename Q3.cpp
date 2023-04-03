#include<iostream>
using namespace std;
void power(int,int);
void power(int x,int y)
{
    int i,a=1;
    for(i=1;i<=y;i++)
    {
        a=a*x;
    }
    cout<<a;
}
int main()
{
    int x,y;
    cout<<"ENter x and y ";
    cin>>x>>y;
    power(x,y);

}