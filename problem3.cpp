#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int x,max;
    ifstream file("numbers.txt");
    while(file>>x) {
        if(x>max) {
            max=x;
        }
    }
    cout<<max<<endl;
    file.close();
}