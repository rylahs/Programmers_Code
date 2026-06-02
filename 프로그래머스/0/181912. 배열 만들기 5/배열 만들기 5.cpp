#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(const auto& e : intStrs)
    {
        int value = stoi(e.substr(s, l));
        if (value > k)
            answer.emplace_back(value);
    }
    return answer;
}