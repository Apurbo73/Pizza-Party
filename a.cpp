#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int totalBoys = A + 1;
    int totalSlices = (totalBoys * 4) + (B * 3);

    int pizzasNeeded = (totalSlices + 7) / 8;

    cout << pizzasNeeded << endl;

    return 0;
}