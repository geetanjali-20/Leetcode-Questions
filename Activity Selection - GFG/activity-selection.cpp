//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        
    
        vector<pair<int,int>> v;
         for(int i=0;i<n;i++){
             v.push_back(make_pair(end[i],start[i]));
         }
         sort(v.begin(),v.end());
         int c=1;
         int i=1,j=0;
         while(i<n && j<n){
             if(v[j].first<v[i].second){
                 j=i;
                 i++;
                 c++;
             }
             else{
                 i++;
             }
         }
         return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends