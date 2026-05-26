#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin >> str;
    
    for (const auto& e : str)
        cout << e << '\n';
    return 0;
}