class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto s : tokens)
        {
            if (s.size() > 1 || isdigit(s[0]))
                st.push(stoi(s));
            else
            {
                long long x2 = st.top();
                st.pop();
                long long x1 = st.top();
                st.pop();
                switch (s[0])
                {
                case '+':
                    x1 += x2;
                    break;
                case '-':
                    x1 -= x2;
                    break;
                case '*':
                    x1 *= x2;
                    break;
                case '/':
                    x1 /= x2;
                    break;
                }
                st.push(x1);
            }
        }
        return st.top();
    }
};