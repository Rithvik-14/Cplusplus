#include<iostream>
using namespace std;
void passbyrefrence(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
void passbyvalue(int x, int y){     ////////this is pass by value where thhe values of function (passbyvalue) is changing not the values at the main function 
    int z=x;
    x=y;
    y=z;
}
int main()
{
     int a = 5, b = 6;
     cout<<"before swapping\n"<<a<<endl<<b<<endl;
     passbyvalue(a,b);
     passbyrefrence(a,b);
     cout<<"after swapping\n"<<a<<endl<<b<<endl;
     return 0;


}