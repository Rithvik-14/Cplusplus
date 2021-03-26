#include<iostream>
using namespace std;
int main()
{

int a[]={1,2,3};
    char b[]= "abc";
    cout<<a<<endl;
    cout<< b <<endl;
        //in charachter array value inside the memory will be stored instaed of adderss 
        //here cout will behave in diferent manner.
    char*c = &b[0];
    cout<< c <<endl;

    char c1 = 'a';
    char*pc = &c1;

    cout<< c1 <<endl;
    cout<< pc <<endl;
}