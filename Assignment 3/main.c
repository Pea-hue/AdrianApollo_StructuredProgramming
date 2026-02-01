#include <stdio.h>

//display address of variable
int display_address() {
    int num = 10;

    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Value stored in ptr (address of num): %p\n", (void*)ptr);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value accessed using *ptr (dereferenced value): %d\n", *ptr);

    return 0;
}

//access variable using pointer
int accessVariableUsingPointer() {
    int count = 10;

    int *pCount;

    pCount = &count;

    printf("Initial value of count: %d\n", count);

    *pCount = 25; 

    printf("Value of count after modification via pointer: %d\n", count);
    printf("Value accessed via *pCount: %d\n", *pCount);

    return 0;
}

//add two numbers using pointers
int addUsingPointers() {
    int num1 = 15;
    int num2 = 25;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int sum;

    
    sum = *ptr1 + *ptr2;

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Sum calculated via pointers: %d\n", sum);

    return 0;
}


void swapNumbers(int *ptr1, int *ptr2) {
    int temp;

   
    temp = *ptr1;
    
   
    *ptr1 = *ptr2;
    
    
    *ptr2 = temp;
}



void incrementByValue(int num) {
    num = num + 1;
    printf("Inside incrementByValue function: %d\n", num);
}


void incrementByReference(int *ptr) {
    *ptr = *ptr + 1;
    printf("Inside incrementByReference function: %d\n", *ptr);
}

int main() {
    display_address();
    accessVariableUsingPointer();
    addUsingPointers();

    int a = 50;
    int b = 100;

    printf(" Before Swapping: \n");
    printf("a = %d, b = %d\n\n", a, b);

    
    swapNumbers(&a, &b);

    printf(" After Swapping: \n");
    printf("a = %d, b = %d\n", a, b);

    int val = 10;

    printf("Starting value: %d\n\n", val);

  
    printf(" Testing Pass by Value: \n");
    incrementByValue(val);
    printf("Value in main after incrementByValue: %d (No change!)\n\n", val);

    
    printf(" Testing Pass by Reference: \n");
    
    incrementByReference(&val);
    printf("Value in main after incrementByReference: %d (It changed!)\n", val);

    return 0;
}