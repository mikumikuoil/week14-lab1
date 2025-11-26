#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream app("log.txt", ios::app);
    int input;
    cout << "Enter a number: ";
    cin >> input;
    app<<input<<endl;
    app.close();
    return 0;
}