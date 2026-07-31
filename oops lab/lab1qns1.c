#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, smallest;
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];

        sum += arr[i];
    }

    average = (float)sum / n;

    printf("\nLargest Element = %d", largest);
    printf("\nSmallest Element = %d", smallest);
    printf("\nAverage = %.2f", average);

    return 0;
}