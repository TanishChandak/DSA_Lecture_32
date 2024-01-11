#include <iostream>
using namespace std;
// Function to convert the number to the string:
void sayDigit(int n, string arr[])
{
    // Base case:
    if (n == 0)
        return;
    // Processing:
    int digit = n % 10;
    n = n / 10;
    // Recursive call:
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
// Function of counting the stairs:
int count(int n)
{
    // Base case:
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = count(n - 1) + count(n - 2);
    return ans;
}
// Function of checking the person is reached home or
void reachHome(int source, int destination)
{
    cout << "Source is: " << source << " destination is: " << destination << endl;
    // Base case:
    if (source == destination)
    {
        cout << "I reached home." << endl;
        return;
    }
    // processing part:
    source = source + 1;
    // recursive call:
    reachHome(source, destination);
}
int main()
{
    // Creating an program for reaching home:
    int destination = 10;
    int source = 1;
    reachHome(source, destination);

    // Counting the nth stairs:
    int n = 5;
    cout << "\nNumber of ways to climb " << n << " steps are : ";
    cout << count(n);

    // Converting the number like(0, 1....) to string(zero, one...):
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    cout << "Enter the num value: ";
    cin >> num;
    cout << "Converting number to string is: ";
    sayDigit(num, arr);
}