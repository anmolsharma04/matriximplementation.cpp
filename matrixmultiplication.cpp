#include<iostream>
using namespace std;

int main(){
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[2][3] = {{2, 2, 2}, {3, 3, 3}};
    int result[2][3]={0};  // Result matrix declared

//The outermost loop (for (int i = 0; i < 2; i++)) iterates over the rows of matrix1.
//The middle loop (for (int j = 0; j < 2; j++)) iterates over the columns of matrix2.
//The innermost loop (for (int k = 0; k < 3; k++)) computes the dot product by summing the products of the corresponding elements of the current row of matrix1 and the current column of matrix2.

int sum[2][2]={0};
for(int i =0;i<2;i++){
    for(int j=0;j<3;j++){
        for(int k =0;k<3;k++){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
    }
}

 // Display result
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
