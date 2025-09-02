#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int m, n, i, j, k = 0;
    printf("Enter number of elements in first set: ");
    scanf("%d", &m);
    printf("Enter elements of first set:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in second set: ");
    scanf("%d", &n);
    printf("Enter elements of second set:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++) {
        c[k++] = a[i];
    }
    for (i = 0; i < n; i++) {
        int flag = 0;
        for (j = 0; j < m; j++) {
            if (b[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            c[k++] = b[i];
        }
    }
    printf("Union of sets:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}