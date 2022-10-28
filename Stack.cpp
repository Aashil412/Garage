#include"Stack.h"
Stack::Stack() {}
int Stack::getTop() {
    return top;
}
bool Stack::isFull() {
    if (top == 9) {

        return true;
    }
    return false;
}
Car Stack::peek() {
    if (top == -1) { //checks to see if the stack doesnt have anything
        exit(0);
    }
    return arr[top]; //returns the top value
}
bool Stack::isEmpty() {
    if (top == -1) {
        return true;
    }
    return false;
}
bool Stack::pop() {
    //case 1: if stack isempty
    if (isEmpty() == true) {
        return false;
    }
    //case 2: if stack is not empty
    if (isEmpty() == false) {
        top = top - 1;
        return true;
    }
    return 0;
}
bool Stack::push(const Car& car) {
    if (top != 9) {
        top++;
        arr[top] = car;
        return true;

    }
    return false;
}
bool Stack::isIn(const Car& car) {
    for (int i = 0; i <= top; i++) {
        if (arr[i].license == car.license) {
            return true;
        }

    }
    return false;
}
