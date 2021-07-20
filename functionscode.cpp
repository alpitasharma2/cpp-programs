#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int num3;
    num3=x+y;
    return (num3);
}


int main()
{
    int num1,num2,res;
    cin>>num1>>num2;
    res = sum(num1,num2);
    cout<<res;
    return 0;

}
