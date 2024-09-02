#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1; 
        else
            right = mid - 1; 
    }

    return -1; 
}

int main() {
   
    int bookIDs[] = {101, 105, 110, 115, 120, 125, 130}; 
    int size = sizeof(bookIDs) / sizeof(bookIDs[0]);

    int searchID;
    printf("Enter the book ID to search: ");
    scanf("%d", &searchID);

  
    int result = binarySearch(bookIDs, size, searchID);

    if (result != -1) {
        printf("Book ID %d is available in the library.\n", searchID);
    } else {
        printf("Book ID %d is not available in the library.\n", searchID);
    }

    return 0;
}