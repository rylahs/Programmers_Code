#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer;
    sort(indices.begin(), indices.end());
    answer.reserve(my_string.length() - indices.size() + 1);
    int idx = 0;
    for (int i = 0; i < my_string.length(); i++)
    {
        if (indices[idx] == i)
        {
            idx++;
            continue;
        }
        answer += my_string[i];
    }
    return answer;
}