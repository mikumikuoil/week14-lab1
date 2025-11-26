#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream read("input.txt");
    ofstream write("even.txt");
    int x;
    while(read>>x) {
        if(x%2==0) {
            write<<x<<endl;
        }
    }
    read.close();
    write.close();
    return 0;
}