#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(auto &i : arr){
        cin>>i;
    }
    int z=0,i=0,ans=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            z++;
        }
        while(z>k){
            if(arr[i]==0){
                z--;
            }
            i++;
        }
        ans = max (ans , j-i+1);
    }
    cout<<ans<<" "<<endl;
    return 0;
}
