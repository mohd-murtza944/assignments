#include <iostream>
using namespace std;
class ColumnMajorArray {
private:
    int* array;
    int rows;
    int cols;

public:
    ColumnMajorArray(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        array = new int[rows * cols];
    }

    int& operator()(int row, int col) {
        return array[col * rows + row];
    }
};

int main() {
    const int ROWS = 3;
    const int COLS = 4;

    ColumnMajorArray arr(ROWS, COLS);

    int counter = 1;
    for (int col = 0; col < COLS; col++) {
        for (int row = 0; row < ROWS; row++) {
            arr(row, col) = counter++;
        }
    }

    for (int col = 0; col < COLS; col++) {
        for (int row = 0; row < ROWS; row++) {
            std::cout << arr(row, col) << " ";
        }
    }

    return 0;
}
