#include <iostream>

void printArray(const int* cArr, int size) {

    std::cout << "\n========= Generated array =========" << std::endl;
    if (size < 75 ) {
        std::cout << "[ ";
        for (int i = 0; i < size; i++)
        {
           std::cout << cArr[i] << " ";
        }
        std::cout << "] \n\n";
    }

    else {
        std::cout << "[ ";
        for (int i = 0; i < 10; i++)
        {
            std::cout << cArr[i] << " ";
        }
        std::cout << ".... ";
        for (int i = 5; i > 0; i--)
        {
             std::cout << cArr[ size - i ] << " ";
        }
        std::cout << "] (truncated) \n";
    }

    size_t memoryUsage = size * sizeof(int);

    std::cout << "\n--- Array Memory Usage *";
    if (memoryUsage < 1024) {
        std::cout << memoryUsage << " bytes";
    } else if (memoryUsage < 1024 * 1024) {
        std::cout << memoryUsage / 1024.0 << " KB";
    } else if (memoryUsage < 1024 * 1024 * 1024) {
        std::cout << memoryUsage / (1024.0 * 1024) << " MB";
    } else {
        std::cout << memoryUsage / (1024.0 * 1024 * 1024) << " GB";
    }
    std::cout << "* ---" << std::endl;
}
