#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> hash(2,0);
        for(int i=0;i<s.size();i++){
            hash[s[i]-'0']++;
        }
        int n1=hash[0];
        int n2=hash[1];
        if(n1==n2){
            cout<<0<<endl;
            continue;
        }
        int cost=0;
        if(n1>n2){
            cost=n1-n2;
            hash[0]=n2;
        }else{
            cost=n2-n1;
            hash[1]=n1;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(hash[0]==0){
                    break;
                }
                hash[0]--;
                
            }else{
                if(hash[1]==0){
                    break;
                }
                hash[1]--;
            }
        }
        cout<<cost+hash[0]+hash[1]<<endl;

    }
return 0;
}