//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        unordered_map<int,int> temp;
        for(int i=0; i<size;i++){
            temp[a[i]]++;
        }
        int count=0;
        for(auto item: temp){
            if(item.second > size/2){
                count=1;
                return item.first;
                break;
            }
        }
        if(count==0){
            return -1;
        }
        // your code here
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends