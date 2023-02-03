#include <iostream>

// function to input a integer
void inputInteger(int &n) {
    bool error;
    // input validation loop
    do {
        error = false;
        std::cout << "Enter an integer: \n";
        std::cin >> n;
        if (std::cin.fail()) {
            std::cout << "Please enter a valid integer" << std::endl;
            error = true;
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
    } while (error == true);
}

int main() {
    int a;

    std::cout << "Input a: \n";
    inputInteger(a);

    std::cout << "a = " << a << std::endl;

    return 0;
}
