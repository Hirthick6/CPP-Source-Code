#include <iostream>
using namespace std;
template <typename T>
class Array
{
private:
	int size;
public:
	Array(T arr[], int s);
	void print(T arr[]);
};

template <typename T> Array<T>::Array(T arr[], int s)
{
	size = s;
	int sum=0;
	for (int i = 0; i < size; i++)
		sum=sum+arr[i];
		cout<<"Sum of array elements "<<sum;
}
template <typename T> void Array<T>::print(T arr[])
{
	for (int i = 0; i < size; i++)
		cout << " " << arr[i];
	cout << endl;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	Array<int> a(arr, 5);
	a.print(arr);

	return 0;
}
