#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    
    for (const auto& e : control)
    {
        if (e == 'w')
            answer += 1;
        
        
        else if (e == 's')
            answer -= 1;
        
        else if (e == 'd')
            answer += 10;
        
        else if (e == 'a')
            answer -= 10;
    }
    
    
    return answer;
}