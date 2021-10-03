#include<iostream>
using namespace std;
int main()
{
   string str1,str2;
   getline(cin,str1);
   getline(cin,str2);
   int i,j;
   int n1=str1.length();
   int n2 = str2.length();
   int c=0;

   if(n1 != n2)
   {
       cout<<"Not an anagram";
   } 
   else
   {
       
       for(int i=0;i<n1;i++)
       {
           for(int j=0;j<n2;j++)
           {
               if(str1[i] ==str2[j])
                    c++; 
           }
       }
   }
   if(c==n1)
   {
       cout<<"yes it an anagram"<<endl;
   }
}
