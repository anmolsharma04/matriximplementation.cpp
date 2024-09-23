#include<iostream>
using namespace std;

int main(){
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{2, 2, 2}, {3, 3, 3}};
    int result[2][3];  // Result matrix declared

    // Adding corresponding elements of matrix1 and matrix2
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];  // Use the declared result array
        }
    }
    
    // Printing the result matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";  // Space added for better output format
        }
        cout << endl;  // Move to next line after printing each row
    }

    return 0;
}
