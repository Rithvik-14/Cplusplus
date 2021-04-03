 #include<iostream>
using namespace std;
void f(const int *p){
    (*p)++;       
}  
int main()
{
     const int i=10;      ////by adding constant we make the variable value constant.and we have to intialize the constant there itself;
    int const i=12;         //either of the two are same.
    int j=12;
    const int &k=j;     ///constant refrence from a non constant int.
    f(&j);
    j++;
     cout<<k<<endl;
   
    ///constant refernce with constent value
   
    int const i1=15;
    const int &k2=i1;

    ///refernce from constsmt int
   
    int const i3=7;
   
   // int &k3=i3; ////here we cant do this as refernce value which it is pointing is const so.

    int const *p=&i;
    int const *p2=&j;
    cout<<*p2<<endl;
    j++;
    cout<<p2<<endl;

}

