#include <iostream>
#include <cstdlib>
#include <ctime>

char generateRandomCharacter() { 
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+{}[]<>?";
    const int maximumDex = sizeof(charset) - 1;
    return charset[rand() % maximumDex];
}

int main() { 
    srand(time(0));

    int passwordLength;
    std::cout << "Enter the password length: ";
    std::cin >> passwordLength;

    std::string password;
    for (int i = 0; i < passwordLength; ++i) { 
        password += generateRandomCharacter();

    }

    std::cout << "Here is your new password: " << password << std::endl;

    return 0;
}