#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;

    int r=0;

    while(n<0) {
        int lastd=n%10;
        r = r*10 + lastd;
        n=n/10;
    }
    cout<<r<<endl;

    
    return 0;
    

}