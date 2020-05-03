//
// Created by jorge on 1/5/20.
//

#include "ejercicios.h"
#include "t_stack/Stack_T.h"
#include "stack/Stack.h"

void ejercicio1(){
}
void ejercicio2(){
    cout<<"Stack de array"<<endl;
    Stack arr_stk(10);
    cout<<"Agrego '1' al Stack"<<endl;
    arr_stk.set_push(1);
    cout<<"Agrego '2' al Stack"<<endl;
    arr_stk.set_push(2);
    cout<<"Agrego '3' al Stack"<<endl;
    arr_stk.set_push(3);
    cout<<"Agrego '4' al Stack"<<endl;
    arr_stk.set_push(4);
    cout<<"Agrego '5' al Stack"<<endl;
    arr_stk.set_push(5);
    cout<<"Agrego '6' al Stack"<<endl;
    arr_stk.set_push(6);
    cout<<"Obtenemos el top: "<<arr_stk.get_top()<<endl;
    cout<<"Hacemos pop dos veces"<<endl;
    arr_stk.set_pop();
    arr_stk.set_pop();
    cout<<"Obtenemos el top: "<<arr_stk.get_top()<<endl;
    cout<<"Imprime el Stack"<<endl;
    while(!arr_stk.is_emply()){
        cout<<arr_stk.get_top()<<" ";
        arr_stk.set_pop();
    }
    cout<<endl;
    cout<<"El Stack esta vacio: "<<arr_stk.is_emply()<<"(true)"<<endl;
}
void ejercicio3(){
    int	arr1[] = {100, 200, 300, 400, 500, 10, 20, 30, 40, 50};
    int	n1 = sizeof(arr1)/sizeof(arr1[0]);
    int	arr2[] = {250, 350, 455, 505, 5500, 210, 12, 34, 45};
    int	n2 = sizeof(arr2)/sizeof(arr2[0]);

    list<int> lst_1(arr1, arr1 + n1);
    list<int> lst_2(arr2, arr2 + n2);

    cout<<"Print List 1: ";
    print_list(lst_1);
    cout<<"Print List 2: ";
    print_list(lst_2);

    lst_1.merge(lst_2);
    cout<<"Print Merge List: ";
    print_list(lst_1);
    cout<<"Print sorting List: ";
    lst_1.sort();
    print_list(lst_1);

    cout << "Binary search de un 5500: ";
    if(binary_search(lst_1.begin(), lst_1.end(), 5500)) cout<<"Encontrado en la posición "<<binary_search(lst_1.begin(), lst_1.end(), 500)<<endl;
    else cout<<"No encontrado"<<endl;

    cout << "Binary search de un 200: ";
    if(binary_search(lst_1.begin(), lst_1.end(), 200)) cout<<"Encontrado en la posición "<<binary_search(lst_1.begin(), lst_1.end(), 200)<<endl;
    else cout<<"No encontrado"<<endl;

    cout << "Binary search de un 3: ";
    if(binary_search(lst_1.begin(), lst_1.end(), 3)) cout<<"Encontrado en la posición "<<binary_search(lst_1.begin(), lst_1.end(), 3)<<endl;
    else cout<<"No encontrado"<<endl;

    cout<<"Lower bound del elemento mas grande: ";
    auto lower = lower_bound(lst_1.begin(), lst_1.end(), 200);
    cout<<*lower<<endl;
}
void ejercicio4(){
    cout<<"Stack de string"<<endl;
    Stack_T<char> Sta_stri(10);
    cout<<"Agrego 'C' al Stack"<<endl;
    Sta_stri.set_push('C');
    cout<<"Agrego 'M' al Stack"<<endl;
    Sta_stri.set_push('M');
    cout<<"Agrego 'S' al Stack"<<endl;
    Sta_stri.set_push('S');
    cout<<"Agrego 'J' al Stack"<<endl;
    Sta_stri.set_push('J');
    cout<<"Agrego 'L' al Stack"<<endl;
    Sta_stri.set_push('L');
    cout<<"Agrego 'P' al Stack"<<endl;
    Sta_stri.set_push('P');
    cout<<"Obtenemos el top: "<<Sta_stri.get_top()<<endl;
    cout<<"Hacemos pop dos veces"<<endl;
    Sta_stri.set_pop();
    Sta_stri.set_pop();
    cout<<"Obtenemos el top: "<<Sta_stri.get_top()<<endl;
    cout<<"Imprime el Stack"<<endl;
    while(!Sta_stri.is_emply()){
        auto xx =Sta_stri.get_top();
        cout<<xx<<" ";
        Sta_stri.set_pop();
    }
    cout<<endl;
    cout<<"El Stack esta vacio: "<<Sta_stri.is_emply()<<"(true)"<<endl;
 }