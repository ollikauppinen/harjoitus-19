/**********************************************************
*Tehtävä: Harjoitus19
*Tekijä: Olli Kauppinen
*PVM: 16.11.2013
*Kuvaus:
*Tee ohjelma, joka toimii auton nopeusmittarina.
*Periaate on seuraava: Näppäimistä toimii
*nopeusanturina ja näyttä mittarin näyttänä.
*Nopeusmittari laskee viiden viimeisen nopeuden
*keskiarvon ja tulostaa sen nykyisenä nopeutena
*näytälle. Negatiivinen nopeus lopettaa ohjelman.
*Toiminta on siis seuraava:
*Ohjelman kaynnistyksessa mittari näyttää nolla
*0
*0
*0
*0
*0 (alkutila) nopeus = 0 km/h
*Anna nopeus: 10 => 2 km/h
*Anna nopeus: 20 => 6 km/h
*Anna nopeus: 30 => 12 km/h
*Anna nopeus: 40 => 20 km/h
*Anna nopeus: 50 => 30 km/h
*Anna nopeus: 50 => 38 km/h
*Anna nopeus: 50 => 44 km/h
*Anna nopeus: 50 => 48 km/h
*Anna nopeus: 50 => 50 km/h
*Anna nopeus: 50 => 50 km/h
*Anna nopeus: -5 => loppu
*
*Toteuta kayttaen taulukkoa.
*
* Versio 1.0 H4718 16.11.2013
***********************************************************/

#include<iostream>
using namespace std;

const int MAX_TAULU = 5;

int main()
{
	int nopeus[MAX_TAULU] = {0,0,0,0,0};
	int i = 0;
	int summa;
	int karvo;
	int input;

	cout << "\nNopeusmittari, syötä negatiivinen luku lopettaaksesi\n" << endl;

	do
	{
		cout << "Anna nopeus: ";
		cin >> nopeus[i];
		input = nopeus[i];
		summa = nopeus[0]+nopeus[1]+nopeus[2]+nopeus[3]+nopeus[4];
		karvo = summa/MAX_TAULU;
		if (input >=0)
		{
		cout << " --> " << karvo <<" km/h" << endl;
		}

		i++;
		if (i>4)
		{
			i=0;
		}
		
	}
	while(input >= 0);
}