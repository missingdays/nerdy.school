
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define what_is(x) cout<<#x<<" is "<<x<<endl;
#define MAXN 1000000007
#define PI 3.141592653589793

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

ll pow2(ll pow){
    return 1 << pow;
}

int main(int argc, const char *argv[]){ 
    int n;
    int k;
    scanf("%d%d", &n, &k);
    vector<ll> coef(n);

    for(int i = 0; i < n; i++){
        scanf("%d", &coef[i]);
    }

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    ll s = 0;
    cout << s << endl;

}
