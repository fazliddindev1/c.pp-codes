#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int choice;

    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1. Calculate tax" << endl;
        cout << "2. Numbers +/-" << endl;
        cout << "3. Grading steel" << endl;
        cout << "4. ASCII test" << endl;
        cout << "5. Finding Leap year" << endl;
        cout << "6. Exit :(" << endl;
        cout << "Enter your choice = ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int salary;
                cout << "Enter your salary = ";
                cin >> salary;
                if (salary <= 1500) {
                    cout << "Tax is 0" << endl;
                } else if (salary <= 3000) {
                    cout << "Tax is = " << salary * 0.1 << " usd" << endl;
                } else if (salary <= 5000) {
                    cout << "Tax is = " << salary * 0.2 << " usd"<< endl;
                } else if (salary > 5000) {
                    cout << "Tax is = " << salary * 0.3 << " usd"<< endl;
                } else {
                    cout << "Invalid!!!" << endl;
                }
                break;
            }
            case 2:{
                int num;
                cout << "Enter number (-/+) = ";
                cin >> num;
                if (num > 0){
                    cout << num  << " is positive " << endl;
                } else if (num < 0){
                    cout << num << " is negative " << endl;
                } else {
                    cout << "It is 0" << endl;
                }
                break;
            }
            case 3:{
                int hardness;
                float carbon;
                double tensile;
                cout << "Enter hardness = ";
                cin >> hardness;
                cout << "Enter carbon content = ";
                cin >> carbon;
                cout << "Enter tensile = ";
                cin >> tensile;

                if (hardness > 50 && carbon < 0.7 && tensile > 5600){
                    cout << "Grade = 10" << endl;
                } else if (hardness > 50 && carbon < 0.7){
                    cout << "Grade = 9" << endl;
                } else if (carbon < 0.7 && tensile > 5600){
                    cout << "Grade = 8" << endl;
                } else if (hardness > 50 && tensile > 5600){
                    cout << "Grade = 7" << endl;
                } else if (hardness > 50 || carbon <0.7 || tensile > 5600){
                    cout << "Grade = 6" << endl;
                } else{
                    cout << "Grade = 5" << endl;
                }
                break;
            }
            case 4:{
                char character;
                cout << "Enter character = ";
                cin >> character;
                if (character >= 'A' && character <= 'Z'){
                    cout << "It is uppercase "<< endl;
                } else{
                    cout << "It is lowercase" << endl;
                }
                break;
            }
            case 5: {
                int year;
                cout << "Enter the year = ";
                cin >> year;
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                    cout << year << " is a leap year" << endl;
                } else {
                    cout << year << " is not a leap year" << endl;
                }
                break;
            }
            case 6:{
                cout << "Exiting the program" << endl;
                break;
            }
            default:{
                cout << "Invalid choice!!!" << endl;
                break;
            }
        }
    } while (choice != 6);
    return 0;
}
