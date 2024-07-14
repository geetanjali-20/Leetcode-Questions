class Solution {
public:
    int memo(int n, unordered_map<int,int>& memo_map){
        if(n<=1) return 1;
        if(memo_map.find(n)!=memo_map.end())
            return memo_map[n];
        return memo_map[n]=memo(n-1,memo_map)+memo(n-2,memo_map);
        
    }
    int climbStairs(int n) {
        unordered_map<int,int> memo_map;
        return memo(n,memo_map);
        

    }
};