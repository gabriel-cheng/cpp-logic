#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    a = b;
    b = a;

    cout << a;
    cout << "\n";
    cout << b;

    return 0;
}