/// occurence of  charachter


#include <iostream>
#include <string>
using namespace std;
 

int count(string s, char c)
{
    // Count variable
    int res = 0;
 
    for (int i=0;i<s.length();i++)
 
       
        if (s[i] == c)
            res++;
 
    return res;
}
 
// Driver code
int main()
{
    string str;
    char c;
    getline(cin,str);
    cin>>c;

    cout << count(str, c) << endl;
    return 0;
}
