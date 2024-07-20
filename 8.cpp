#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/* Area */
double area(double radius) {
    return M_PI * radius * radius;
}
double area(double width, double length) {
    return width * length;
}
double area(double height, double base, int) {
    return 0.5 * base * height;
}
double area(int side) {
    return side * side;
}

/* Circumference */
double circumference(double radius) {
    return 2 * M_PI * radius;
}
double circumference(double height, double width) {
    return 2 * (width + height);
}
double circumference(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}
double circumference(int side) {
    return 4 * side;
}

/* Largest number */
int largest(int num1, int num2, int num3) {
    return max(num1, max(num2, num3));
}

float largest(float num1, float num2, float num3) {
    return max(num1, max(num2, num3));
}

template <typename T>
T largest(T a, T b, T c) {
    return max(a, max(b, c));
}

int main() {
    int choice;
    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1. Area" << endl;
        cout << "2. Circumference" << endl;
        cout << "3. Largest" << endl;
        cout << "4. Template problem 3" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double radius, length, width, base, height;
                int side;

                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Area of Circle: " << area(radius) << endl;

                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of Rectangle: " << area(width, length) << endl;

                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of Triangle: " << area(height, base, 0) << endl;

                cout << "Enter side of the square: ";
                cin >> side;
                cout << "Area of Square: " << area(side) << endl;
                break;
            }
            case 2: {
                double radius, length, width, side1, side2, side3;
                int side;

                cout << "Enter radius of the circle: ";
                cin >> radius;
                cout << "Circumference of Circle: " << circumference(radius) << endl;

                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Circumference of Rectangle: " << circumference(length, width) << endl;

                cout << "Enter sides of the triangle: ";
                cin >> side1 >> side2 >> side3;
                cout << "Circumference of Triangle: " << circumference(side1, side2, side3) << endl;

                cout << "Enter side of the square: ";
                cin >> side;
                cout << "Circumference of Square: " << circumference(side) << endl;
                break;
            }
            case 3: {
                int a, b, c;
                float x, y, z;

                cout << "Enter three integers: ";
                cin >> a >> b >> c;
                cout << "Largest among " << a << ", " << b << ", " << c << " is: " << largest(a, b, c) << endl;

                cout << "Enter three floating-point numbers: ";
                cin >> x >> y >> z;
                cout << "Largest among " << x << ", " << y << ", " << z << " is: " << largest(x, y, z) << endl;
                break;
            }
            case 4: {
                int a, b, c;
                double x, y, z;

                cout << "Enter three integers: ";
                cin >> a >> b >> c;
                cout << "Largest among " << a << ", " << b << ", " << c << " is: " << largest(a, b, c) << endl;

                cout << "Enter three floating-point numbers: ";
                cin >> x >> y >> z;
                cout << "Largest among " << x << ", " << y << ", " << z << " is: " << largest(x, y, z) << endl;
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
