#include <iostream>		
using namespace std;
int summa;
void Laske(int, int);

void main()
{
	int luku1;
	int luku2;
	cout << "Rahamääräsi: ";
	cin >> luku1;
	cout << "Lihapiirakkasi hinta: ";
	cin >> luku2;
			
	if (luku1 < luku2)
	{
		cout << "Mene paastoamaan";
	}
				
	if (luku1 >= luku2)
	{
		Laske(luku1, luku2);
		cout << "Sinulla on rahaa jäljellä" << summa;
	}
	
	

}
void Laske(int luku1, int luku2)

{
	summa = luku1 - luku2;
}