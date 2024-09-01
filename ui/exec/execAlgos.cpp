#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>

#include "../../algorithms.h"
#include "../../ui.h"

using namespace std;
using namespace std::chrono;

void PrintAlgoTable(const vector<pair<string, double>> timings);

void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections) {

    vector<pair<string, double>> timings;

    for (int choice : selections) {

        auto start = high_resolution_clock::now();

        switch (choice) {
            case 1: {
                mergeSort(cArr, 0, size - 1);
                printArray(cArr, size);
                timings.push_back({"Merge Sort", 0.0});
                break;
            }
            case 2: {
                /*selectionSort(arr, size);*/
                timings.push_back({"Selection Sort", 0.0});
                break;
            }
            case 3: {
                cout << "\nExiting..." << endl;
                exit(0);
            }
            default: {
                std::cout << "\nInvalid selection: " << choice << "\n";
                break;
            }

        }

        auto end = high_resolution_clock::now();
        double timeTaken = duration<double>(end - start).count();
        timings.back().second = timeTaken;

    }
    PrintAlgoTable(timings);
}

void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections, int userInput) {

    vector<pair<string, double>> timings;

    for (int choice : selections) {

        auto start = high_resolution_clock::now();

        switch (choice) {
            case 1: {
                printSmallSep("Linear Search Executed");
                /*int linResult = linearSearch(cArr, size, userInput);*/
                /*printResult(userInput, linResult);*/
                timings.push_back({"Linear Search", 0.0});
                break;
            }
            case 2: {
                int binResult = binarySearch(cArr, size, userInput);
                printResult(userInput, binResult);
                timings.push_back({"Binary Search", 0.0});
                break;
            }
            default: {
                std::cout << "\nInvalid selection: " << choice << "\n";
                break;
            }
        }

        auto end = high_resolution_clock::now();
        double timeTaken = duration<double>(end - start).count();
        timings.back().second = timeTaken;

    }
    PrintAlgoTable(timings);
}

void PrintAlgoTable(const vector<pair<string, double>> timings) {
    cout << "\n_sr no.__|____Algorithm____|__time taken_\n";
    int srNo = 1;
    for (const auto& timing : timings) {
        cout << setw(6) << srNo++ << "   |  "
             << setw(14) << timing.first << " | "
             << fixed << setprecision(6) << timing.second << " seconds\n";
    }
}
