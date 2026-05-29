#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    int mode = 0;
    string answer = "";
    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] == '1')
        {
            mode ^= 1;
            continue;
        }
        else 
        {
            if (mode == 0)
            {
                if (i % 2 == 0)
                    answer += code[i];
            }
            else if (mode == 1)
            {
                if (i % 2 == 1)
                    answer += code[i];
            }
            
        }
        
    }
    if (answer.length() == 0)
        answer = "EMPTY";
    return answer;
}