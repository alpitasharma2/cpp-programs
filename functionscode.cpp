/*-----------SUM OF 2 NUMBERS USING FUNCTIONSSS-------*/
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

/*------------------FACTORIAL OF A NUMBER USING FUNCTIONS ------------*/
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return (fact);



}

int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
   int answer = factorial(n);
    cout << answer;


}

/*------------------------FIBONACCI SERIES USING FUNCTIONS--------------------------*/
#include <iostream>
using namespace std;

void fibonacci_series(int n)
{
    int a=0,b=1,c,i;
    cout<<a<<endl<<b<<endl;
    for(i=0;i<n-2;i++)
   {
       c = a+b;
       cout<<c<<endl;
       a=b;
       b=c;
   }

}

int main()
{
    int n,result;
    cout<<"enter the number: "<<endl;
    cin>>n;
    fibonacci_series(n);

   return 0;
}



