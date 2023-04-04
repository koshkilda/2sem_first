#include <iostream>
#include <string>

using namespace std;

int main(){
    // наверное, это надо было как-то по-другому делать...
    double n; // ввод первого числа
    cin >> n;
    int num_of_operations; // ввод количества операций
    cin >> num_of_operations;

    if (num_of_operations != 0) {
        const int max = 20; // вывод открывающих скобок при количестве операций != 0
        string operations[max];
        for (int i = 0; i < num_of_operations; i++) {
            cin >> operations[i];
        }

        int k = 0;
        while (k < num_of_operations) {
            cout << "(";
            k++;
        }

        cout << n; // вывод самого числа при количестве операций != 0

        for (int i = 0; i < num_of_operations; i++) { // вывод закрывающих скобок и операций при количестве операций != 0
            cout << ")" << operations[i];
        }
    } else cout << n; // вывод числа при количестве операций == 0

    return 0;
}
