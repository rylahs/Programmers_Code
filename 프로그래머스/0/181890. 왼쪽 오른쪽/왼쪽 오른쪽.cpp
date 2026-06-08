#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int idx = -1;
    for (int i = 0; i < str_list.size(); i++)
    {
        if (str_list[i][0] == 'l')
        {
            idx = i;
            for (int j = 0; j < idx; j++)
            {
                answer.emplace_back(str_list[j]);
            }
            return answer;
        }
        else if (str_list[i][0] == 'r')
        {
            idx = i;
            for (int j = idx + 1; j < str_list.size(); j++)
            {
                answer.emplace_back(str_list[j]);
            }
            return answer;
        }
        
    }
    return answer;
}