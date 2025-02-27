#include <stdio.h>

int main()
{
    int i = 3031;
    int ad = i - 1000;

    if (ad <= 0) { 
        printf("70元\n");
    } 
    else if (ad <= 100) {
        printf("80元\n");
    }
    else {
        int count = ad / 100;
        int sum = (count + (ad % 100 > 0 ? 1 : 0)) * 10 + 70;
        printf("%d元\n", sum);
    }
    
    return 0;
}
