#include <iomanip>
#include <iostream>
#include <string>

class Employee {
   private:
    std::string firstName;
    std::string lastName;
    int age;
    std::string gender;
    std::string personalID;
    std::string employeeNumber;

   public:
    // function to input name
    void inputName();
    // function to input age
    void inputAge();
    // function to input gender
    void inputGender();
    // function to input personal ID
    void inputPersonalID();
    // function to input Employee Number
    void inputEmployeeNumber();
    // function to print employee's data
    void printEmployeeData();
};

void Employee::inputName() {
    std::cout << "Input first name: ";
    std::cin >> this->firstName;

    std::cout << "Input last name: ";
    std::cin >> this->lastName;
}

void Employee::inputAge() {
    bool check = true;
    std::string temp;
    do {
        check = true;
        std::cout << "Input age: ";
        std::cin >> temp;
        char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int i = 0;
        while (temp[i] != '\0') {
            int wrongCharacter = 0;
            for (int j = 0; j < 10; j++) {
                if (temp[i] == arr[j]) {
                    wrongCharacter = 1;
                    break;
                }
            }
            if (wrongCharacter == 0) {
                std::cout << "Wrong characters\n";
                check = false;
            }
            i++;
        }
        if (check == false) {
            continue;
        }
        if (stoi(temp) > 100 || stoi(temp) < 0) {
            std::cout << "Age can only be from 0 to 100\n";
            check = false;
        }
    } while (!check);
    this->age = std::stoi(temp);
}

void Employee::inputGender() {
    bool check = true;
    do {
        check = true;
        std::cout << "Input gender: ";
        std::cin >> this->gender;
        if (this->gender != "male" && this->gender != "female") {
            std::cout << "Gender can only be \"male\" or \"female\"\n";
            check = false;
        }
    } while (!check);
}

void Employee::inputPersonalID() {
    bool check = true;
    do {
        check = true;
        std::cout << "Input personal ID: ";
        std::cin >> this->personalID;
        {
            char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            int i = 0;
            while (this->personalID[i] != '\0') {
                int wrongCharacter = 0;
                for (int j = 0; j < 10; j++) {
                    if (this->personalID[i] == arr[j]) {
                        wrongCharacter = 1;
                        break;
                    }
                }
                if (wrongCharacter == 0) {
                    std::cout << "Wrong characters\n";
                    std::cout << "Personal ID can only be numbers\n";
                    check = false;
                }
                i++;
            }
        }
    } while (!check);
}

void Employee::inputEmployeeNumber() {
    bool check = true;
    do {
        check = true;
        std::cout << "Input employee number: ";
        std::cin >> this->employeeNumber;
        {
            int len = this->employeeNumber.length();
            if (len != 8) {
                std::cout << "Wrong length\n";
                std::cout << "Employee number can only be from 00000000 to "
                             "99999999\n";
                check = false;
                continue;
            }
            char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            int i = 0;
            while (this->employeeNumber[i] != '\0') {
                int wrongCharacter = 0;
                for (int j = 0; j < 10; j++) {
                    if (this->employeeNumber[i] == arr[j]) {
                        wrongCharacter = 1;
                        break;
                    }
                }
                if (wrongCharacter == 0) {
                    std::cout << "Wrong characters\n";
                    std::cout << "Employee number can only be from 00000000 to "
                                 "99999999\n";
                    check = false;
                }
                i++;
            }
        }
    } while (!check);
}

void Employee::printEmployeeData() {
    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "Gender: " << this->gender << std::endl;
    std::cout << "Personal ID: " << this->personalID << std::endl;
    std::cout << "Unique Employee number: " << this->employeeNumber
              << std::endl;
}

int main() {
    Employee employee1;

    employee1.inputName();
    employee1.inputAge();
    employee1.inputGender();
    employee1.inputPersonalID();
    employee1.inputEmployeeNumber();

    employee1.printEmployeeData();

    return 0;
}
