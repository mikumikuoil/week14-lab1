#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int cnt=0;
    ifstream count("text.txt");
    string line;
    while(getline(count, line)) {
        cnt++;
    }
    cout<<cnt<<endl;
    count.close();
    return 0;
}