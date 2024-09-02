#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    char str[20];
    sprintf(str, "%d", n); 
    
    int count = 0;

    for (int i = 0; str[i + 1] != '\0'; i++) {
     
        int two_digit_num = (str[i] - '0') * 10 + (str[i + 1] - '0');
        
      
        if (isPrime(two_digit_num)) {
            count++;
        }
    }

    printf("The number of two-digit prime numbers formed is: %d\n", count);

    return 0;
}