#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for (auto& val : arr) 
    {
        bool cond1 = (val >= 50 && (val & 1) == 0);
        bool cond2 = (val < 50 && (val & 1) != 0);
    

    val = (val * !cond1 * !cond2) + ((val >> 1) * cond1) + ((val << 1) * cond2);
    }
    
    return arr;
}