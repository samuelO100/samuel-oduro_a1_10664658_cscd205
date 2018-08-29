#include <iostream>
using namespace std;

int main()
{
	int k, l;
	bool isPrime = true;
	
	cout << "Enter number to test for prime: ";
	cin>> k;
	
	for(l = 2; l <= k / 2; ++l)
	{
		if(k % l == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
	cout << "the number is a prime number";
	else
	cout << "the number is not a prime number";
	
	return 0;
}
