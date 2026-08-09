#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    long long int Ai[5];
    cin >> T;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 5; j++){
            cin >> Ai[j];
        }
        long long int* k = max_element(Ai, Ai+5);
        long long int maximum = *k;
        long long int temp = Ai[0];
        for(int k = 0; k < 5; k++){
           if(Ai[k] == maximum){
            temp = Ai[k];
            Ai[k] = Ai[4];
            Ai[4] = temp;
            break;
           }
        }
        long long int sum = 0;
        for(int l = 0; l < 5; l++){
            if(l != 4){
                Ai[l] = Ai[l] * -1;
            }
            sum += Ai[l];
        }
        cout << sum << endl;
    }   
     
    return 0;
}
