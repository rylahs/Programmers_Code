#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.reserve(n);
    
    long long tmp = x;
    while(answer.size() < n)
    {
        answer.emplace_back(tmp);
        
        tmp += x;
    }
    return answer;
}