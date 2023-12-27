#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter two values:";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b;
}