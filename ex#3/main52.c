#include <stdio.h>

int func(int* i,int* j){
    printf("in func, i = %d, j = %d\n",*i,*j);
    int t;
    t=*j ;
    *i = t;
    printf("in func, i = %d, j = %d\n",i,j);
}


int main()
{
    int n=1, m=2;
    func(&n,&m);
    printf("int main, n = %d, m = %d\n",n,m);
    
    
    return 0;
}
