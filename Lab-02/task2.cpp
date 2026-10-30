#include <iostream>

/*
The prices of 7 items are stored in ascending order:
50 120 175 240 300 450 620

Write a recursive binary search function to find a price.
In main, ask the user to enter a price, call the function,
and print the index where it was found, or a message that
it was not found.

Hint: You need two base cases. Do not forget the return before each recursive call.
    int binarySearch(int arr[], int low, int high, int key)

Sample runs:
    Enter price to search: 300
    300 found at index 4

    Enter price to search: 100
    100 not found
*/

// @brief Searches a sorted array recursively for a given value.
// @param arr The array to search (must be sorted in ascending order).
// @param low The lowest index of the current search range.
// @param high The highest index of the current search range.
// @param key The value to find.
// @return The index of the found value, or -1 if not found.
int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) 
        return mid;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);
    else
        return binarySearch(arr, low, mid - 1, key);
}

int main()
{
    const int size = 7;
    int arr[size]  = {50, 120, 175, 240, 300, 450, 620};

    int price;

    std::cout << "Enter price to search: ";
    std::cin  >> price;

    int index = binarySearch(arr, 0, size - 1, price);

    if (index != -1)
        std::cout << price << " found at index " << index;
    else
        std::cout << price << " not found";

    return 0;
}