#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string filename;
    cin >> filename;
    ifstream file(filename);
    int count = 0;
    char c;
    while (file.get(c)) {
        count++;
    }
    cout << count << endl;
    return 0;
}
