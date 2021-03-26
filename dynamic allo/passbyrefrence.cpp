#include<iostream>
using namespace std;
void increment(int& n){               ////the variable here can same or diffrent//
    n++;
}
int main()
{
    int i=10;

    increment(i);
    cout<<i<<endl;
    int &j=i;   ////    here we declaring [j] as a refrence variarble[i.e no seperate space is being created for j..it should be
            //sharing the adress of previous variable.//
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    int k=100;
    j=k;
    cout<<i<<endl;
}


