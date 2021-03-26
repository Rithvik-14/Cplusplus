//DOUBLE pointers are pointers which store the value of other pointers//
#include<iostream>
using namespace std;
void increment(int**p){
    p=p+1;
}
void increment2(int**p){
    *p=*p+1;///*(p++)   
}
void increment3(int**p){
    **p=**p+1;///*(p++)
}
int main(){
    int i=10;
    int*p=&i;              /////HERE WE WRITE int*p SPECIFICALLY AS WE HAVE TO TELL WHICH TYPE OF DATA WE ARE POINTING TO..//
    int**p2=&p;
    cout<<p2<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
}
