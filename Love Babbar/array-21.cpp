#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> m;
            vector<int> v;
            m[A[0]]++;
            for(int i=1;i<n1;i++){
                if(A[i-1]!=A[i])
                    m[A[i]]++;
            }
            m[B[0]]++;
            for(int i=1;i<n2;i++){
                if(B[i-1]!=B[i])
                    m[B[i]]++;
            }
            m[C[0]]++;
            if(m[C[0]]==3)
                v.push_back(C[0]);
            for(int i=1;i<n3;i++){
                if(C[i-1]!=C[i]){
                    m[C[i]]++;
                    if(m[C[i]]==3)
                    v.push_back(C[i]);
                }
            }
            return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
