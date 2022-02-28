# include <stdio.h>

void multInt1(int n, float m) {
    int number,count=0,r=0;
    for (number=0;number<n;number+=1) {
        r+=m;
        count+=1;
    }
    printf("Product = %d\nInefficient -> %d\n",r,count);
}

void multInt2(int n, float m) {
    int count=1,sum;
    if (n%2==0) {sum=0;}
    else {sum=m;}
    while (n!=1) {
        n/=2;
        m*=2;
        if (n%2!=0) {
            sum+=m;
            count+=1;
        }
    }
    printf("Efficient -> %d\n",count);
}

void mdc1(int a, int b) {
    int divisor, conta=0;
    if (a>b) {
        for(divisor=b;;divisor-=1) {
            conta++;
            if(a%divisor==0 && b%divisor==0) {break;}
        }
        printf("GCD = %d\nInefficient -> %d\n",divisor,conta);   
    }
    else {
        for(divisor=a;;divisor-=1) {
            conta++;
            if(a%divisor==0 && b%divisor==0) {break;}
        }
        printf("GCD = %d\nInefficient -> %d\n",divisor,conta);
    }       
}

void mdc2(int a, int b) {
    int conta=0;
    if (a==b) printf("\nlesgo %d\n",a);
    else {
        while (a!=b) {
            conta++;
            if (a>b) {
                a-=b;
            }
            else if (a<b) {
                b-=a;
            }
        }
    }
    printf("Efficient -> %d\n",conta);
}

int fib(int x) {    
    double n1=0,n2=1,n3;
    int i;   
    if (x<=2) printf("1\n");
    else {
        for(i=2;i<=x;++i) {    
            n3=n1+n2;    
            n1=n2;    
            n2=n3;    
        }  
        printf("Fib = %f\n",n3);
    }
    return 0;  
}  

int main() {
    int n,a,b,x;
    float m;
    printf("Write here two numbers to know is product: ");
    scanf("%d%f", &n,&m);
    multInt1(n,m);  
    multInt2(n,m);
    printf("\nNow, write here two int's to discover the greatest common divisor: ");
    scanf("%d%d",&a,&b);
    mdc1(a,b);
    mdc2(a,b);
    printf("\nPlease enter one more number: ");
    scanf("%d",&x);
    fib(x);
}