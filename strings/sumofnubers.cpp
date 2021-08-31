///calculate sum of numbers///

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int sum=0;

    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='0') && (str[i]<='9')){
            sum =sum+(str[i]-'0');
        }
    }

    cout<<"sum is : "<<sum;
}
