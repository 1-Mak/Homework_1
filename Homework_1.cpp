

#include <iostream>
#include <ctime>
#include <ctime>
void fill_array(int* array, int length) {
    std::cout << "Input 12 numbers: " << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> array[i];
    }
}
void change_array(int* array, int length)
{
    int temp;
    for (int i = 0; i < length; i+=2) {
        temp = array[i];
        array[i] = array[i+1];
        array[i + 1] = temp;




    }

}
void print_array(int* array, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
void fill_2D_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            array[i][j] = std::rand() % 41 + 10;;
        }
    }
}
void print_2D_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
 
        }
        std::cout << std::endl;

    }
}
double add(double a, double b) {
    return a + b;
}
double divide(double a, double b) {
    return a / b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
int main()
{
    // task3
    int length = 12;
    int* array = new int[length];
    fill_array(array, length);
    change_array(array, length);
    print_array(array, length);
    ////task4
    std::srand(time(NULL));
    std::cout << "Input rows: " << std::endl;
    int rows;
    std::cin >> rows;
    std::cout << "Input cols: " << std::endl;
    int cols;
    std::cin >> cols;
    int** array_2D = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array_2D[i] = new int[cols];
    }
    fill_2D_array(array_2D, rows, cols);
    print_2D_array(array_2D, rows, cols);
    //task5
    double a, b;
    char symbol;
    double (*ptr)(double, double);
    symbol = '+';
    while (true) {
        std::cout << "Input 2 numbers and symbol of operation: " << std::endl;
        std::cin >> a >> b >> symbol;
        if (symbol == ' ') {
            break;
        }
        switch (symbol) {
        case '+':
            ptr = add;
            break;
        case '/':
            ptr = divide;
            break;
        case '-':
            ptr = subtract;
            break;
        case '*':
            ptr = multiply;
            break;
        default:
            std::cout << "Uncorrect symbol" << std::endl;
            continue;
        }
        double answer = ptr(a, b);
        std::cout <<"Result: " << answer << std::endl;

    }
    


}


