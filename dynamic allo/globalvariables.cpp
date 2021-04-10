#include<iostream>             ///this is prepocessive directive
using namespace std;
//#define PI 3.14             ////we use the function [define] bcz the value of pi will defined before compiling so no one can change the vlaue of pi during compiling 
 /// int main()

     //   int r;
      //  cin>>r;
       // cout<<PI*r*r;
       int a;           ///instead of declaring a variable inside function declare it globally so any function can use it
    void g()
    {
        a++;
        cout<<a<<endl;
    }
    void f()
    {
        cout<<a<<endl;
        a++;
        g();

    }
    int main(){
        a=10;
        f();
        cout<<a<<endl;
    }

////global variable may risk as...if anyone changes the value all functons values will change