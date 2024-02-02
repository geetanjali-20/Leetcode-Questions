class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int> que; // creation a queue...
        for(int i = 1; i < 9; ++i){
            que.push(i); // push it...
        }
        vector<int> ans;
        while(!que.empty()){
            int helper = que.front(); // front ko future k liye rkh lo...
            que.pop(); // pop it...
            if(helper >= low && helper <= high){
                ans.push_back(helper);
            }
            int lastDigit = helper % 10; // last digit...
            if(lastDigit + 1 < 10){
                que.push(helper * 10 + (lastDigit + 1));
            }
        }
        return ans;
    }
};