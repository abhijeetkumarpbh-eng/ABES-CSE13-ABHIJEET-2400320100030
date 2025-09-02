#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, n3;
    int i = 0, j = 0, k = 0;

    
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    
    printf("Enter %d elements of first sorted array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }


    printf("Enter size of second array: ");
    scanf("%d", &n2);

    
    printf("Enter %d elements of second sorted array:\n", n2);
    for (j = 0; j < n2; j++) {
        scanf("%d", &b[j]);
    }

    // Reset counters
    i = 0; 
    j = 0; 
    k = 0;

    // Merge process
    