#include <iostream>
#include <string>

using namespace std;

void temRepetido(int arr[]) {
    int tem;

    for(int i = 0; i < sizeof(arr)/4; i++) {
        cout << arr[i];
    }
}

int main() {
    int arr[10] = {5, 6, 7, 9, 4, 32};

    temRepetido(arr);

    return 0;
}