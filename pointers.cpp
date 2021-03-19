#include<iostream>
using namespace std;

int main(){
    int i=15;
    cout<<&i<<endl;///(pointers) are variables which stores the address of other variables 
    int * p=&i;
    int*q=p;
    cout<<*p<<endl;//--this is called as defrence operator(i.e if you have the address you can check the value at that the address)//
    cout<<p <<endl; 
    cout<<sizeof(p)<<endl;
    cout<<sizeof(i)<<endl;

    cout<<i<<endl;
    cout<<*p<<endl; ///i is same as *p;

    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=i;//a=*p (both same)
    a++; 
    cout<<a<<endl;

    i=23;
    cout<<i<<endl;
    cout<<*p<<endl;
     *p=12;
    (*p)++;
    cout<<i<<endl;
    cout<<*p<<endl;

    
}