#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    int idx = c - 1;
    int n = my_string.length();
    
    answer.reserve(n);
    
    while (idx < n)
    {
        answer += my_string[idx];
        idx += m;
    }
    
    
    return answer;
}