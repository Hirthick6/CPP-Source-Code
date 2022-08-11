#include<bits/stdc++.h>
using namespace std;
template <typename T>
class sum
{
    public:
    T add(T a, T b){
   T result = "";
    int temp = 0;
   int size_a = a.size() - 1;
   int size_b = b.size() - 1;
   while (size_a >= 0 || size_b >= 0 || temp == 1){
      temp += ((size_a >= 0)? a[size_a] - '0': 0);
      temp += ((size_b >= 0)? b[size_b] - '0': 0);
      result = char(temp % 2 + '0') + result;
      temp /= 2;
      size_a--; size_b--;
   }
   return result;
}};
int main(){
    sum<string> c;
   string a = "10101", b="11100";
   cout<<"sum of two binary number's are : "<<c.add(a, b);
   return 0;
}
