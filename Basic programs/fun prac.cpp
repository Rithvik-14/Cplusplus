#include<iostream>
using namespace std;


    int max(int x,int y,int z){
        if((x>y)&&x>z){
            cout<<x<<"is the greatest"<<endl;
        }
         else if((y>x)&&(y>z)){
            cout<<y<<"is grearest"<<endl;
        }
        else{
            cout<<z<<endl;
        }

    }
int main(){
    int a,b,c;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b>>c;
    int z = max(a,b,c);
    cout<<"the greatest number is:"<<z<<endl;
}


    

