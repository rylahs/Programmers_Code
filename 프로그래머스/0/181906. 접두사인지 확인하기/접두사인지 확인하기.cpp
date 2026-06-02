#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    
    int m = is_prefix.length();
    int n = my_string.length();
    if (m > n)
        return 0;
    if (is_prefix == my_string.substr(0, m))
        return 1;
    return 0;
}