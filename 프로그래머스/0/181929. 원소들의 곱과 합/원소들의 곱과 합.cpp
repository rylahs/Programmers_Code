#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
    
    int sum = accumulate(num_list.begin(), num_list.end(), 0);
    int mult = 1;
    for (auto& e : num_list)
        mult *= e;
    sum = sum * sum;
    int answer = ((mult < sum) ? 1 : 0);
    return answer;
}