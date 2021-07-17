
#include <iostream>

using namespace std;

int main()
{
    int i,j,n,val=1;
    cout << "Enter n" << endl;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<val;
            val++;
            
        }
       
        cout<<endl;

    }

    return 0;
}
