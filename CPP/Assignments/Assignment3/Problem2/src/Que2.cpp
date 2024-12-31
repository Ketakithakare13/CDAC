#include <iostream>
using namespace std;

class Matrix {
private:
    int row;
    int col;
    int **arr;

public:

    Matrix(int row, int col) {
        this->row = row;
        this->col = col;

        arr = new int*[row];
        for (int i = 0; i < row; ++i) {
            arr[i] = new int[col];
        }
    }


    ~Matrix() {
        for (int i = 0; i < row; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    void acceptRecord() {
        cout << "Enter the elements of the matrix (" << row << " x " << col << "):\n";
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << "Enter element at [" << i << "][" << j << "]: ";
                cin >> arr[i][j];
            }
        }
    }


    void printRecord() const {
        cout << "Matrix (" << row << " x " << col << "):\n";
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;


    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;


    Matrix mat(rows, cols);


    mat.acceptRecord();
    mat.printRecord();

    return 0;
}
