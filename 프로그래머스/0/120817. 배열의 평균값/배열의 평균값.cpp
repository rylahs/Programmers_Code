#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    double answer = static_cast<double>(sum) / numbers.size();
    return answer;
}