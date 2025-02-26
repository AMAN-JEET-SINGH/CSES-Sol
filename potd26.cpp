#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-3,-5,-3,-2,-6,3,10,-10,-8,-3,0,10,3,-5,8,7,-9,-9,5,-8};
    int sum=0;
    int maxsum=INT_MIN;
    int minsum=INT_MAX;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=nums[i];
        maxsum=max(maxsum,sum);
        if(sum<=0){
            sum=0;
        }
    }
    for(int i=0;i<n;i++){
        sum+=nums[i];
        cout<<sum<<" ";
        minsum=min(minsum,sum);
        if(sum>=0){
            sum=0;
        }
    }
    cout<<endl<<maxsum<<minsum;
return 0;
}