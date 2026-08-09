//https://www.hackerrank.com/contests/problemset-batch-9-a-part-2-after-ds/challenges
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        long long int K;
        cin >> N >> K;
        long long int A[N];
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        int flag = 1;
        while(flag == 1){
            flag = 0;
            for(int m = 0; m < N-1; m++){
           if( A[m] + A[m+1] <= K && A[m] > A[m+1]){
            swap(A[m], A[m+1]);
            flag = 1;
           }
        }
        }
        for(int j = 0; j < N; j++){
            cout << A[j] << " ";
        }
        cout << endl;
    }  
    return 0;
}

