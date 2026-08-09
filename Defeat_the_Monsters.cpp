#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    int A, B, C;
    while(T--){
        cin >> A >> B >> C;
        while(A != 0 && B != 0 && A >= 1 && B >= 2 ){
            A -= 1;
            B -= 2;
        }
        while(B != 0 && C != 0 && B >= 1 && C >= 3){
            B -= 1;
            C -= 3;
        }
        A == 0 && B == 0 && C == 0 ? cout << "Yes" << endl : cout << "No" << endl;
    }   
    return 0;
}
