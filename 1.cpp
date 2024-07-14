#include <iostream>

using namespace std;
int main() {
    int choice;
    do {
        cout << endl;
        court << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1. Hello World" << endl;
        cout << "2. Variables" << endl;
        cout << "3. Adding numbers" << endl;
        cout << "4. Area of sqr" << endl;
        cout << "5. Area of rec" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice :)" << " ";
        cin >> choice;

        switch (choice) {
            case 1:{
                cout << "Hello world :)" << endl;
                break;
            }
            case 2:{
                int a,b;
                a = 5;
                b = 6;
                cout << "a = " << a << endl << "b  = " << b << endl;
                break;
            }
            case 3:{
                int a,b;
                cout << "Enter the numbers:" << endl;
                cout << "a= ";
                cin >> a;
                cout << "b= ";
                cin >> b;
                cout << "a + b = " << a + b << endl;
                break;
            }
            case 4:{
                int a;
                cout << "Enter a = ";
                cin >> a;
                cout << "The are of sqr is = " << a*a;
                break;
            }
            case 5:{
                int w,l;
                cout << "Enter the width = ";
                cin >> w;
                cout << "Enter the length = ";
                cin >> l;
                cout << "The are of rec is = " << w*l << endl;
                break;
            }
            case 6:{
                cout << "Bye :)" << endl;
                break;
            }
            default:
                cout << "Invalid :(" << endl;
        }

    } while(choice !=6);
    return 0;
}
