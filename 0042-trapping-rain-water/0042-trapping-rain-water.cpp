class Solution {
public:
    int trap(vector<int>& A) {
        int l=0;int r=A.size()-1;
        int res=0;
        int ml=0,mr=0;
        while(l<=r)
        {
            if(A[l]<=A[r])
            {
                if(A[l]>=ml)
                    ml=A[l];
                else
                    res+=ml-A[l];
                l++;
            }
            else
            {
                if(A[r]>=mr)
                    mr=A[r];
                else
                    res+=mr-A[r];
                r--;
            }
        }
        
        return res;
    }
};