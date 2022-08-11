#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
  int count;
  A()
  {
      count=0;
  }
      A operator++()
      {
          count++;
      }
      A operator--()
      {
          count--;
      }
      void display()
      {
          cout<<"NO OF PERSONS INSIDE THE BANK = "<<count<<endl;
      }
};
int main()
{
    A a;
    int ch;
    do
    {
    cout<<"WELCOME TO OUR BANK\nIF YOU'RE ENTERING PRESS 1\nIF YOUR'RE EXITING PRESS 2\nTO SEE THE COUNT PRESS 3\nPRESS 4 TO EXIT\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        ++a;
        break;
    case 2:
        --a;
        break;
    case 3:
        a.display();
        break;
    case 4:
        exit(0);
    }
    }while(ch!=4);
}
