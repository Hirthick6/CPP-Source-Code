#include <iostream>
#include<stdlib.h>
#define SIZE 10
using namespace std;
int h[SIZE]={NULL};
void insert()
{
 int key,index,i,flag=0,hkey;
 cout<<"\nenter a value to insert into hash table\n";
 cin>>key;
 hkey=key%SIZE;
 for(i=0;i<SIZE;i++)
    {
     index=(hkey+i)%SIZE;
     if(h[index] == NULL)
     {
        h[index]=key;
         break;
     }
    }
    if(i ==SIZE)
     cout<<"\nelement cannot be inserted\n";
}
void search()
{
 int key,index,i,flag=0,hkey;
 cout<<"\nenter search element\n";
 cin>>key;
 hkey=key%SIZE;
 for(i=0;i<SIZE; i++)
 {
    index=(hkey+i)%SIZE;
    if(h[index]==key)
    {
      cout<<"value is found at index "<<index;
      break;
    }
  }
  if(i == SIZE)
    cout<<"\n value is not found\n";
}
void display()
{
  int i;
  cout<<"\nelements in the hash table are \n";
  for(i=0;i< SIZE; i++)
  cout<<"\nindex "<< i<<"\t value = "<<h[i];
}
int main()
{
    int ch,i;
    while(1)
    {
        cout<<"\nEnter your choice\n1.Insert\n2.Display\n3.Search\n4.Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                exit(0);
        }
    }
return 0;
}
