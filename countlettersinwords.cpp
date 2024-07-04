#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string phrase = "hello my name name is peter peter peter";
    map<char, int> count;

    for (int i = 0; i < phrase.size(); i++)
    {
        count[phrase[i]]++;
    }
    
    for (map<char, int>::iterator i = count.begin(); i != count.end(); i++)
    {
        cout << i->first << " is there " << i->second << " times" << endl;
    }
    

    return 0;
}