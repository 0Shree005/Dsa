#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
#include <cmath>
#include <string>

#include "arrays.h"
#include "ui.h"

struct AlgoTable {
    std::string name;
    double timeTaken;
    int iterations;
};

void PrintAlgoTable(const std::vector<AlgoTable> &timings);

void execSortingAlgos(int* cArr, int size, const std::vector<int>& selections) {

    std::vector<AlgoTable> timings;

    int* originalArray = new int[size];
    std::copy(cArr, cArr + size, originalArray);

    for (int choice : selections) {

        int* tempArray = new int[size];
        int countIteration = 0;

        if (choice == 2 || choice == 3) {
            if (size > 50000) {
                std::cout << "\nWARNING: Selection sort and Bubble sort are VERY slow for large arrays (" << size << " elements). Please use a faster algorithm.\n";
            }
        } else if (choice == 4) {
            if (size > 150000){
                std::cout << "\nWARNING: Insertion sort is VERY slow for large arrays (" << size << " elements). Please use a faster algorithm\n";
            }
        }

        auto start = std::chrono::high_resolution_clock::now();

        switch (choice) {

            case 1: {
                std::copy(originalArray, originalArray + size, tempArray);
                printSmallSep("Merge sort is currently sorting...");
                int mergeCounter = 0;
                int itr = mergeSort(tempArray, 0, size - 1, &mergeCounter);
                timings.push_back({"Merge Sort", 0.0, itr});
                printSmallSep("Merge sort executed");
                break;
            } case 2: {
                std::copy(originalArray, originalArray + size, tempArray);
                printSmallSep("Selection sort is currently sorting...");
                int selitr = selectionSort(tempArray, size, countIteration);
                timings.push_back({"Selection Sort", 0.0, selitr});
                printSmallSep("Selection sort executed");
                break;
            } case 3:{
                std::copy(originalArray, originalArray + size, tempArray);
                printSmallSep("Bubble sort is currently sorting...");
                int bubitr = bubbleSort(tempArray, size, countIteration);
                timings.push_back({"Bubble Sort", 0.0, bubitr});
                printSmallSep("Bubble Sort executed");
                break;
            } case 4: {
                std::copy(originalArray, originalArray + size, tempArray);
                printSmallSep("Insertion sort is currently sorting...");
                int initr = insertionSort(tempArray, size, countIteration);
                timings.push_back({"Insertion Sort", 0.0, initr});
                printSmallSep("Insertion Sort executed");
                break;
            } case 5: {
                std::cout << "\nExiting..." << std::endl;
                exit(0);
            } default: {
                std::cout << "\nInvalid selection: " << choice << "\n";
                break;
            }
        }

        auto end = std::chrono::high_resolution_clock::now();
        double timeTaken = std::chrono::duration<double>(end - start).count();
        timings.back().timeTaken = timeTaken;

        std::copy(tempArray, tempArray + size, cArr);

        delete[] tempArray;
    }

    printArray(cArr, size);
    PrintAlgoTable(timings);
    delete[] originalArray;
}

void execSearchingAlgos(int* cArr, int size, const std::vector<int>& selections, int userInput) {

    std::vector<AlgoTable> timings;

    for (int choice : selections) {

        auto start = std::chrono::high_resolution_clock::now();

        switch (choice) {
            case 1: {
                int linItr = 0;
                int linResult = linearSearch(cArr, size, userInput, &linItr);
                std::cout << "Linear Search: ";
                printResult(userInput, linResult);
                timings.push_back({"Linear Search", 0.0, linItr});
                break;
            }
            case 2: {
                int binItr = 0;
                int binResult = binarySearch(cArr, size, userInput, &binItr);
                std::cout << "Binary Search: ";
                printResult(userInput, binResult);
                timings.push_back({"Binary Search", 0.0, binItr});
                break;
            }
            default: {
                std::cout << "\nInvalid selection: " << choice << "\n";
                break;
            }
        }

    auto end = std::chrono::high_resolution_clock::now();
    double timeTaken = std::chrono::duration<double>(end - start).count();
    timings.back().timeTaken = timeTaken;

    }
    PrintAlgoTable(timings);
}

void PrintAlgoTable(const std::vector<AlgoTable> &timings){
    std::cout << "\n_sr no.__|____Algorithm____|___Iterations___|____time taken____\n";
    int srNo = 1;
    for (const auto& timing : timings) {
        std::cout << std::setw(6) << srNo++ << "   |  " << std::setw(14) << timing.name << " | " << std::setw(14) << timing.iterations << " | ";

            double timeTaken = timing.timeTaken;

            if (timeTaken < 1e-6){
                std::cout << std::fixed << std::setprecision(3) << timeTaken * 1e9 << " nanoseconds\n";
            } else if (timeTaken < 1e-3) {
                std::cout << std::fixed << std::setprecision(3) << timeTaken * 1e3 << " microseconds\n";
            } else if (timeTaken < 1.0) {
                std::cout << std::fixed << std::setprecision(3) << timeTaken * 1e3 << " milliseconds\n";
            } else if (timeTaken < 60.0) {
                std::cout << std::fixed << std::setprecision(6) << timeTaken << " seconds\n";
            } else {
                int minutes = static_cast<int>(timeTaken / 60);
                double seconds = fmod(timeTaken, 60.0);
                std::cout << minutes << " minutes and " << std::fixed << std::setprecision(6) << seconds << " seconds\n";
            }
    }
    std::cout << std::endl;
}
