#include<iostream>
using namespace std;

int binarysearch(int arr,int n,int key)
{
    while(s<=e)
    {
        mid=s+e/2;
        if(mid=key){
            return mid;
        }
        else if (mid>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}