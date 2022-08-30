#include<iostream>
#include<math.h>
#include<stack>
#include<vector>
using namespace std;
    int max_area(vector<int> a){
        stack<int> st;
        int n=a.size();
        int ans=0;
        int i=0;
        a.push_back(0);
        while(i<n){
            while(!st.empty() && a[st.top()]>a[i]){
                int t=st.top();
                int h=a[t];
                st.pop();
                if(st.empty()){
                    ans=max(ans,h*i);
                }
                else{
                    int len=i-st.top()-1;
                    ans=max(ans,h*len);
                }
                
            }
            st.push(i);
                i++;
        }
        return ans;
    }
    int main(){
        vector <int> a ={2,1,5,6,2,3,1};
        cout<<max_area(a);
    return 0;
}
/*#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
int maxAreainHistogram(vector <int> a){
    stack<int>st;
    int mx=INT_MIN;
    int currArea;
    for(int i=0;i<a.size();i++){
        while(!st.empty() && a[st.top()]>a[i]){
            int t=st.pop();
            if(st.empty()){
                currArea=a[t] * i;
            }
            else{
                currArea= a[t] * (i-st.top()-1);
            }
            mx=max(mx,currArea);
        }
        st.push(i);
    }
    while(!st.empty()){
        int t=st.pop();
        if(st.empty()){
            currArea=a[t]* (a.size());
        }
        else{
            currArea=a[t] * (a.size()-(st.top()+1));
        }
        mx=max(mx,currArea);
    }
    return mx;
}
int main(){
    vector<int> a={2,1,5,6,2,3,1};
    cout<<maxAreainHistogram(a);
    return 0;
}*/
