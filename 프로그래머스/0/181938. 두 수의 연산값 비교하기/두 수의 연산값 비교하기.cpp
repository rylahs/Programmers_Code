#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    
    
    int ab = stoi(to_string(a) + to_string(b));
    int mult = 2 * a * b;
    
    int answer = max(ab, mult);
    
    return answer;
}