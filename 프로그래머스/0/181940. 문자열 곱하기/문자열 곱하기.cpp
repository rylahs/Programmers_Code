#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    answer.reserve(static_cast<int>(my_string.length() * k));
    for (int i = 0; i < k; i++)
        answer += my_string;
    
    return answer;
}