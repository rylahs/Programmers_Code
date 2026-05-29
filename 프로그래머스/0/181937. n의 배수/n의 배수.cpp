#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int answer = (num % n == 0);
    return answer;
}