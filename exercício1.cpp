#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main () {
    int vet[tam], tmp = 0;
    
    for (int i=0; i<tam; i++) { // pedindo o vetor ao usuario
        printf("DIGITE O vet[%d]:", i);
        scanf("%d", &vet[i]);
        }
        
    for (int i=0; i<tam; i++){       //Crescente
        if(vet[i]>vet[i+1]){
          	 tmp=vet[i+1];
             vet[i+1]=vet[i];
             vet[i]=tmp;
             i = -1;
            }
        }
        printf("\n*IMPRIME ORDEM CRESCENTE*\n");
        for(int i=0; i<tam; i++){         // imprime numero em ordem crescente
            printf("%d\n", vet[i]);
        }
        
    for (int i=0; i<tam; i++){       //Decrescente
        if(vet[i]<vet[i+1]){
          	 tmp=vet[i+1];
             vet[i+1]=vet[i];
             vet[i]=tmp;
             i = -1;
            }
        }
    
        printf("\n*IMPRIME ORDEM DECRESCENTE*\n");
        for(int i=0; i<tam; i++){         // imprime numero em ordem Decrescente
            printf("%d\n", vet[i]);
        }
}
