#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
           return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result= linearsearch(arr,x,n);
    if(result==-1)
      cout<<"element is not presentin array";
    else
      cout<<"element is present at index\t"<<result;
    return 0;
}