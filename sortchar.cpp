//sort charachetr of a string    /////bubble sort
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"str is :";
    getline(cin,str);

    int len = str.length();

    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(str[j]>str[j+1]){

                char temp=str[j];
                str[j]=str[j+1];
                str[j+1] = temp;
            }
        }
    }

    cout<<"string after sorting : "<<str<<endl;
}