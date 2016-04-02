#include<stdio.h>
#include<stdlib.h>
// bubble sort
main(){
    int n=-1;

    while((n<=0) || (n>100)) {
        printf("\nQuantos numeros tera o valor ?");
        scanf("%d", &n);
    int v[n],i,j,aux;

    for(i=0; i<n; i++) {
        v[i]=rand() %10; // METODO RAND
    }
    printf("\nValor original gerado!\n");
    for(i=0; i<n; i++) {
        printf("\nv[%d]= %d", i, v[i]);
    }

    for(i=0; i<n; i++) { // CRIANDO A FUNÇÃO DE ORDEM CRESCENTE !
        for(j=i+1; j<n; j++){
            if(v[i]>v[j]){ // VALOR DE I IGUAL A J
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("\n\nvetor ordenado crescente!\n");
    for(i=0; i<n; i++){
        printf("\nv [%d]= %d", i,v[i]);
    }
       for(i=0; i<n; i++) { // CRIANDO A FUNÇÃO DE ORDEM DECRESCENTE !
        for(j=i+1; j<n; j++){
            if(v[i]<v[j]){ // INVERTENDO O SINAL
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("\n\nvetor ordenado decrescente!\n");
    for(i=0; i<n; i++){
        printf("\nv [%d]= %d", i,v[i]);
    }
  }
}
