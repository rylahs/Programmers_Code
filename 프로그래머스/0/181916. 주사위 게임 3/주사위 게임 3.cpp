#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    // [수정] 6가지 쌍을 모두 비교하여 네 숫자가 확실히 다를 때만 진입
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        answer = min({a, b, c, d});
        return answer;
    }
    
    // 네 숫자가 모두 같은 경우
    if (a == b && b == c && c == d && d == a)
    {
        answer = 1111 * a;
        return answer;
    }
    
    // 세 숫자가 같은 경우 (4가지 케이스)
    if (a == b && b == c && c != d)
    {
        answer = (10 * a + d) * (10 * a + d);
        return answer;
    }
    if (a == b && b == d && b != c)
    {
        answer = (10 * a + c) * (10 * a + c);
        return answer;
    }
    if (a == c && c == d && a != b)
    {
        answer = (10 * a + b) * (10 * a + b);
        return answer;
    }
    if (b == c && c == d && a != b)
    {
        answer = (10 * b + a) * (10 * b + a);
        return answer;
    }
    
    // 두 개씩 같은 경우 (3가지 케이스)
    if (a == b && c == d && a != c)
    {
        answer = (a + c) * abs(a - c);
        return answer;
    }
    if (a == c && b == d && a != b)
    {
        answer = (a + b) * abs(a - b);
        return answer;
    }
    if (a == d && b == c && a != b)
    {
        answer = (a + b) * abs(a - b);
        return answer;
    }
    
    // 어느 두 개만 같고 나머지 두 개는 각각 다른 경우 (6가지 케이스)
    if (a == b && a != c && a != d)
    {
        answer = c * d;
        return answer;
    }
    if (a == c && a != b && a != d)
    {
        answer = b * d;
        return answer;
    }
    if (a == d && a != b && a != c)
    {
        answer = b * c;
        return answer;
    }
    if (b == c && b != a && b != d)
    {
        answer = a * d;
        return answer;
    }
    if (b == d && b != a && b != c)
    {
        answer = a * c;
        return answer;
    }
    if (c == d && c != a && c != b)
    {
        answer = a * b;
        return answer;
    }
    
    return min({a, b, c, d});
}