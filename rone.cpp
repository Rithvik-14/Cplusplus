#include<iostream>
using namespace std;


int max(int x,int y,int z){
        if((x>y)&&(x>z)){
            return x;
        }
        if else((y>x)&&(y>z)){
            return y;
        }
        else{
            return z;
        }

    }
int main(){
    int a,b,c;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b>>c;
    int t = max(a,b,c);
    cout<<"the greatest number is:"<<t<<endl;
}


    

