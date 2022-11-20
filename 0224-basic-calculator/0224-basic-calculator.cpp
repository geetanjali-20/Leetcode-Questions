class Solution {
public:
    int calculate(string s) {
        long long num = 0;
        int ans = 0;
        int sign = 1;
        stack <int> operands, operators;
        
        for (char c : s) { 
            if (isdigit(c)) 
            {
                num = num * 10 + c - '0';
            }
            else 
            {
                ans += sign * num;
                num = 0;
                if (c == '+') sign = 1;//addition
                if (c == '-') sign = -1;//subtraction
                if (c == '(')//start of expression
                {
                    operands.push(ans);
                    operators.push(sign);
                    ans = 0;
                    sign = 1;
                }
                if (c == ')' && operators.size())//end of expression
                {
                    ans = operators.top() * ans + operands.top();
                    operators.pop(); operands.pop();
                }
            }
        }
        ans += sign * num;
        return ans;
    }
};