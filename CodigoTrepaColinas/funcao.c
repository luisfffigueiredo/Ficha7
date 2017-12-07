#include "funcao.h"

// Calcula a qualidade de uma solu��o
// Recebe:  A solu��o, a, a matriz de adjac�ncias, mat, e o n�mero de v�rtices, vert
// Devolve: O custo que � o n�mero de liga��es que existem na solu��o
int calcula_fit(int a[], int *mat, int vert)
{
	// a -> representa uma representa��o de uma solu��o |0|0|0|0|1|1|1|1|
	int total=0;
	int i, j;

	// ciclo para verificar se existe liga��o entre v�rtices
	for(i=0; i<vert; i++)
		if(a[i]==0)
		{
			for(j=0; j<vert;j++)
				// se existir liga��o, incrementa uma itera��o
				if(a[j]==1 && *(mat+i*vert+j)==1)
				    total++;
		}
	return total;
}
