#include<iostream>
using namespace std;
void hvd(int);
void hvd(int n)
{
    int i,a=0;
    while(n!=0)
    {
        i=n%10;
        if(i>=a){
        a=i;}
        n=n/10;
    }
    cout<<"The highest value digit is "<<a;

}
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    hvd(n);
}