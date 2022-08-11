#include <iostream>
using namespace std;
template <class V>
class sum
{
public:
    template<typename T>
    T oddoreven(T a[])
    {
        int i,oddSum=0,evenSum=0;
    for(i=0; i<6; i++){
        if(a[i]%2==0){
        evenSum=evenSum+a[i];
        }
    else{
             oddSum=oddSum+a[i];
        }
    }
     cout<<"The sum of odd numbers are:"<<oddSum;
     cout<<"\nThe sum of even numbers are:"<<evenSum;
    }
};
int main()
{
   sum<char> b;
    int a[6]={50,45,40,35,30,25};
    b.oddoreven<int>(a);
    return 0;
}
