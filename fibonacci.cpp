#include <iostream>
using namespace std;

void fibonacci(int n) {
    int num1 = 0, num2 = 1, num;

    for (int i = 1; i <= n; i++) {
        cout << num1 << " ";
        num = num1 + num2;
        num1 = num2;
        num2 = num;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    fibonacci(n);
    return 0;
}
