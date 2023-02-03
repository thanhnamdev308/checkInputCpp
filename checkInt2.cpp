#include <iostream>

// function to input a integer from 0 to 100
void inputInteger(int &n) {
    std::string a;
    bool check;
    // input validation loop
    do {
        check = true;
        std::cout << "Enter an integer from 0 to 100: ";
        std::cin >> a;
        {
            char arr[11] = {'-', '0', '1', '2', '3', '4',
                            '5', '6', '7', '8', '9'};
            int i = 0;
            while (a[i] != '\0') {
                bool wrongCharacter = true;
                for (int j = 0; j < 11; j++) {
                    if (a[i] == arr[j]) {
                        wrongCharacter = false;
                        break;
                    }
                }
                if (wrongCharacter == true) {
                    std::cout << "Input numbers only\n";
                    check = false;
                    break;
                }
                i++;
            }
            if (check == false) {
                continue;
            }
            if (stoi(a) > 100 || stoi(a) < 0) {
                std::cout << "Input can only be from 0 to 100\n";
                check = false;
            }
        }
    } while (!check);
    n = stoi(a);
}

int main() {
    int a;

    std::cout << "Input a (0 <= a <= 100): \n";
    inputInteger(a);

    std::cout << "a = " << a << std::endl;

    return 0;
}
