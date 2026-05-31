#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for (const auto& e : num_list)
        answer.emplace_back(e);
    
    int n = static_cast<int>(num_list.size());
    
    if (num_list[n - 1] > num_list[n - 2])
        answer.emplace_back(num_list[n - 1] - num_list[n - 2]);
    
    else
        answer.emplace_back(num_list[n - 1] * 2);
    
    return answer;
}