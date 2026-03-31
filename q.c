#include <stdio.h>

int arr_sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int arr_min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int arr_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int arr_avg(int arr[], int n)
{
    int sum = arr_sum(arr, n);
    return sum / n;   
}

int main()
{
    int arr[100], n, choice, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("1. Sum \n");
    printf("2. Minimum \n");
    printf("3. Maximum \n");
    printf("4. Average \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            result = arr_sum(arr, n);
            printf("Sum = %d", result);
            break;

        case 2:
            result = arr_min(arr, n);
            printf("Minimum = %d", result);
            break;

        case 3:
            result = arr_max(arr, n);
            printf("Maximum = %d", result);
            break;

        case 4:
            result = arr_avg(arr, n);
            printf("Average = %d", result);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}



