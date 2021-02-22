#include "Matrix.h"
#include "matrice.h"
#include "vecteur.h"


matrice::matrice(int tab[][3])
{

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = tab[i][j];
}

matrice::matrice()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = 0;
}

void matrice::affiche()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}

vecteur produit(matrice M, vecteur V)
{
	vecteur r;
	for (int i = 0; i < 3; i++)
	{
		r.v[i] = 0;
		for (int j = 0; j < 3; j++) {
			r.v[i] += M.m[i][j] * V.v[j];
		}
	}
	return r;
}
