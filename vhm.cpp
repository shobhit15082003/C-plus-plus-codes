#include <bits/stdc++.h>
using namespace std;
class A{
    public :
    int a;
    public :
    int set(int x){
        a=x;
        return a;
    }
    double set(int x){
        a=x;
        return a;
    }

};
class B : public A{
    public :
    int b;
    public :
    void set(int x){
        b=x;
    }
};
class C : public B{
    public :
    int c;
    public :
    void set(int x){
        c=x;
    }
};
int main()
{
    A a;
    int x=a.set(5);
    double y=a.set(5);
    cout<<x<<y;


   C obj;
   // A obj=new A();
    obj.a=1;
    obj.b=2;
    obj.c=3;
   // cout<<obj.a+obj.b+obj.c<<endl;
}