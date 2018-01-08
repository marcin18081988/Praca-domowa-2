#include <iostream>

double dodaj (double a, double b)
{
	 return a+b;	 
}
double odejmij (double a, double b)
{
	return a-b;
}
double pomnoz (double a, double b)
{
	return a*b;
}
double podziel (double a, double b)
{
	return a/b;
}
void wyjscie ()
{
	exit(0);
}
double kalkulator (double a, double b, int wybor)
{
	switch (wybor)
		{
			case '+':
				return dodaj(a,b);
			case '-':
				return odejmij(a,b);
			case '*':
				return pomnoz(a,b);
			case '/':
				return podziel(a,b);
			case 'w':
				wyjscie();
			
		}		
}
int main(int argc, char** argv) {

	double a,b;
	char wybor; 
	while (5)
	{
	cout << "kalkulator\n";
	cout << "podaj pierwsza liczbe \n"; cin >> a;
	
	do
	{
		cin.clear(0);
		cin.sync();
		cin >> a;
	} while (cin.fail());
	
	
	cout << "podaj druga liczbe \n"; cin >> b;
	cout <<"Podaj dzialanie. +, -, *, /, w-wyjscie\n";
	cin >> wybor;

	cout << kalkulator (a,b,wybor) << endl;		
		
		}

	return 0;
