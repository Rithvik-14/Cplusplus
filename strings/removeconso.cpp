#include<iostream>
#include<string>
using namespace std;

/*void removeconso(string str)
{   
    int str1;
    for(int i=0;str[i]<=str.length();i++)
    {
        
       if(str[i]=='a'||str[i]=='A'|| str[i]=='e'||str[i]=='E' || str[i]=='o'||str[i]=='O'|| str[i]=='i' ||str[i]=='I' || str[i]=='u'||str[i]=='U' ){
            str1 += str[i];
       }   
    }
    cout<<str1<<endl;
    

}

int main()
{
    string str;
    cout<<"string is : "<<endl;
    getline(cin,str);
    removeconso(str);
}*/
int main(){
    string str = "Hello, have a good day", str1;
    for (int i = 0; i < str.length(); ++i)
    {
        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
            if (str[i] == 'I' || str[i] == 'i' || str[i] == 'U' || str[i] == 'u' || str[i] == 'O' || str[i] == 'o' || str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' )
            {
                str1 += str[i];
            }

    }
    cout << str1 <<'\n';
}