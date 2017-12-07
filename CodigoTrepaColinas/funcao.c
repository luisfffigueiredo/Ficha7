#include "funcao.h"

// Calcula a qualidade de uma solução
// Recebe:  A solução, a, a matriz de adjacências, mat, e o número de vértices, vert
// Devolve: O custo que é o número de ligações que existem na solução
int calcula_fit(int a[], int *mat, int vert)
{
	// a -> representa uma representação de uma solução |0|0|0|0|1|1|1|1|
	int total=0;
	int i, j;

	// ciclo para verificar se existe ligação entre vértices
	for(i=0; i<vert; i++)
		if(a[i]==0)
		{
			for(j=0; j<vert;j++)
				// se existir ligação, incrementa uma iteração
				if(a[j]==1 && *(mat+i*vert+j)==1)
				    total++;
		}
	return total;
}
