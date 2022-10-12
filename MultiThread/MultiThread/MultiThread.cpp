// MultiThread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <string>

using namespace std;

// Công việc thứ nhất cần làm
void Task1(string Task1Description)
{
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << Task1Description << ": " << i << endl;
    }
}

// Công việc thứ hai cần làm
void Task2(string Task2Description)
{
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << Task2Description << ": " << i << endl;
    } 
}

int main()
{
    // Tạo 2 thread để thực thi 2 công việc
    thread worker1(Task1, "Floor cleaning");
    thread worker2(Task2, "Cooking");
    
    // Cần kết thúc 2 thread trên trước khi main thread kết thúc
    worker1.join();
    worker2.join();

    return 0;
}

