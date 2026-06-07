#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n)
{
    // Base case:
    // If number becomes 0, return 0
    if (n == 0)
        return 0;

    // Recursive case:
    // Add last digit to sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int num;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Display the sum of digits
    cout << "Sum of digits = " << sumOfDigits(num) << endl;

    return 0;
}
