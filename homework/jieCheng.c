#include <stdio.h>
#include <stdlib.h>

int test(int n) {
    if (n == 0 || n == 1 )
    {
        return 1;
    }
    else if (n >= 2)
    {
        return n * test(n-1);
    }
    
    
}

int main() {
    int n = 5;
    printf("%d\n",test(n));
    return 0;
}