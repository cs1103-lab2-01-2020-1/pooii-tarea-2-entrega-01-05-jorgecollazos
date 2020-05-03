//
// Created by jorge on 2/5/20.
//

#include "Stack.h"

Stack::Stack(int tam): size(tam), top(-1) {
}

void Stack::set_push(int n) {
    if(top+1 == size)return;
    top++;
    stk[top] = n;
}

void Stack::set_pop() {
    if(is_emply()) return;
    top--;
}

int Stack::get_top() {
    return stk[top];
}

int Stack::get_size() {
    return (top+1);
}

bool Stack::is_emply() {
    return (top == -1);
}

Stack::~Stack() {
    delete [] stk;
    stk = nullptr;
}
