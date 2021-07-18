#include <iostream>

using namespace std;

int main()
{
    int i,j,n,k;
    cout << "enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
          cout<<k;
          k++;
        }
        cout<<endl;
    }

    return 0;
}

