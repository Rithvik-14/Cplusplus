#include<iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<a<<endl;
    ///the above line and below line will store the same address because ([a] has no seperate memory like pointer p)
    /// so it will store the same address as a[0];
    //we cannot reassiagn a....see last lines.
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;

    a[0]=5;
    a[1]=6;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;     ////deference of the a
    cout<<a+1<<endl;        ////this gives us the address
    
    int*p=&a[0];           
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    p=p+1;
            // (a) cannot be reassiagnable
            //a=a+1;
             //and =we cannot do a++;
            //instead we can do this
    p=a+1;


            //CHARACHTER ARRAYS//..................

    int a[]={1,2,3};
    char b[]= "abc";
    cout<<a<<endl;
    cout<< b <<endl;
        //in charachter array value inside the memory will be stored instaed of adderss 
        //here cout will behave in diferent manner.
    char*c = &b[0];
    char*c= &b[0];
    cout<< c <<endl;

    char c1 = 'a';
    char*pc = &c1;

    cout<< c1 <<endl;
    cout<< pc <<endl;
}
    