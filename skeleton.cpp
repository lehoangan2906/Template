// problem statement: 

/**
 *      author: darkksilver
 *      created: 
**/

#include <bits/stdc++.h>

using namespace std;

inline int gcd(int a, int b){
    int r;
    while (b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);


    return 0;
}
