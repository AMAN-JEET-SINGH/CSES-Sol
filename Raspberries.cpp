#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t){
    int n;
    int k;
    cin>>n>>k;
    int opp=k;
    vector<int> v;
    int count=0;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        if(e%k==0){
            opp=0;
        }else{
            if(k==4&&opp!=0){
                if(n!=1){
                if(e%2==0){
                    count++;
                }
                if(count==2){
                    opp=0;
                }else if(count==1){
                    opp=1;
                }else{
                    int rem=k-(e%k);
                    if(rem==1)
                    opp= min(opp,rem);
                    else{
                        opp= min(opp,2);
                    }
                }}
                if(n==1&&e%4==1){
                    opp=k-(e%k);
                }
            }
            int rem=k-(e%k);
            opp= min(opp,rem);
        }
        v.push_back(e);
    }
    cout<<opp<<endl;
    t--;
}
return 0;
}