#include <iostream>

using namespace std;

int linearSearchh(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout<<"enter the size of an array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the elements of an array"<<endl;


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"enter the element you want to search in an array"<<endl;
    cin>>key;
    cout<<linearSearchh(arr,n,key);

    return 0;
}
