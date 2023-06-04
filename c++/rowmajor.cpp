#include <iostream>
using namespace std;
class RowMajorArray {
private:
    int* array;
    int rows;
    int cols;

public:
    RowMajorArray(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        array = new int[rows * cols];
    }

    int& operator()(int row, int col) {
        return array[row * cols + col];
    }
};

int main() {
    const int ROWS = 3;
    const int COLS = 4;

    RowMajorArray arr(ROWS, COLS);
    int counter = 1;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            arr(row, col) = counter++;
        }
    }
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            std::cout << arr(row, col) << " ";
        }
    }

    return 0;
}
