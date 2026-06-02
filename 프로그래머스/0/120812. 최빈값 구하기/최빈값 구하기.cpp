#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    vector<int> cnt(1001, 0);
    for(const auto& e : array)
        cnt[e]++;
    
    auto mx_iter = max_element(cnt.begin(), cnt.end());
    int mx_count = *mx_iter;
    
    if (count(cnt.begin(), cnt.end(), mx_count) > 1)
        return -1;
    
    return distance(cnt.begin(), mx_iter);
}