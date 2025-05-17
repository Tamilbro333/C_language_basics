#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3, sum;
    int limit = 10; 
    printf("%d %d ", n1, n2);  
    for (int i = 3; i <= limit; i++) { 
        n3 = n1 + n2;
        printf("%d ", n3);

        n1 = n2;
        n2 = n3;
    }

}



