#include <iostream>

int countGreater(const int* arr, int size, int pivot)
{
    int left = 0;
    int right = size;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= pivot)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return size - left;
}

int main()
{
    const int arr[] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    const int size = sizeof(arr) / sizeof(arr[0]);

    int pivot;
    std::cout << "Введите точку отсчёта: ";
    std::cin >> pivot;

    int result = countGreater(arr, size, pivot);

    std::cout << "Количество элементов в массиве больших, чем "
              << pivot << ": " << result << std::endl;

    return 0;
}