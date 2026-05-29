#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd = "";
    string even = "";
    
    for (auto& e : num_list)
    {
        if (e % 2 == 0)
            even += to_string(e);
        else
            odd += to_string(e);
    }
    
    int i_odd = stoi(odd);
    int i_even = stoi(even);
    
    answer = i_odd + i_even;
    
    return answer;
}