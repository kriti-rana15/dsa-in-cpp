// APPROACH 1.......TIME COMPLEXITY = O(n^3)
#include<iostream>
using namespace std;
int main(){
    int n=6,t=24;
    // cin>>n>>t;
    int arr[6]={12,3,7,1,6,9};
    // for(int i=0;i<n;i++){
    //     cin>>arr[n];
    // }
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==t){
                    found=true;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}

// APPROACH 2....... TIME COMPLEXITY = O(n^2)
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    vector<int> arr(n);
    for(auto &i : arr)
        cin>>i;
    bool found=false;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int curr=arr[i]+arr[lo]+arr[hi];
            if(curr == t){
                found=true;
                cout<<arr[i]<<" "<<arr[lo]<<" "<<arr[hi]<<endl;
            }
            else if(curr < t){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found){
        return true;
    }
    else{
        return false;
    }
    return 0;
}

