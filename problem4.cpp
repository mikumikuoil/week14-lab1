#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    ofstream file("count.txt");
    for(int i=1;i<=n;i++) {
        file<<i<<endl;
    }
    file.close();
    return 0;
}