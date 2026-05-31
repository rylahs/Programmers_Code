#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(const auto& e : queries)
    {
        bool isExist = false;
        int min_value = 1e9;
        for (int i = e[0]; i <= e[1]; i++)
        {
            if (arr[i] > e[2])
            {
                min_value = min(min_value, arr[i]);
                isExist = true;
            }
        }
        
        if (!isExist)
            answer.emplace_back(-1);
        else
            answer.emplace_back(min_value);
    }
    return answer;
}