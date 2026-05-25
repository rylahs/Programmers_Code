#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    string str;
    int n;
    cin >> str >> n;
    
    while (n--)
    {
        cout << str;
    }
    
    cout << '\n';
    
    return 0;
}