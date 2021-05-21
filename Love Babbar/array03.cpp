#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        priority_queue<int,vector<int>,greater<int>> gp;
        vector<int> v;
        int val=k;
        int i=0;
        while(val>1){
            gp.push(arr[i]);
            i++;
            val--;
            v.push_back(-1);
        }
        gp.push(arr[i]);
        int flag=0;
        for(;i<n;i++)
        {
            if(arr[i]>gp.top() && flag == 1){
                gp.pop();
                gp.push(arr[i]);
            }
        v.push_back(gp.top());
        flag=1;
        }
        return v;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
