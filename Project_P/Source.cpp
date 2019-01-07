#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void problem2 ()
{
	unsigned int year;
	string name;
	cout << "What year is it?\n";
	cin >> year;
	cout << "What is your name?\n";
	cin >> name;
	cout << "Hello, " << name << ", it is " << year << endl;
}

void problem3()
{
	unsigned int x1 = 7;
	unsigned int x2 = 3;

	cout << x1 + x2 << endl;
	cout << x2 - x1 << endl;
	cout << x2 / x1 << endl;
	cout << x1 % x2 << endl;
}

void problem4and5()
{
	float x1;
	float x2;
	float x3;
	float x4;

	cout << "What's the temp in F?\n";
	cin >> x1;
	x2 = (x1 - 32) / 1.8;
	cout << "So, that's the temp in F " << x1 << endl;
	cout << "And that's the temp in C " << x2 << endl;

	cout << "Now let's talk about mass\n";
	cout << "Pounds?\n";
	cin >> x3;
	x4 = x3 * 0.45359237;
	cout << "Here are your pounds " << x3 << endl;
	cout << "Here are your kilos " << x4 << endl;
}

void problem6()
{
	srand(time(NULL));
	unsigned int v1 = rand() % 6 + 1;

	cout << v1 << endl;
}

void problem7()
{
	srand(time(NULL));
	int x1;

	cout << "Enter number of sides\n";
	cin >> x1;

	unsigned int v1 = rand() % x1 + 1;

	cout << v1 << endl;
}

void problem8()
{
	srand(time(NULL));
	unsigned int v1 = rand() % 6 + 1;
	unsigned int v2 = rand() % 6 + 1;
	unsigned int total = v1 + v2;

	if (total == 7)
	{
		cout << "We've got seven!\n";
		cout << "The first die was: " << v1 << endl;
		cout << "The second die was: " << v2 << endl;
	}
}

void CS1()
{
	string name;
	unsigned int age;

	cout << "What's your name?\n";
	cin >> name;
	cout << "What's your age?\n";
	cin >> age;

	if (age < 2)
		cout << "You are a child!\n";
	else if (age > 150)
		cout << "Give me the pills your take.\n";
	else
		cout << "You're of proper age - welcome to casino!\n";
}

void CS2finish()
{
	int x1;
	int x2;
	int x3;

	cout << "1st  integer:\n";
	cin >> x1;
	if (x1 < 0 || x1>9)
	{
		cout << "Wrong value, try again: \n";
		cin >> x1;
	}
	else
		cout << "1st integer is " << x1 << endl;
	cout << "2nd  integer:\n";
	cin >> x2;
	if (x2 < 0 || x2>9 || x2 == x1)
	{
		cout << "Wrong value, try again: \n";
		cin >> x2;
	}
	else
		cout << "2nd integer is " << x2 << endl;
	cout << "3rd  integer:\n";
	cin >> x3;
	if (x2 < 0 || x2>9 || x3 == x2 || x3 == x1)
	{
		cout << "Wrong value, try again: \n";
		cin >> x3;
	}
	else
		cout << "3rd integer is " << x3 << endl;
}

void CS3a()
{
	int x1;

	cout << "Which is a capital city of a coutry?\n";
	cout << "1.London\n";
	cout << "2.Paris\n";
	cout << "3.New York\n";
	cout << "4.Coventry\n";
	cout << "What's your answer?";
	cin >> x1;
	if (x1 == 1 || x1 == 2)
		cout << "Damn right\n";
	else
		cout << "Bad luck\n";
}

void CS3bfinish()
{
	int ans1;
	int ans2;

	cout << "Name 2 countries which are in the EU\n";
	cout << "1.Norway\n";
	cout << "2.Sweden\n";
	cout << "3.Denmark\n";
	cout << "4.France\n";
	cout << "What's your answer?";
	cin >> ans1 >> ans2;

	if (ans1 == ans2)
		cout << "Don't cheat!\n";
	else if (ans1 == 1 || ans2 == 1)
		cout << "Bad luck\n";
	else
		cout << "Damn right\n";
}

void CS4()
{
	cout << "P(1) \t Sqrt \t P(4)\n";
	for (unsigned int i = 0; i < 26; i++)
	{
		cout << i << "\t" << sqrt(i) << "\t" << i * i*i*i << endl;
	}
}

void CS5()
{
	string name;
	unsigned int age;

	cout << "What's your name?\n";
	cin >> name;
	cout << "What's your age?\n";
	cin >> age;

	while (age < 2 || age > 150)
	{
		cout << "Wrong age! Try again: \n";
		cin >> age;
	}

	cout << "Welcome to our casino!\n";
}

void GNG2()
{
	srand(time(NULL));
	unsigned int x1;

	unsigned int v1 = rand() % 10;
	cout << "Guess the number: \n";
	cin >> x1;
	while (x1 != v1 || x1 > 9)
	{
		cout << "Wrong answer, try again: \n";
		cin >> x1;
	}
	cout << "Good job!\n";
}

void GNG3finishwrongnumberclause()
{
	srand(time(NULL));
	unsigned int x1;

	unsigned int v1 = rand() % 1000;
	cout << "Guess the number: \n";
	cin >> x1;
	while (x1 > v1)
	{
		cout << "Go down and try again: \n";
		cin >> x1;
	}
	while (x1 < v1)
	{
		cout << "Go up and try again: \n";
		cin >> x1;
	}

	cout << "Good job!\n";
}

int main ()
{

}