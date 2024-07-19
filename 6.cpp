#include <iostream>

using namespace std;

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

void convert(int &hour, int &min, int &sec, int &sum){
    min += sec / 60;
    sec = sec % 60;
    sum = hour * 60 + min;
}
void areaOfCircle(float &r, float &sum){
    sum = 3.14*r*r;
}

int main(){
    int choice;
    do{
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1. Swapping numbers" << endl;
        cout << "2. Converting" << endl;
        cout << "3. Area of circle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice =";
        cin >> choice;

        switch (choice) {
            case 1: {
                int firstNumber = 10;
                int secondNumber = 20;

                cout << "Before swapping:" << endl;
                cout << "First number: " << firstNumber << ", Second number: " << secondNumber << endl;

                swapNums(firstNumber, secondNumber);

                cout << "After swapping: " << endl;
                cout << "First number: " << firstNumber << ", Second number: " << secondNumber << endl;

                break;
            }
            case 2:{
                int hour,min,sec, sum = 0;
                cout << "Enter hour:";
                cin >> hour;
                cout << "Enter minute:";
                cin >> min;
                cout << "Enter seconds:";
                cin >> sec;

                convert(hour,min,sec,sum);
                cout << hour << " hour " << min << " minute " << sec << " second " << " is equal to: " << sum << " minutes" << endl;
                break;
            }
            case 3:{
                float r;
                float sum = 0;
                cout << "Enter r: ";
                cin >> r;

                areaOfCircle(r,sum);

                cout << "Area of circle is: " << sum << endl;
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
