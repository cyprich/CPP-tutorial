#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string food;
    cout << "what did you eat today?: ";
    cin >> food;

    ofstream outfile("jedlo.txt");
    outfile << food;
    outfile.close();
    
    string things;
    ifstream infile("things.txt");
    infile >> things;
    cout << things << endl;
    infile.close();

    return 0;
}