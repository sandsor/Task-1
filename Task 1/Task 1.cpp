// Task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int age;

int main()
{
    system("cls");

    std::cout << "Hello Friend\n";
    std::cout << "What is your age?\n";

    std::cin >> age;
    if (age < 20) {
        std::cout << "you are a teenager\n";
    }
    else
        std::cout << "you are an adult\n";
    system("pause");
}
