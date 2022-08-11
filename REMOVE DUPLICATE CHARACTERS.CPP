#include<iostream>
//#include<stdio.h>
using namespace std;
string merge(string s1, string s2)
{
  string result = " ";
  for (int i = 0; i < s1.length() ||i < s2.length(); i++)
  {
    if (i < s1.length())
      result += s1[i];
    if (i < s2.length())
      result += s2[i];
  }
  return result;
}
int main()
{
  string s1,s2,s3;
  cout<<"Enter string 1";
  cin>>s1;
  cout<<"Enter string 2";
  cin>>s2;
  s3=merge(s1, s2);
  cout<<s3;
  return 0;
}
