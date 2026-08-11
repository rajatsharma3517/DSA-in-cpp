#include <iostream>
using namespace std;

void swapElements(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Before swapping: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
  
    swapElements(arr[0], arr[4]);

    cout << "After swapping: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
