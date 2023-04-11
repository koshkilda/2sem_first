#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
    deque <string> d; //создание deqa

    double a = 0;
    int num_of_operations = 0;
    cin >> a >> num_of_operations; //ввод первого числа и количества операций

    char operation = 0;
    char num  = 0;
    for (int i = 0; i < num_of_operations; i++)
    {
        cin >> operation >> num; // ввод опреаций

        d.push_back(operation); // добавление операций в deq
        d.push_back(num);

        cout << "("; // вывод открывающих скобочек
    }

    cout << a; // вывод первого числа

    for (int i = 0; i < num_of_operations; i++)
    {
        d.pop_front(&operation); // чистим deq
        d.pop_front(&num);

        cout << ")" << operation << num; // вывод операций
    }

    return 0;
}
