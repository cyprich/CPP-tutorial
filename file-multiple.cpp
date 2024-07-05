#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    // output
    vector<string> food = {"banana", "apple", "orange", "cherry"};
    ofstream output("multioutput.txt");

    for (int i = 0; i < food.size(); i++) {
        output << food[i] << " ";
    }

    output.close();

    // input
    string thing;
    vector<string> things;
    string result;
    ifstream input("things.txt");

    while (input >> thing) {
        things.push_back(thing);
        result += thing + " ";
    }

    for (int i = 0; i < things.size(); i++) {
        //cout << things[i] << " ";
    }

    cout << result;
    input.close();

    return 0;
}