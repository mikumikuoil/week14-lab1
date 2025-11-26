#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("input.txt");
    int line;
    int sum=0;
    while(file>>line) {
        sum+=line;
    }
    cout<<sum<<endl;
    file.close();
}