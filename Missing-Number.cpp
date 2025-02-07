#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
vector<int> v;
cin>>n;
for(int i=0;i<n-1;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int sum=n*(n+1)/2;
for(int i=0;i<n-1;i++){
    sum-=v[i];
}
cout<<sum;
return 0;
}