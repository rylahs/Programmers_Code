#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    cout << n << ' ' << ((n % 2 == 0) ? "is even" : "is odd") << '\n';
    
    return 0;
}