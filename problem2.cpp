#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string user;
    cout<<"Enter a text: ";
    getline(cin, user);
    ofstream file("message.txt");
    file<<user;
    file.close();
    return 0;
}