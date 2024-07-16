#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int choice;

    do {
    cout << endl;
    cout << "---Fazliddin---" << endl;
    cout << "_____Menu_____" << endl;
    cout << "1.Area and Circumference of Circle " << endl;
    cout << "2.Area of Scalene Triangle " << endl;
    cout << "3.Area of Equilateral Triangle " << endl;
    cout << "4.Area of Right angle Triangle  " << endl;
    cout << "5.Exit " << endl;
    cout << "Enter your choice = ";
    cin >> choice;
        switch(choice) {
            case 1: {
                int r;
                cout << "Enter r(radius) = ";
                cin >> r;
                cout << "Area of Circle is = " << 3.14 * r * r << endl;
                cout << "Circumference of Circle is = " << 2 * 3.14 * r << endl;
                break;
            }
            case 2: {
                double a, b, c;
                cout << "a = ";
                cin >> a;
                cout << "b = ";
                cin >> b;
                cout << "c = ";
                cin >> c;
                double p = (a + b + c) / 2;
                cout << "Area of Scalene Triangle = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
                break;
            }
            case 3:{
                 int a;
                 cout << "Enter a side = ";
                 cin >> a;
                 cout << "Area of Equilateral Triangle is = " << (sqrt(3)/4)*a*a << endl;
                break;
             }
            case 4:{
                int a,b;
                cout << "Enter a side = ";
                cin >> a;
                cout << "Enter b side = ";
                cin >> b;
                cout << "Area of Right angle Triangle is = " << 0.5*a*b << endl;
                break;
            }
            case 5 :{
                cout << "Exiting the program " << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice !=5);
    return 0;
}
