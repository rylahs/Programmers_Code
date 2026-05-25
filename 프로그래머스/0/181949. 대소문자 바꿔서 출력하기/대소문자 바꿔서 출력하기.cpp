#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin >> str;
    
    for (auto& e : str)
    {
        if (e >= 'a' && e <= 'z')
            e -= 32;
        else if (e >= 'A' && e <= 'Z') 
            e += 32;
        cout << e;
    }
    return 0;
}