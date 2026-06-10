#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    while (true)
    {
        bool isTrue = true;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] /= 2;
                isTrue = false;
            }
                
            else if (arr[i] < 50 && arr[i] % 2 == 1)
            {
                arr[i] = arr[i] * 2 + 1;
                isTrue = false;
            }
        }
        
        if (isTrue)
            break;
        
        answer++;
    }

    return answer;
}