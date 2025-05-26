#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter the %d  elements of an array :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Mean calculation for every 3 elements
    for (int i = 0; i < n; i += 3) {
        int sum = 0;
        int count = 0;

        //sum of three elements and their mean
        for (int j = i; j < i + 3 && j < n; j++) {
            sum += arr[j];
            count++;
        }

        int mean = sum / count;
        // Replace mean in array
        for (int j = i; j < i + 3 && j < n; j++) {
            arr[j] = mean;
        }
    }

    // print updated array
    printf("Updated Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
