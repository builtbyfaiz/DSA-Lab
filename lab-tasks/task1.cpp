#include <iostream>

/*
The ages of 8 students are stored in ascending order: 12 15 18 21 25 30 34 41

Write a binary search function to find age.
In main, ask the user to enter an age, call the function, and print the index where it was found.
Or a message that it was not found.

Hint: start with this function header.
    int binarySearch(int arr[], int size, int key)

Sample runs:
    Enter age to search: 25,
    25 found at index 4
    Enter age to search: 20
    20 not found
*/

// @brief Searches a sorted array for a given value.
// @param arr The array to search (must be sorted in ascending order).
// @param size The number of elements in the array.
// @param key The value to find.
// @return The index of the found value, or -1 if not found.
int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    const int size  = 8;
    int   arr[size] = {12, 15, 18, 21, 25, 30, 34, 41};
    
    int age;

    std::cout << "Enter age to search: ";
    std::cin  >> age;

    int index = binarySearch(arr, size, age);

    if (index != -1)
        std::cout << age << "Element found at index " << index;
    else
        std::cout << age << "Element not found.";

    return 0;
}