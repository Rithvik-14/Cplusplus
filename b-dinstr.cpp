//binary to decimal using string..

#include<bits/stdc++.h>
using namespace std;

/*void binarytodecimal(string s)
{                                             1010 ----  10
    int base=1;
    int ans=0;
    int size = s.length();

    for(int i=size-1;i>=0;i--)
    {
        ans=ans+ ((int)(s[i]-'0')*base);              since '0' has the ascii code for 48 so subtract it with the charachter 
        base=base*2;
    }

    cout<<ans;
}

int main()
{
    string s;
    cin>>s;
    binarytodecimal(s);
}*/

////decimal to binary

string decimaltobinary(int n)
{
    string s ="";
    while(n>0)
    {
        int t = n%2;
        s= s+ to_string(t);    ///we used to_string to convert the int value(i.e remainder) to binary
        n=n/2;
    }

    reverse(s.begin(),s.end());
    return s;    


}

int main()
{
    int n;
    cin>>n;
    string ans =decimaltobinary(n);
    cout<<ans;
}