#include <stdio.h>

int largestPrimeFactor(int n) {
  
    int maxPrime = -1;  //stores the largest prime factor

    while (n % 2 == 0) {  //remove all factors of 2
        maxPrime = 2;
        n /= 2;   
    }

    while (n % 3 == 0) {  //remove all factors of 3
        maxPrime = 3;
        n = n / 3;
    }
    //Check for factors of the form 6k±1

    
    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
        while (n % (i + 2) == 0) {
            maxPrime = i + 2;
            n = n / (i + 2);
        }
    }

    if (n > 4)
        maxPrime = n;

    return maxPrime;
}

int main() {
    int n = 15;
    int res = largestPrimeFactor(n);
    printf("%d\n", res);  
    return 0;
}
