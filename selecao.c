#include<stdio.h>
#include<stdlib.h>
// metodo seleção (selection sort)
void selecao(int vet[], int n)
{
  int i, j, min, aux;
  for (i = 0; i < (n-1); i++)
   {
    min = i;
    for (j = (i+1); j < n; j++) {
      if(vet[j] < vet[min])
        min = j;
    }
    if (i != min) {
      aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
  }
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
    selecao (v,n);
    printf("\n\nVetor ordenado crescente metodo seleção !\n");
    for(i=0;i<n;i++){
        printf("\nv[%d]=%d", i,v[i]);
    }
    }
}

