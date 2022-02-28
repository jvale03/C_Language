# include <stdio.h>

void retangle(int w) {
    int x , y ;
    for(y=0 ; y!=w ; y+=1) { 
        for(x=0 ; x!=w ; x+=1) {
            putchar('#') ; 
        } ; 
    printf("\n") ;
    } ;
}

void chest(int w) {
    int x , y ;  
    for(y=0 ; y!=w ; y+=1) {
        if (y%2 == 0) {
            for(x=0 ; x!=w ; x+=1) { 
                if (x%2 == 0) putchar('#') ;  
                else putchar('_') ;
                } ;
            } 
        else {for(x=0 ; x!=w ; x+=1) { 
                if (x%2 == 0) putchar('_') ;  
                else putchar('#') ;
                } ;
            } ; 
    printf("\n") ;
    } ;
}

void triangles(int w) {
    int x , y ; 
    // vertical triangle
    for (y=1 ; y!=w+1 ; y+=1) {
        for (x=0 ; x!=y ; x+=1) {
            putchar('#') ;
        }
    printf("\n");
    }
    for (y=1 ; y!=w ; y+=1) {
        for (x=w-1 ; x!=y; x-=1) {
            putchar('#') ;
        }
    printf("\n");
    };
    int a ;
    // horizontal triangle
    for (y=1 ; y<=w ; y+=1) {
        for (x=0 ; x<w-y ; x+=1)
            putchar (' ');
        for (a=0 ; a<y*2-1 ; a+=1)
            putchar ('#');
        putchar ('\n');
    }
}

int main() { 
    int w;
    printf("Write here a number: ") ;
    scanf("%d",&w) ;
    retangle(w) ;
    printf("\n");
    chest (w);
    printf("\n");
    triangles(w);
    printf("\n");
    return 0 ;
}