#include <iostream>
#include <vector>

using namespace std;

void printArray(int* cArr, int size) {

    cout << "Generated array: ";
    if (size < 75 ) {
        cout << "[ ";
        for (int i = 0; i < size; i++)
        {
           cout << cArr[i] << " ";
        }
        cout << "] \n\n";
    }

    else {
        cout << "[ ";
        for (int i = 0; i < 10; i++)
        {
            cout << cArr[i] << " ";
        }
        cout << ".... ";
        for (int i = 5; i > 0; i--)
        {
             cout << cArr[ size - i ] << " ";
        }
        cout << "] (truncated) \n";
    }

    size_t memoryUsage = size * sizeof(int);

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

}
