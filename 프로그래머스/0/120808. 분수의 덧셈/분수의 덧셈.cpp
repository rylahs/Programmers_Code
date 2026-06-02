#include <string>
#include <vector>
#include <numeric>


using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int n1 = numer1 * denom2 + numer2 * denom1;
    int n2 = denom1 * denom2;
    
    int mok = gcd(n1, n2);
    n1 /= mok;
    n2 /= mok;
    
    answer.emplace_back(n1);
    answer.emplace_back(n2);

    return answer;
}