#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++) {
        int needSwap = 0;
        if (i % 2 == 0 && arr[i] > arr[i + 1])
            needSwap = 1;   
            if (i % 2 != 0 && arr[i] < arr[i + 1])
                needSwap = 1;  
        if (needSwap) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("Wave arrangement: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}