// check if all letters of 'find' variable are present in 'fullstring' variable

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string fullstring = "this is a test iiiiijjj test test hh";
    string find = "hello";

    set<char> occurence;

    for (int i = 0; i < fullstring.length(); i++)
    {
        occurence.insert(fullstring[i]);
    }

    return 0;
}
