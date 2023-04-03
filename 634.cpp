#include <iostream>
#include <string>

using namespace std;

int main(){
    // наверное, это надо было как-то по-другому делать...
    double n;
    cin >> n;
    int num_of_operations;
    cin >> num_of_operations;

    if (num_of_operations != 0) {
        const int max = 20;
        string operations[max];
        for (int i = 0; i < num_of_operations; i++) {
            cin >> operations[i];
        }
        
        int k = 0;
        while (k < num_of_operations) {
            cout << "("; 
            k++;
        }
        
        cout << n;
        
        for (int i = 0; i < num_of_operations; i++) {
            cout << ")" << operations[i];
        }
    } else cout << n;

    return 0;
}