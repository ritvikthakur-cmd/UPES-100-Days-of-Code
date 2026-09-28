#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int insertPos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[insertPos] = arr[i];
            insertPos++;
        }
    }
    while (insertPos < n) {
        arr[insertPos] = 0;
        insertPos++;
    }
    printf("Result: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}