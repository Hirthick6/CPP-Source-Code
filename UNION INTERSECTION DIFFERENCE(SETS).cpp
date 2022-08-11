#include<iostream>
using namespace std;
int main()
{
    char a[20],b[20],c,s[20],g[40],d[20],m[20];
    int l1=0,l2=0,f=0,i,o=0,l,j;
    cout<<"ENTER A STRING : ";
    cin>>a;
    cout<<"\n ENTER A STRING : ";
    cin>>b;
    i=0;
while(a[i]!='\0')
{
    l1++;
    i++;
}
i=0;
while(b[i]!='\0')
{
    l2++;
    i++;
}
    i=0;
  l=0;
   for(i=0;i<l1;i++)
   {
       for(j=0;j<i;j++)
       {
           if(a[i]==a[j])
            break;
       }
       if(i==j)
        {d[l]=a[i];
        l++;
        }
   }

   int n=0;
   for(i=0;i<l2;i++)
   {
       for(j=0;j<i;j++)
       {
           if(b[i]==b[j])
            break;
       }
       if(i==j)
        {m[n]=b[i];
        n++;
        }
   }

    int p=0,q=0;

       while (d[p] != '\0')
        {
        g[p] = d[p];
        p++;
    }

    for (i= 0;i<l2;i++) {
        f = 0;
        for (j = 0; j < l; j++) {
            if (b[i] == d[j]) {
                f = 1;
            }
        }
        if (f == 0) {
            g[p] = b[i];
            p++;
}
    }
    cout<<endl<<"UNION : ";
    for(i=0;i<p;i++)
        cout<<g[i]<<" ";
    cout<<endl<<"DIFFERENCE :"<<endl;
    for(i=0;i<l1;i++)
        if(a[i]!=b[i])
        cout<<"\t"<<a[i]<<" and "<<b[i]<<endl;
    cout<<"INTERSECTION : ";
    for(i=0;i<l;i++)
    {
    for(j=0;j<n;j++)
    {

            if(d[i]==m[j])
                {cout<<d[i]<<" ";
                }}
    }
}
