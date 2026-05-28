#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for (const auto& str : arr)
    {
        for (const auto& e : str)
            answer += e;
    }
    
    return answer;
}