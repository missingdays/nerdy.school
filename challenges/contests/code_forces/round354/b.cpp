
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

double a[11][11];

int main(int argc, const char *argv[]){ 
    
    int n, t;

    cin >> n >> t;

    a[1][1] = t;

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(a[i][j] > 1.0){
                a[i+1][j] += (a[i][j]-1.0)/2;
                a[i+1][j+1] += (a[i][j]-1.0)/2;
            }
        }
    }

    int answ = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(a[i][j] >= 1.0){
                answ += 1;
            }
        }
    }

    cout << answ << endl;
}
