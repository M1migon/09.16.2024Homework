#include <iostream>
#include <random>
using namespace std;
int randInt(int l, int k)
{
	return l + rand() % (k - l + 1);
}

int main()
{	
	srand(time(0));
	// task 1
	//int a[5];
	//for (int i = 0; i < 5; i++){ 
	//	a[i] = i;
	//}
	//for (int i = 0; i < 5; i++){
	//	cout << a[i] << endl;
	//}
	//cout << endl;
	//for (int i = 4; i > -1; i--) {
	//	cout << a[i] << endl;
	//}
	// -----

	//task 2
	//int b[20];
	//for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
	//{
	//	b[i] = randInt(0, 9);
	//}
	//for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		cout << b[i] << endl;
	//	}
	//}

	//task 3
	/*int sum = 0;
	int c[10];
	for (int i = 0; i < sizeof(c)/sizeof(c[0]); i++)
	{
		c[i] = randInt(-20, 20);
	}
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		cout << c[i] << "  ";
	}
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		if (c[i] >= 0)
		{
			sum = sum + c[i];
		}
	}
	cout << endl << sum << endl; */

	//task 4
	/*int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int c[10];
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		c[i] = randInt(-5, 5);
	}
	cout << "arr -> ";
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		cout << c[i] << "  ";
	}
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		if (c[i] > 0)
		{
			sum1++;
		}
		else if (c[i] < 0)
		{
			sum2++;
		}
		else if (c[i] = 0)
		{
			sum3++;
		}
	}
	cout << endl << "  sum1->" << sum1 << "  sum2->" << sum2 << "  sum3->" << sum3;*/

	//task 5
	/*int sum1 = 0;
	int sum2 = 0;	
	int count1 = 0;
	int c[10];
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		c[i] = randInt(-5, 5);
	}
	cout << "arr -> ";
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		cout << c[i] << "  ";
	}
	for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
	{
		if (c[i] > 0)
		{
			sum1 = sum1 + c[i];
		}
		else if (c[i] < 0)
		{
			count1++;
			sum2 = sum2 + c[i];
		}
	}
	cout << endl << "  sum1-> " << sum1 << "  sum2-> " << sum2 / count1;*/
}
