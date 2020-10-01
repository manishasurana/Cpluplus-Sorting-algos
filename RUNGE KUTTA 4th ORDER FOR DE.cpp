#include <bits/stdc++.h>

using namespace std;

float f(float x,float y)
{
    float m;
    m=(x-y)/2;
    return m;
}
int main()
{
    cout << "RUNGE KUTTA 4th ORDER FOR DE" << endl;
    float x0,y0,k1,k2,k3,k4,k,y,x,h,xn;
    cout<<"Enter x0 y0 xn h :";
    cin>>x0>>y0>>xn>>h;
    cout<<endl<<endl<<"X"<<"  "<<"Y"<<endl;
    while(x<xn){
        k1=f(x0,y0);
        k2=f((x0+h/2.0),(y0+k1*h/2.0));
        k3=f((x0+h/2.0),(y0+k2*h/2.0));
        k4=f((x0+h),(y0+k3*h));
        k=((k1+2*k2+2*k3+k4)/6.0);
        y0=y0+k*h;
        x0=x0+h;
        cout<<x0<<"  "<<y0<<endl;
    }

    return 0;
}
