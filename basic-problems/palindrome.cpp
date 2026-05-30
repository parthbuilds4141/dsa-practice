#include <iostream>
using namespace std;

int main() {

    int num, original, reverse = 0;

    cout << "Enter Number: ";
    cin >> num;

    original = num;

    while(num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if(original == reverse)
        cout << "Palindrome";

    else
        cout << "Not Palindrome";

    return 0;
}
