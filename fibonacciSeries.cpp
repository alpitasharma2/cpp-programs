#include <iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,i,c;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<a<<endl<<b<<endl;
   for(i=0;i<n-2;i++)
   {
       c = a+b;
       cout<<c<<endl;
       a=b;
       b=c;
   }
   return 0;
}
