
# include <stdio.h>
# include <stdlib.h>
int primos()
{
    int number,i,j,n_primes=0;
    printf("Enter the number\n");
    scanf("%d",&number);

    //char primes[number+1];
    char *primes = (char *)calloc(number+1,sizeof(char));

    //populating array with naturals numbers
    for(i = 2; i<=number; i++)
        primes[i] = 1;

    i = 2;
printf("aqui\n");
    while ((i*i) <= number)
    {
        if (primes[i] == 1)
        {
            for(j=2*i; j<=number; j=j+i)
            {
                primes[j] = 0;
            }
        }
        i++;
    }

    for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]==1) {
            n_primes++;
        }
    }
            printf("%d\n",n_primes);
    return 0;
}

int main() {
    int primo,w,n_primos=0,count=1,x,y;
    scanf("%d %d",&x,&y);
    for (primo=x;primo<=y;primo++) 
    {
        if (primo==2) {n_primos++;}
        else if (primo%2!=0 && primo>2) {
            for(w=3;w*w<=primo;w+=2) {
                if (primo%w==0) {count=0;break;}
            }
            if (count==1) {n_primos++;}
            count=1;
        }
    }
    printf("%d\n",n_primos);
    return n_primos;
}