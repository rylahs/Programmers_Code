#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int n = static_cast<int>(arr.size());
    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    
    answer = sum / n;
    return answer;
}