# include <stdio.h>
# include <stdlib.h>

int primos(int x, int y) {
    int n_primos,i,j;
    char *primo = (char *)calloc(y+1,sizeof(char)); // cria a rray com tamanho igual ao maior número, y
    n_primos=0;
    
    // altera todos os valores da array para 1, onde 1 = primo
    for(i=2;i<=y;i++) {primo[i]=1;}
    i=2;
    
    // desde a posição 0 até y, testa se são primos
    // em caso de ser primo, altera automaticamente todos os seus multiplos, ate y, para 0 e assim sucessivamente
    while(i*i<=y) {
        if (primo[i]==1) {
            for(j=2*i;j<=y;j+=i) {
                primo[j]=0;
            }
        }
        i++;
    }

    // como anteriormente se testou desde o número 0, então agora temos de converter todos os números primos até x,
    // para 0 de novo, ou seja, eliminamos todos os primos até x para a conta bater certo
    i=0;
    while(i<x) {
        primo[i]=0; i++;
    }

    // por fim, percorre a lista e conta quantos primos, 1, houve
    for(i=2;i<=y;i++) {
        if (primo[i]==1) {n_primos++;}
    }

    return n_primos;
}

int triangulares(int x, int y) {    
    int conta=1,i=2,n_triangulos=0;
    while (conta<=y) {
        if (conta>=x) {n_triangulos++;}
        conta+=i;
        i++;
    }
    return n_triangulos;
}

int main() {
    int x,y,scan;
    scan = scanf("%d%d",&x,&y);
    if (scan==2) {
        printf("%d %d\n",triangulares(x,y),primos(x,y));
    }    
    else return 0;
}