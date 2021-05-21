#include <bits/stdc++.h>
using namespace std;


void segregateElements(int [], int );

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
// } Driver Code Ends

void segregateElements(int arr[],int n)
{
 
    int temp[n]; 
    int j = 0; 
    for (int i = 0; i < n ; i++) 
        if (arr[i] >= 0 ) 
            temp[j++] = arr[i]; 
  
    if (j == n || j == 0) 
        return; 
  
    for (int i = 0 ; i < n ; i++) 
        if (arr[i] < 0) 
            temp[j++] = arr[i]; 
  
    memcpy(arr, temp, sizeof(temp));
}
