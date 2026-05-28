#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string solution(string str1, string str2) {
    string ans = "";
    
    int len = str1.length();
    
    ans.reserve(len * 2);
    for (int i = 0; i < len; i++)
    {
        ans += str1[i];
        ans += str2[i];
    }

    
    return ans;
}