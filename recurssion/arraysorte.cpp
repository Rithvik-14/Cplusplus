#include<iostream>
using namespace std;

bool is_sorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(arr[0]<arr[1])
    {
        return false;
    }
    
    bool small_sorted = is_sorted(arr+1,n-1);
    return small_sorted;
}

int main()
{
    int n;
    int arr[] = {2,3,4,5,6};

    cin>>n;

    int output = is_sorted(arr,n);
    cout<<output<<endl;
}