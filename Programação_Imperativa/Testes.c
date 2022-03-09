#include <stdio.h>

int main() {
    int n_primo,i,count=0;
    scanf("%d",&n_primo);
    if (n_primo<2) printf("False\n");
    else {
        for(i=1;i<=n_primo;i++) {
            if (n_primo%i==0) count++;
        }
        if (count==2) printf("True\n");
        else printf("False\n");
    }
    printf("%d",count);
    return 0;
}