#include <string>
#include <vector>

using namespace std;

void VectorInit(const int n, const int a, const int b, const int c, const vector<int>& num_list, vector<int>& ans)
{
    if (n == 1)
    {
        for (int i = 0; i < b + 1; i++)
            ans.emplace_back(num_list[i]);
    }
    
    else if (n == 2)
    {
        for (int i = a; i < num_list.size(); i++)
            ans.emplace_back(num_list[i]);
    }
    
    else if (n == 3)
    {
        for (int i = a; i < b + 1; i++)
            ans.emplace_back(num_list[i]);
    }
    else
    {
        for (int i = a; i < b + 1; i += c)
            ans.emplace_back(num_list[i]);
    }
}

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    VectorInit(n, a, b, c, num_list, answer);
    return answer;
}