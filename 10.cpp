#include <iostream>
using namespace std;

// Function to display a matrix
void displayMatrix(int** matrix, int m, int n) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrices(int** matrix1, int** matrix2, int** result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int** matrix, int** result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int** matrix1, int** matrix2, int** result, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to manage sales data
void salesData() {
    const int salesmen = 5;
    const int products = 3;
    int sales[salesmen][products];

    // Input sales data
    cout << "Enter sales data for each salesman and product:" << endl;
    for (int i = 0; i < salesmen; i++) {
        cout << "Salesman " << (i + 1) << ":" << endl;
        for (int j = 0; j < products; j++) {
            cout << "Product " << (j + 1) << ": ";
            cin >> sales[i][j];
        }
    }

    // Print total sales by each salesman
    cout << "\nTotal sales by each salesman:" << endl;
    for (int i = 0; i < salesmen; i++) {
        int totalSales = 0;
        for (int j = 0; j < products; j++) {
            totalSales += sales[i][j];
        }
        cout << "Salesman " << (i + 1) << ": " << totalSales << endl;
    }

    // Print total sales of each item
    cout << "\nTotal sales of each item:" << endl;
    for (int j = 0; j < products; j++) {
        int totalItemSales = 0;
        for (auto & sale : sales) {
            totalItemSales += sale[j];
        }
        cout << "Product " << (j + 1) << ": " << totalItemSales << endl;
    }
}

int main() {
    int choice;

    do {
        cout << endl;
        cout << "---Menu---" << endl;
        cout << "1. Matrix Operations" << endl;
        cout << "2. Sales Data Management" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int m, n, p;
                cout << "Enter the number of rows and columns for the matrices: ";
                cin >> m >> n;

                int** matrix1 = new int*[m];
                int** matrix2 = new int*[m];
                int** result = new int*[m];
                for (int i = 0; i < m; i++) {
                    matrix1[i] = new int[n];
                    matrix2[i] = new int[n];
                    result[i] = new int[n];
                }

                cout << "Enter elements of first matrix:" << endl;
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        cin >> matrix1[i][j];
                    }
                }

                cout << "Enter elements of second matrix:" << endl;
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        cin >> matrix2[i][j];
                    }
                }

                int** transposed = new int*[n];
                for (int i = 0; i < n; i++) {
                    transposed[i] = new int[m];
                }

                int** matrix2_for_multiplication;
                int** product;

                do {
                    cout << endl;
                    cout << "Matrix Operations Menu:" << endl;
                    cout << "1. Display matrices" << endl;
                    cout << "2. Add matrices" << endl;
                    cout << "3. Transpose first matrix" << endl;
                    cout << "4. Multiply matrices" << endl;
                    cout << "5. Go back to main menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            cout << "First matrix:" << endl;
                            displayMatrix(matrix1, m, n);
                            cout << "Second matrix:" << endl;
                            displayMatrix(matrix2, m, n);
                            break;

                        case 2:
                            addMatrices(matrix1, matrix2, result, m, n);
                            cout << "Sum of matrices:" << endl;
                            displayMatrix(result, m, n);
                            break;

                        case 3:
                            transposeMatrix(matrix1, transposed, m, n);
                            cout << "Transpose of first matrix:" << endl;
                            displayMatrix(transposed, n, m);
                            break;

                        case 4:
                            cout << "Enter the number of columns for the second matrix: ";
                            cin >> p;
                            matrix2_for_multiplication = new int*[n];
                            product = new int*[m];
                            for (int i = 0; i < n; i++) {
                                matrix2_for_multiplication[i] = new int[p];
                            }
                            for (int i = 0; i < m; i++) {
                                product[i] = new int[p];
                            }
                            cout << "Enter elements of second matrix for multiplication:" << endl;
                            for (int i = 0; i < n; i++) {
                                for (int j = 0; j < p; j++) {
                                    cin >> matrix2_for_multiplication[i][j];
                                }
                            }
                            multiplyMatrices(matrix1, matrix2_for_multiplication, product, m, n, p);
                            cout << "Product of matrices:" << endl;
                            displayMatrix(product, m, p);
                            for (int i = 0; i < n; i++) {
                                delete[] matrix2_for_multiplication[i];
                            }
                            delete[] matrix2_for_multiplication;
                            for (int i = 0; i < m; i++) {
                                delete[] product[i];
                            }
                            delete[] product;
                            break;

                        case 5:
                            cout << "Returning to main menu." << endl;
                            break;

                        default:
                            cout << "Invalid choice! Try again." << endl;
                    }
                } while (choice != 5);

                for (int i = 0; i < m; i++) {
                    delete[] matrix1[i];
                    delete[] matrix2[i];
                    delete[] result[i];
                }
                delete[] matrix1;
                delete[] matrix2;
                delete[] result;
                for (int i = 0; i < n; i++) {
                    delete[] transposed[i];
                }
                delete[] transposed;
                break;
            }

            case 2:
                salesData();
                break;

            case 3:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
