#include <stdio.h>
int main() {
    int weights[5];  
    int totalWeight = 0; 
    int i;
    printf("Enter the weights of the five treasures:\n");
    for (i = 0; i < 5; i++) {
        printf("Treasure %d: ", i + 1);
        scanf("%d", &weights[i]);
        totalWeight += weights[i]; 
    }
    printf("Total weight collected: %d\n", totalWeight);

    return 0;
}