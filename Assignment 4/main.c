#include <stdio.h>
#include <stdlib.h>

void arrayReverse(int array[], int n)
{

    printf("The original array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = array[l];
        array[l] = array[r];
        array[r] = temp;
        l++;
        r--;
    }
}

int sumArray(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}



void findMaximumMinimum(int *arr, int size, int *min, int *max) {

    printf("\n\nFinding min and max\n");
    printf("Original array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}


void sortArray(int *arr, int n) {
    int i, j, temp;


    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




int main(void)
{
    //reverse array
    int array_1[3] = {2, 5, 7};
    int n = sizeof(array_1) / sizeof(array_1[0]);
    arrayReverse(array_1, n);
    printf("Reversed array is: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", array_1[i]);
    }
    printf("\n");


    //add all elements in array
    int array2[3] = {2, 5, 8};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int sum = sumArray(array2, n2);
    printf("The sum of array elements is: %d\n", sum);


   
    

    //get maximum and minimum elements in an array
    int array4[3] = {45, 25, 21};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    int minimum, maximum;

    findMaximumMinimum(array4, n4, &minimum, &maximum);
    
    printf("Min element is : %d\n", minimum);
    printf("Max element is : %d\n", maximum);

    //sort array ascending
    int array5[5] = {2, 7, 4, 5, 9};
    int n5 = sizeof(array5) / sizeof(array5[0]);
    sortArray(array5, n5);
    printf("Elements of the array in sorted ascending order:: ");
    for (int i = 0; i < n5; i++)
    {
        printf("%d ", array5[i]);
    }


    return 0;
}