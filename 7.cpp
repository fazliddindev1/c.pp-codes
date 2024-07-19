#include <iostream>
using namespace std;

int power(int x, int y, int result = 1) {
    if (y == 0)
        return result;
    return power(x, y - 1, result * x);
}

int sumOfNaturalNumbers(int n){
    if (n <= 0)
        return 0;
    return n + sumOfNaturalNumbers(n-1);
}

int fibonacci(int n){
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b,a%b);
}

int F(int x, int y) {
    if (x < y)
        return 0;
    return F(x - y, y) + 1;
}

int main(){
    int choice;
    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1.x power y" << endl;
        cout << "2.Sum of natural numbers " << endl;
        cout << "3.Fibonacci Series" << endl;
        cout << "4.G.C.D for two integers" << endl;
        cout << "5.Compute F(x,y)" << endl;
        cout << "6.Exit" << endl;
        cout << "Enter your choice =";
        cin >> choice;

        switch (choice) {
            case 1:{
                int x,y;
                cout << "Enter x:";
                cin >> x;
                cout << "Enter y;";
                cin >> y;
                cout << "x^y is: " << power(x,y,1) << endl;
                break;
            }
            case 2:{
                int n;
                cout << "Enter natural number n: ";
                cin >> n;

                if (n <= 0){
                    cout << "Please natural number!" << endl;
                } else{
                    cout << "Sum of natural numbers up to " << n << " is " << sumOfNaturalNumbers(n) << endl;
                }
                break;
            }
            case 3:{
                int n;
                cout << "Enter the number of terms: ";
                cin >> n;

                cout << "Fibonacci Series up to " << n << " terms:" << endl;
                for (int i = 0; i < n; ++i) {
                    cout << fibonacci(i) << " ";
                }
                cout << endl;
                break;
            }
            case 4:{
                int a,b;
                cout << "Enter a:";
                cin >> a;
                cout << "Enter b: ";
                cin >> b;
                cout << "The G.C.D for" << a << " and " << b << " is: " << gcd(a,b) << endl;
                break;
            }
            case 5:{
                int x, y;
                cout << "Enter two integers x and y: ";
                cin >> x >> y;

                cout << "F(" << x << ", " << y << ") = " << F(x, y) << endl;
                break;
            }
        }

    } while (choice!=6);
    return 0;
}