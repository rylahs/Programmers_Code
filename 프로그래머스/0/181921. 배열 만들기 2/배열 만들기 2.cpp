#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for (int i = l; i <= r; i++)
    {
        int cur = i;
        
        bool isTrue = true;
        
        while (cur > 0)
        {
            if (cur % 5 != 0)
            {
                isTrue = false;
                break;
            }
            
            cur /= 10;
        }
        
        if (!isTrue)
            continue;
        answer.emplace_back(i);
    }
    
    
    if (answer.empty())
        answer.emplace_back(-1);
    
    return answer;
}