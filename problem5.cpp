#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int count=0,x;
    ifstream a("a.txt");
    while(a>>x) {
        count++;
    }
    ifstream b("b.txt");
    while(b>>x) {
        count++;
    }
    cout<<count<<endl;
    a.close();
    b.close();
    return 0;
}