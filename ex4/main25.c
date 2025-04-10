#include <stdio.h>

int multi(int i, int j){
    
    if(j==1 && i==1){
        printf("%d*%d = %d ",i,j,i*j);
        return 0;
    }
    else if(j!=0){
        multi(i,j-1);
        printf("%d*%d = %d ",i,j,i*j);
    }
   
    
    else {
        j=9;
        
        multi(i-1,j);
    }
    
    if (j==9){
        printf("\n");
    }
    
}

int main()
{
    int i=9,j=9;
    
    multi(i,j);

    return 0;
}

