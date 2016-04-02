#include<stdio.h>
#include<stdlib.h>
//Insertion sort, ou ordena��o por inser��o, � um simples algoritmo de ordena��o, eficiente quando aplicado a um pequeno n�mero de elementos.
// Em termos gerais, ele percorre um vetor de elementos da esquerda para a direita e � medida que avan�a vai deixando os elementos mais � esquerda ordenados.
//O algoritmo de inser��o funciona da mesma maneira com que muitas pessoas ordenam cartas em um jogo de baralho como o p�quer.
// Dados Winkipedia
int insecao(int vet[], int n)
{
	int i, j, aux;

	for (i = 1; i < n; i++)
	{
		aux = vet[i];
		j = i - 1;

		while ((j >= 0) && (aux < vet[j]))
		{
			vet[j + 1] = vet[j];
            j = j - 1;
		}

		vet[j + 1] = aux;
	}

	return (int*)vet;
}
main(){
    int n=-1;

    while((n<=0) || (n>100)) {
        printf("\nQuantos numeros tera o valor ?");
        scanf("%d", &n);
    int v[n],i,j,aux;

    for(i=0; i<n; i++) {
        v[i]=rand() %10; // METODO RAND (valores aleatorios) no caso ele joga os dez valores
    }
    printf("\nValor original gerado!\n");
    for(i=0; i<n; i++) {
        printf("\nv[%d]= %d", i, v[i]);
    }
    insecao (v,n);
    printf("\n\nVetor ordenado crescente metodo sele��o !\n");
    for(i=0;i<n;i++){
        printf("\nv[%d]=%d", i,v[i]);
    }
    }
}
