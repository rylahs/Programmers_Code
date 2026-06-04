#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(auto e : my_string)
    {
        if (e >= 'a' && e <= 'z')
            answer[e - 'a' + 26]++;
        
        else if (e >= 'A' && e <= 'Z')
            answer[e - 'A']++;
    }
    
    return answer;
}