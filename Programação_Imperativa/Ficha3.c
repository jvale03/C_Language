# include <stdio.h>

void swapM(int *x, int *y) {
    int i;
    i=*y;
    *y=*x;
    *x=i;    
}

void swap(int v[], int i, int j) {
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}

int soma(int v[], int n) {
    int somas=0,k;
    for(k=0;k<=n;k++) {
        somas+=v[k];
    }
    printf("Soma = %d\n",somas);
    return 0;
}

void invertArray(int v[],int n) {
    for(int i=0;i<n/2;i++) {
        swapM(&v[i],&v[n-i-1]);
    }
}

int maximum(int v[], int n, int *m) {
    int max=0;
    for(int i=0;i<=n;i++) {
        if (v[i]>max) {max=v[i];}
        else continue;
    }
    *m=max;
    printf("*m = %d\n",*m);
    return 0;
}

void quadrados(int q[], int n) {
    int w;
    for(w=0;w<=n;w++) {
        q[w]*=q[w];
    }
}

long fun(int y) {
    int p;
    long result=1;
    for(p=1;p<=y;p++)
        result=result*p;
    return (result);
}


int main() {
    int i,u,w,m;
    int v[9] = {8,7,6,5,4,3,2,1,0};
    scanf("%d%d",&i,&u);
    // swapM
    swapM(&i,&u);
    printf("x=%d y=%d\n",i,u);
    // swap
    swap(v,i,u);
    for(w=0;w<=8;w++) {
        printf("%d ",v[w]);
    }
    printf("\n");
    // soma
    soma(v,9);
    // InvertArray
    invertArray(v,9);
    for(w=0;w<=8;w++) {
        printf("%d ",v[w]);
    }
    printf("\n");
    // maximum
    maximum(v,9,&m);    
    // quadrados
    quadrados(v,9);
    for(w=0;w<=8;w++) {
        printf("%d ",v[w]);
    }
    printf("\n");
    // pascal
    int x, y, z;
    printf("Input the number of rows in Pascal's triangle: ");
    scanf("%d",&y);
    for ( x = 0 ; x < y ; x++ ) {
        for ( z = 0 ; z <= ( y - x - 2 ) ; z++ )
            printf(" ");
        for( z = 0 ; z <= x ; z++ )
            printf("%ld ",fun(x)/(fun(z)*fun(x-z)));

        printf("\n");
    }
    return 0;
}



// no caso do m, perguntar porque é que usamos os endereços e assim quando podemos obter o mesmo resultado sem nenhum dos dois!
// perguntar tambem quando se usa void e quando se usa int nas auxiliares