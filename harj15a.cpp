/**********************************************************
*Teht�v�: Harjoitus15
*Tekij�: Olli Kauppinen
*PVM: 28.10.2013
*Kuvaus:
*T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!
*
*Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
*pitk�n merkkijonon (ei v�lily�ntej�).
*a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
*(tulostus tyyppi� "cout << mjono1[4];" jne)
*b) Ohjelma k��nt�� annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen n�yt�lle
*(tulostus tyyppi� "cout << mjono2;")
*c) merkkijono voi olla kuinka pitk�
*tahansa (max 100 kirjainta).
*Sy�tetyn merkkijonon pituutta ei saa
*laskea mill��n kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen k�ytt�j�lle.
*V�lily�nnit jonossa ovat sallittuja.
*
*K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*
* Versio 1.0 H4718 28.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	char mjono[18];
	
	cout << "\nSy�t� 17 kirjainta, ei v�lily�ntej�!\n";
	cin.get (mjono, 18);

	cout << mjono[17] << mjono[16] << mjono[15] << mjono[14] << mjono[13] << mjono[12] << mjono[11] << mjono[10] << mjono[9] << mjono[8] << mjono[7] << mjono[6] 
	<< mjono[5] << mjono[4] << mjono[3] << mjono[2] << mjono[1] << mjono[0] << endl;

}