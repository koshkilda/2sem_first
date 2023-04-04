#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n; //число пар

    map <string, int> mp; //создание mapa

    string key;
    int k = 0;
    while (k != n) { //заполнение mapa
        cin >> key;
        cin >> mp[key];
        k++;
    }

    for (auto number : mp) { //вывод пар
        cout << number.first << '-' << number.second << endl;
    }

    return 0;
}
