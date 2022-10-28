#ifndef STACK_H
#define STACK_H
#include <iostream>
#include<string>
using namespace std;


struct Car {
    string license;
    char ParkingCode;
    int count = 0;
    int counts();
    void increment();
};

class Stack {
private:

    int top = -1;
public:
    Car arr[10];

    Stack();
    bool pop();
    bool push(const Car& car);
    Car peek();
    bool isEmpty();
    bool isFull();
    int getTop();
    bool isIn(const Car& car);

};
#endif