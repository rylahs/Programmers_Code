#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for (const auto& e : queries)
    {
        reverse(my_string.begin() + e[0], my_string.begin() + e[1] + 1);
    }
    
    answer = my_string;
    return answer;
}