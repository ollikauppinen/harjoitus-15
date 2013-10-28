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
	char mjono[100], mjono2[100];
	int a, b, vertaus;
	
	
	cout << "\nSy�t� sana, tarkastetaan onko sana palindromi, ei v�lily�ntej�!\n";
	cin.get (mjono, 100);

	b = strlen(mjono) - 1;
	mjono2[strlen(mjono)] = NULL;
	for (a=0, b; a<b, b>=0; a++, b--)
	{
		mjono2[b]=mjono[a];
	}

	cout << mjono2 << endl;

	vertaus = strcmp(mjono, mjono2);

	if (vertaus == 0)
	{
		
		cout << "\nSana on palindromi!\n";
	}

	else
		cout << "\nSana ei ole palindromi!\n";
}