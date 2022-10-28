#ifndef GARAGE_H
#define GARAGE_H
#include"Stack.h"
using namespace std;

class Garage {
    Stack lane1;
    Stack lane2;
    Stack lane3;
public:
Garage(){};
    void Arrive(const Car& car);
    void Depart(const Car& car);
    bool check(const Car& car);
};
#endif