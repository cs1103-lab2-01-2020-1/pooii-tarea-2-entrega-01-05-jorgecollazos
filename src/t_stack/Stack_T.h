//
// Created by jorge on 2/5/20.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_T_H
#define POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_T_H

template<typename T>
class Stack_T {
private:
    T* stack = new T[size];
    int size;
    int top;
public:
    Stack_T(int tam): size(tam), top(-1){}

    void set_pop(){
        if(is_emply()) return;
        top--;
    }

    void set_push(T x){
        if(top+1 == size) return;
        top++;
        stack[top] = x;
    }

    T get_top(){
        return stack[top];
    }

    int get_size() {
        return (top+1);
    }

    bool is_emply(){
        return (top == -1);
    }

    ~Stack_T(){
        delete [] stack;
        stack = nullptr;
    }

};


#endif //POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_T_H
