
#include<iostream>
using namespace std;
int main()
{
    int i=78;
    int*p = &i;
    char c=i;            ///// this is implicit typecasting////
    cout<<c<<endl;
    ///char *c =i; this cannot be done because char cannot store an int value//
    char*pc = (char*)p;  //this is called as explicit typecasting...
    cout<<p<<endl;
    cout<<pc<<endl;         ///this will print all the charchters until null charchetr comes..
    cout<<*p<<endl;
    cout<<pc<<endl;

    cout<<*pc<<endl;


    ///below lines cannot be implemented as as data is at the 1st place..instaed of last..  //[CALLED AS LITTLE endian]
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
}