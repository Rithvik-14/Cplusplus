#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i;
    int j;
    char str[10];
    cout<<"enter string"<<endl;
    cin.getline(str,10);
    //cin>>str;
    //cout<< "str"<<endl;
     j = strlen(str)-1;

    for(i=0;i<j;i++,j--){

        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str<<endl;
    return 0;

}