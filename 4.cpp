#include <iostream>
using namespace std;

int main(){
    int choice;
    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1.Sum of numbers from m to n" << endl;
        cout << "2.Fibonacci series" << endl;
        cout << "3.Sum of its digits" << endl;
        cout << "4.Reverse of a number " << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice) {
            case 1:{
                int m,n,sum = 0;
                cout << "m = ";
                cin >> m;
                cout << "n = ";
                cin >> n;
                for (int i = m; i <= n; ++i) {
                    sum = sum + i;
                }
                cout << "Sum of numbers from m to n is = " << sum << endl;
                break;
            }
            case 2:{
                const int N = 20;
                int fib[N];
                fib[0] = 0;
                fib[1] = 1;

                int sum = fib[0] + fib[1];

                for (int i = 2; i < N; ++i) {
                    fib[i] = fib[i-1] + fib[i-2];
                    sum = sum + fib[i];
                }

                cout << "The first " << N << " terms of the Fibonacci series are:" << endl;
                for (int i : fib) {
                    cout << i << " ";
                }
                cout << endl;

                cout << "The sum of the first " << N << " terms of the Fibonacci series is: " << sum << endl;
                break;
            }
            case 3:{
                int number, sum = 0;

                cout << "Enter a number: ";
                cin >> number;

                int originalNumber = number;

                while (number != 0) {
                    sum += number % 10;
                    number /= 10;
                }

                cout << "The sum of the digits of " << originalNumber << " is: " << sum << endl;
                break;
            }
            case 4:{
                int number,reverseNumber = 0;
                cout << "Enter a number: ";
                cin >> number;

                int originalNumber = number;

                while (number != 0) {
                    int lastDigit = number % 10;
                    reverseNumber = reverseNumber * 10 + lastDigit;
                    number /= 10;
                }

                cout << "The reverse of " << originalNumber << " is: " << reverseNumber << endl;
            }
            case 5:{
                cout << "Exiting the program" << endl;
                break;
            }
            default:{
                cout << "Invalid choice !!!" << endl;
            }
        }
    } while (choice !=5);
    return 0;
}
