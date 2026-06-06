#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int two_first = -1;
    int two_last = -1;
    
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (two_first == -1)
        {
            if (arr[i] == 2)
            {
                two_first = i;
                continue;
            }
        }
        else
        {
            if (arr[i] == 2)
            {
                two_last = i;
            }
        }
    }
    
    if (two_first == -1)
    {
        answer.emplace_back(-1);
        return answer;
    }
    if (two_last == -1)
    {
        answer.emplace_back(arr[two_first]);
        return answer;
    }
    answer.reserve(two_last - two_first + 1);
    for (int i = two_first; i <= two_last; i++)
        answer.emplace_back(arr[i]);
    
    return answer;
}