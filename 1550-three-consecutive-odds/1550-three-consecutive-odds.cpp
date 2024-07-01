class Solution {
public:
    bool isOdd(int num){
        if(num%2!=0){
            return true;
        }
        return false;
    }
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans=0;
        for (auto i : arr)
        {
            if(isOdd(i))
            {
                ans++;
                if(ans>2)
                {
                    return true;
                }
            }
            else
            {
                ans=0;
            }
        }
        return false;
    }
};