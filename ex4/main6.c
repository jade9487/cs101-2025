#include <stdio.h>

int factrial(int n){
    
    if(n==1){
        return 1;
    }
    return n*factrial(n-1);
    
}

int main()
{
    int n = 9,m;
    
    
    m=factrial(n);

    printf("factrial %d = %d",n,m);

    return 0;
}
