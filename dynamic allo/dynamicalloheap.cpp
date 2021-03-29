#include<iostream>
using namespace std;
 int main()
 {
     int* p=new int;
     *p=10;
     ///cout<<*p<<endl;
     delete p;
     p=new int[100];     //this is array deletion
     delete []p;

     char* l=new char;
     
     int* pa=new int[5];
     int n;
     cout<<"enter the elements"<<endl;
     cin>>n;

     int*pa2= new int[n];
     for(int i=0;i<n;i++){
         cin>>pa2[i];
                                                        //////difrrence b/w ststic and dynamic is
                                                        ////it auto realese on the bsis of scope but thr latter has to be done manually
     }
     int max = -1;
     for(int i = 0;i < n;i++){
         if(max < pa2[i]){
             max = pa2[i];
         }
     }

     cout<< max <<endl;

 }