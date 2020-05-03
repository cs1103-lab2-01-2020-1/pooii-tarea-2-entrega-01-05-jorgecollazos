//
// Created by jorge on 2/5/20.
//

#ifndef POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_H
#define POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_H


class Stack {
private:
    int* stk = new int[size];
    int size;
    int top;
public:
    Stack(int tam);
    void set_push(int n);
    void set_pop();
    int get_top();
    int get_size();
    bool is_emply();
    ~Stack();
};


#endif //POOII_TAREA_2_ENTREGA_01_05_JORGECOLLAZOS_STACK_H
