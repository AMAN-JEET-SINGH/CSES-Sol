#include<bits/stdc++.h>
using namespace std;

int main(){
long long n;
cin>>n;
int ans;
cin>>ans;
n=n%6;
vector<int> shell={0,1,2};
for(int i=1;i<=n;i++){
    if(i%2==0){
        int temp=shell[1];
        shell[1]=shell[2];
        shell[2]=temp;
    }else{
        int temp=shell[0];
        shell[0]=shell[1];
        shell[1]=temp;
    }

}
cout<<shell[ans];
return 0;
}