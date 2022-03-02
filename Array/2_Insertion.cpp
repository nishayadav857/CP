#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int i=0;
    char choice = 'a';
    cout<<"Code Output"<<endl;
    do{
        cout<<"enter the "<<i+1<<" element"<<endl;
        cin>>arr[i];
        i+1;
        cout<<"do you want to continue(y/n)"<<endl;
        cin>>choice;
    }
    while(choice == 'y');
    return 0;
    
}
