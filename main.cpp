#include<iostream>
#include<cmath>
using namespace std;
int main()
{  double a,b,c,root1,root2;                  //不需要()
    cout<<"请输入一元二次方程系数（a,b,c）【数字要用空格隔开喔】"<<endl;
    cin>>a>>b>>c;
    if(a==0)                                           //判断系数a是否为0
    {
        cout<<"这不是一个二元一次方程"<<endl;
        return -1;
    }
    double t=b*b-4*a*c;
    if(t<0)                                            //判断方程是否有实根
    {
        cout<<"方程无实根"<<endl;
        return -1;
    }
    if(t==0)                                           //判断两根是否相等
        root1=root2=-b/(2*a);
    else
    {
        root1=(-b+sqrt(t))/(2*a);
        root2=(-b-sqrt(t))/(2*a);
    }
    cout<<"方程的根为："<<root1<<"和"<<root2<<endl;
    return 0;
}
