//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        vector<int>pref;
        pref.push_back(arr[0]);
        for(int i=1;i<n;i++){
            pref.push_back(arr[i]+pref[i-1]);
        }
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            umap[pref[i]]++;
        }
        
        for(auto x : umap){
            if(x.second>1 || x.first ==0){
                return true;
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends