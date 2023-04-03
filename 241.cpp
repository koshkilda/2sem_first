#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n; 
    
    map <string, int> mp;

    string key;
    int k = 0;
    while (k != n) {
        cin >> key;
        cin >> mp[key]; 
        k++;
    }

    for (auto number : mp) { 
        cout << number.first << '-' << number.second << endl;
    }

    return 0;
}
