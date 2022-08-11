#include<iostream>
using namespace std;
int main()
{
    int i,j,b,n=2,prime=0,sum=0;
    cout<<"\nEnter the number:";
    cin>>i;
    cout<<"enter number";
    cin>>j;

    while(n<i || n<j)
    {
        if(i%n==0 || j%n==0)
        {
            prime++;
        }
        n++;

    }
    if(prime==0)
    {
        cout<<"\nThis number is Prime\n";

    }
    else{
        cout<<"not prime\n";
    }
    sum=i+j;
    cout<<"sum-->"<<sum<<endl;

    return 0;
}
