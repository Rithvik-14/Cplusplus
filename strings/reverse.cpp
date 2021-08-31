                             ////REVERSE STRING///

/*#include<bits/stdc++.h>
using namespace std;
int main()
/*{
    string str = "geeksforgeeks";
    reverse(str.begin(),str.end());

    cout<<str<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main() 
{
/*string s="rithvik";
int len=0;
char temp;

while(s[len]!='\0'){
    len++;
}
cout<<len<<endl;

for(int i=0;i<(len-1)/2;i++)
{
    temp=s[i];
    s[i]=s[len-1-i];
    s[len-1-i]=temp;
}
cout<<"string is : "<<s;*/
 
 string str;
 getline(cin,str);

 string newstr = "";

 int l= str.length()-1;

 while(l>=0){
     newstr = newstr + str[l];
     l--;
 } 

 cout<<newstr;
 return 0;

}