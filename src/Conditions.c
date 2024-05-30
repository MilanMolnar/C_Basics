#include <stdio.h>
#include <stdlib.h>


int max(int a, int b){
    if(a > b){ // && AND || OR
        return a;
    }
    return b;
}

int main()
{    
    printf("%d", max(12,31));
    return 0;
    
}