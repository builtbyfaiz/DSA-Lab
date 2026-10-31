#include <iostream>

/*
Read 6 integers from the keyboard into an array.
Sort them in ascending order using selection sort.
Print the sorted array, then print the smallest and largest values.

Hint: After sorting, the smallest value is arr[0], and the largest is arr[size - 1].

Function header:
    void selectionSort(int arr[], int size)

Sample run:
    Enter 6 numbers: 40 15 72 8 33 21
    Sorted: 8 15 21 33 40 72
    Smallest: 8
    Largest: 72
*/

// @brief Sorts an array in ascending order using selection sort.
// @param arr The array to sort.
// @param size The number of elements in the array.
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        // Swap arr[i] & arr[minIndex]
        int temp      = arr[i];
        arr[i]        = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    const int size = 6;
    int arr[size];

    std::cout << "Enter 6 numbers: ";

    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    selectionSort(arr, size);

    std::cout << "Sorted: ";

    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    std::cout << "\nSmallest: " << arr[0];
    std::cout << "\nLargest: "  << arr[size - 1];

    return 0;
}