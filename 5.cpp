#include <iostream>
using namespace std;

int main(){
    int choice;
    do {
        cout << endl;
        cout << "---Fazliddin---" << endl;
        cout << "___Menu___" << endl;
        cout << "1.Stars Sequence1" << endl;
        cout << "2.stars Sequence2" << endl;
        cout << "3.stars Sequence3" << endl;
        cout << "4.stars Sequence4" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice =";
        cin >> choice;

        switch (choice) {
            case 1:{
                int n = 5;
                for (int i = 0; i < n; ++i) {
                    char ch;
                    ch = 'A' + i;
                    for (int j = 0; j <= i; ++j) {
                        cout << ch;
                    }
                    cout << endl;
                }
                break;
            }
            case 2:{
                int n = 5;
                for (int i = 1; i <= n; ++i) {
                    for (int k = i; k <= n; ++k) {
                        cout << "  ";
                    }
                    for (int j = 1; j <= i; ++j) {
                        cout << j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 3:{
                int n = 3;
                for (int i = 1; i <= n; ++i) {
                    for (int j = i; j <= n; ++j) {
                        cout << "  ";
                    }
                    for (int k = 1; k < i; ++k) {
                        cout << "* ";
                    }
                    for (int l = 1; l <= i; ++l) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 4:{
                int n = 4;
                for (int i = 1; i < n; ++i) {
                    for (int j = i; j <= n; ++j) {
                        cout << "  ";
                    }
                    for (int k = 1; k < i; ++k) {
                        cout << "* ";
                    }
                    for (int l = 1; l <= i; ++l) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                for (int i = 1; i <= n; ++i) {
                    for (int j = 1; j <= i; ++j) {
                        cout << "  ";
                    }
                    for (int k = i; k < n; ++k) {
                        cout << "* ";
                    }
                    for (int l = i; l <= n; ++l) {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;
            }
            case 5:{
                cout << "Exiting the program" << endl;
                break;
            }
            default:{
                cout << "Invalid choice!!!" << endl;
                break;
            }
        }

    }while(choice!=5);

    return 0;
}