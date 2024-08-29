#include <iostream>
#include <vector>

using namespace std;

void printArray(std::vector<int> elements, int size) {
    size_t memoryUsage = size * sizeof(int);

    // Display the size of the array in bytes, KB, MB, or GB
    cout << "Array Memory Usage: ";
    if (memoryUsage < 1024) {
        cout << memoryUsage << " bytes\n";
    } else if (memoryUsage < 1024 * 1024) {
        cout << memoryUsage / 1024.0 << " KB\n";
    } else if (memoryUsage < 1024 * 1024 * 1024) {
        cout << memoryUsage / (1024.0 * 1024) << " MB\n";
    } else {
        cout << memoryUsage / (1024.0 * 1024 * 1024) << " GB\n";
    }

    if (size < 75 ) {
        cout << "[ ";
        for (int i = 0; i < size; i++)
        {
            std::cout << elements[i] << " ";
        }
        cout << "] \n\n";
    }

    else {
        cout << "[ ";
        for (int i = 0; i < 10; i++)
        {
            std::cout << elements[i] << " ";
        }
        cout << ".... ";
        for (int i = 5; i > 0; i--)
        {
             cout << elements[ size - i ] << " ";
        }
        cout << "] (truncated) \n\n";
    }
}
