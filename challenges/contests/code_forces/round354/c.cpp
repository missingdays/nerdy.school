
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

int n, k;
string s;

bool solve(int length){
    int ac = 0, bc = 0;

    for(int i = 0; i < length; i++){
        if(s[i] == 'a'){
            ac++;
        } else {
            bc++;
        }
    }

    if(min(ac, bc) <= k){
        return true;
    }

    for(int i = 0; i < n - length; i++){
        if(s[i] == 'a'){
            ac--;
        } else {
            bc--;
        }

        if(s[i+length] == 'a'){
            ac++;
        } else {
            bc++;
        }

        if(min(ac, bc) <= k){
            return true;
        }
    }

    return false;
}

int main(int argc, const char *argv[]){ 
    
    cin >> n >> k;
    cin >> s;

    int left = 1;
    int right = n+1;

    while(left+1 < right){
        int middle = (left+right)/2;

        if(solve(middle)){
            left = middle;
        } else {
            right = middle;
        }
    }

    cout << left << endl;
}
