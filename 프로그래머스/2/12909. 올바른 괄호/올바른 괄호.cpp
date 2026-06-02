#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<int> st;
    for (const auto& e : s)
    {
        if (e == '(')
            st.push(1);
        else
        {
            if (st.empty())
                return false;
            st.pop();
        }
    }

    if (st.empty())
        return true;
    return false;
}