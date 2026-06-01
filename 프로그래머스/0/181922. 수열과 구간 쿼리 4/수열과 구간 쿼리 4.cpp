#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (int x = 0; x < queries.size(); x++)
    {
        int s = queries[x][0];
        int e = queries[x][1];
        int k = queries[x][2];
        
        for (int i = s; i <= e; i++)
        {
            if (i % k == 0)
                arr[i]++;
        }
    }
    
    
    for(const auto& e : arr)
        answer.emplace_back(e);
    
    
    
    return answer;
}