#include <iostream>
using namespace std;

void powerOfTwo(int num) {
    if (num > 0 && (num & (num - 1)) == 0) {
        cout <<"The Number " << num << " is a power of two." << endl;
    } else {
        cout <<"The Number " << num << " is not a power of two." << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    powerOfTwo(num);

    return 0;
}
