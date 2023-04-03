#include<iostream>
using namespace std;
void area(float);
void area(float,float);
void area(double,double);
void area(float r)
{
    cout<<"area of circle is "<<22*r*r/7;
}
void area(float a,float b)
{
    cout<<"area of rectangle is "<<a*b;
}
void area(double h,double p)
{
    cout<<"Area of triangle is "<<0.5*h*p;
}
int main()
{
    float r,a,b;
    double h,p;
    cout<<"Enter the radius of circle ";
    cin>>r;
    cout<<"Enter the sides of rectangle ";
    cin>>a>>b;
    cout<<"Enter the base and height of triangle ";
    cin>>h>>p;
    area(r);
        cout<<endl;
    area(a,b);    cout<<endl;

    area(h,p);
}