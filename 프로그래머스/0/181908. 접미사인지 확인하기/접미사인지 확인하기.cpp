#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    if (is_suffix.length() > my_string.length())
        return 0;
    string comp = my_string.substr(my_string.length() - is_suffix.length());
    if (comp == is_suffix)
        answer = 1;
    
    return answer;
}