#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> isminus;
    if (n > s)
    {
        isminus.emplace_back(-1);
        return isminus;
    }
    
    int base = s / n;
    int remain = s % n;
    vector<int> answer(n - remain, base);
    answer.resize(n, base + 1);
    
    return answer;
}