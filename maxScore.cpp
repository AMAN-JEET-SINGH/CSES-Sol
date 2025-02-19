#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int> &A) {
    int score = 0;
    sort(A.begin(), A.end());
    
    while (A.size() > 1) {
        int x = A[0];
        int y = A.back();
        score += abs(x - y);
        
        A.erase(A.begin());
        A.pop_back();
        sort(A.begin(), A.end());
        for(int i=0;i<A.size();i++){
        }
    }

    return score;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    cout << maxScore(A) << endl;
    return 0;
}