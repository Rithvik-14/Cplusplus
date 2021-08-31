#include<bits/stdc++.h>
using namespace std;
                                                    /////gadag ----gadag
int main()
{
    string str;
    cin>>str;

    int start = 0;
    int end = str.length()-1;

    while(start<=end){
        if(str[start]!=str[end]){
            cout<<"no"<<endl;
        }
        else{
            start++;
            end--;
        }
    
    }
    cout<<"yes"<<endl;

}