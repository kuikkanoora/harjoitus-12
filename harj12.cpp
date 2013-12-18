/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus12
*Tekijä: Noora Kuikka
*PVM: 22.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
*tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
*
*1
*22
*333
*4444
*55555
*666666
*
*Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
*cout << rivinro;
*Versio 1.0 H4719 22.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int input;
	int num;
	int rivinro = 1;
	
	cout << "Enter a number from 1-9: ";
	cin >> input;
	
	for (int i = 1; i <= input; i++)
    {
		for (num = 1; num <= i; num++)
		{
	        cout << rivinro;
			
		}
		rivinro++;
		cout << "\n";
	}
	
	return 0;
}
    