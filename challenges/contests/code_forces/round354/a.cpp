
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

int main(int argc, const char *argv[]){ 
    
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int pos_min, pos_max;

    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            pos_min = i;
        }
        if(a[i] == n){
            pos_max = i;
        }
    }

    cout << max(pos_min, max(pos_max, max(n - pos_max - 1, n - pos_min -1))) << endl;
}
