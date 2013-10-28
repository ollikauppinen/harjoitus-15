/**********************************************************
*Tehtävä: Harjoitus15
*Tekijä: Olli Kauppinen
*PVM: 28.10.2013
*Kuvaus:
*TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!
*
*Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
*pitkän merkkijonon (ei välilyäntejä).
*a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
*(tulostus tyyppiä "cout << mjono1[4];" jne)
*b) Ohjelma kääntää annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen näytälle
*(tulostus tyyppiä "cout << mjono2;")
*c) merkkijono voi olla kuinka pitkä
*tahansa (max 100 kirjainta).
*Syätetyn merkkijonon pituutta ei saa
*laskea millään kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen käyttäjälle.
*Välilyännit jonossa ovat sallittuja.
*
*Käyttäjä syättää jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*
* Versio 1.0 H4718 28.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	char mjono[18], mjono2[18];
	int a, b;

	mjono2[17] = NULL;
	
	cout << "\nSyötä 17 kirjainta, ei välilyöntejä!\n";
	cin.get (mjono, 18);

	for (a=0, b=16; a<17, b>=0; a++, b--)
	{
		mjono2[b]=mjono[a];
	}

	cout << mjono2 << endl;

}