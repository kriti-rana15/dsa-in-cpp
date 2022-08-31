//...............APPROACH 1................

#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];              //Take input as per your choice.
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    
     int left[n];
    int right[n]; 
      
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(min(left[i],right[i])-arr[i]);
    }
    cout<<ans;
    return 0;
}

//...............APPROACH 2................

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int rainwater(vector<int> a){
    stack<int> st;
    int ans=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()<a[i]]){

            int curr=st.top();
            st.pop();

            if(st.empty()){
                break;
            }
            int diff =i-st.top()-1;
            ans += (min(a[st.top()],a[i])-a[curr]) * diff;
        }
        st.push(i);
    }
    return ans;
}
int main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainwater(a);
    return 0;
}