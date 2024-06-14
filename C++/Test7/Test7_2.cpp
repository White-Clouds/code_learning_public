#include<iomanip>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

class Matrix {
public:
    Matrix();

    friend Matrix operator+(Matrix &, Matrix &);

    void input();

    void display();

private:
    int mat[2][3];
};

Matrix::Matrix() {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            mat[i][j] = 0;
}

Matrix operator+(Matrix &a, Matrix &b) {
    Matrix c;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            c.mat[i][j] = a.mat[i][j] + b.mat[i][j];
    return c;
}

void Matrix::input() {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];
}

void Matrix::display() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << std::left << setw(5) << mat[i][j];
        cout << endl;
    }
}

int main() {
    Matrix a, b, c;
    cout << "input a: \n";
    a.input();
    cout << "input b: \n";
    b.input();
    c = a + b;
    cout << "output c: \n";
    c.display();
    return 0;
}
