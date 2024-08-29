#include <iostream>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;


vector<int> getUserSelections(const string& menu) {
    vector<int> selections;
    string line;
    int num;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << menu;
    cout << "Please enter the numbers of the algorithms you want to analyze: ";
    getline(cin, line);
    stringstream ss(line);

    while (ss >> num) {
        selections.push_back(num);
    }

    return selections;
}

