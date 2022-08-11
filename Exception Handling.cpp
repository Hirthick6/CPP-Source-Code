#include <iostream>
using namespace std;

int main()
{
// Some code
cout << "Before try \n";
try {
	cout << "Inside try \n";
float	x=10;
	if (x < 0)
	{
		throw x=10;
		cout << "After throw (Never executed) \n";
	}
}
catch (int x ) {
	cout << "Exception Caught \n";
}

cout << "After catch (Will be executed) \n";
return 0;
}


