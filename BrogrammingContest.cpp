#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t){
    t--;
    int n;
    cin>>n;
    string s;
    cin>>s;
    char last='0';
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]!=last){
            last=s[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}