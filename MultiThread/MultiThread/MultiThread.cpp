// MultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

using namespace std;

void DisplayFunction1(char symbol)
{
    for (int i = 0; i < 100; i++) {
        cout << symbol;
    }
}

void DisplayFunction2()
{
    for (int i = 0; i < 100; i++) {
        cout << "-";
    }
}

int main()
{
    std::thread worker1(DisplayFunction1, 'O');
    std::thread worker2(DisplayFunction2);
    
    system("pause>nul");

    //return 0;
}
