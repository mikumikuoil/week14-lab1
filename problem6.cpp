#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream source("source.txt");
    ofstream copy("copy.txt");
    string line;
    while(getline(source, line)) {
        copy << line << endl;
    }
    source.close();
    copy.close();
    return 0;
}