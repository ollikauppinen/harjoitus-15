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
	char mjono[18];
	
	cout << "\nSyötä 17 kirjainta, ei välilyöntejä!\n";
	cin.get (mjono, 18);

	cout << mjono[17] << mjono[16] << mjono[15] << mjono[14] << mjono[13] << mjono[12] << mjono[11] << mjono[10] << mjono[9] << mjono[8] << mjono[7] << mjono[6] 
	<< mjono[5] << mjono[4] << mjono[3] << mjono[2] << mjono[1] << mjono[0] << endl;

}