/*Lab03 Andrew Watts*/


#include<iostream>

using std::cout;
using std::cin;
using std::endl;


double n(0), sum(0);
double product(1);


int main()
{
	/*while(n>=0)
	{
	cout << "Input an 'n' to sum to: (0 or negative number to end)" << endl;
	cin >> n;
	if (n <= 0) { break; }
	for (int i = 1; i <= n; i++)
	{
	sum = sum + i;
	}
	cout << "The sum from 1 to " << n << " is " << sum << endl;
	sum = 0; //restes the sum for the loop
	}  //sum part, steps 1 - 3*/

	//factorial part steps 4 - 5
	/*while (n >= 0)
	{
	cout << "Input an 'n' compute factorial of: (0 or negative number to end)" << endl;
	cin >> n;
	if (n <= 0) { break; }
	for (long int i = n; i >= 1; i--)
	{
	product = product * i;
	}
	cout << n << "!=" << product << endl;
	product = 1; //resets the product for the loop
	}*/

	//step 6 
	/*while (n >= 0)
	{
	double nverse(1); //inverse of n, get it?
		double total(0); //since sum is already the name of something
		cout << "Input an 'n' sum the 1/n values of: (0 or negative number to end)" << endl;
		cin >> n;
		if (n <= 0) { break; }
		nverse = 1 / n;
	
		for (int i = 1; i <= n; i++)
		{
			total = total + nverse;
		}
		total = total - 1;

		cout << "The sum - 1 for " << n << " values:" << total << endl;
		total = 0;
	}*/

	//step 7 and 8

	for (double i = 3.4; i < 4.4; i += 0.2) 
	{ cout << "i = " << i << endl; }

	system("pause");
	return(0);
}
