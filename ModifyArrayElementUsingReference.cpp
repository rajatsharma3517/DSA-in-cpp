#include <iostream>
using namespace std;

void doubleElement(int &element) {
    element = element * 2;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Before modification: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    doubleElement(arr[2]);

    cout << "After modification: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
