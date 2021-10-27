#include <iostream>

using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]>key)
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
    cout<<binarySearch(arr,n,key);

    return 0;
}
