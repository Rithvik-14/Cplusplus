#include<iostream>
using namespace std;

int factorial(int n)
{
    cout<<n<<endl;
    if(n == 0){         //base level
        return 1;
    }
     int smalloutput = factorial(n-1);  // induction hypothesis
    return n*smalloutput;               // induction step using step 2.
}

int main()
{
    int n;
    cin>>n;

    int output = factorial(n);
    cout<<output<<endl;
}