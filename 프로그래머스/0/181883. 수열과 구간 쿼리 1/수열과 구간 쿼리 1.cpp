#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int i = 0; i < queries.size(); i++)
    {
        int start = queries[i][0];
        int end = queries[i][1];
        for (int x = start; x <= end; x++)
            arr[x] += 1;
    }
    return arr;
}