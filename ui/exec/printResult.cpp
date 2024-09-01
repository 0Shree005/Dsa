#include <iostream>

using namespace std;

void printResult(int userInput, int BinResult) {
    if(BinResult != -1) {
        cout << "The element _" << userInput << "_ was found at position: _" << BinResult << "_." << endl;
    }
    else {
        cout << "The element _" << userInput << "_ was not found in the array." << endl;
    }
}
