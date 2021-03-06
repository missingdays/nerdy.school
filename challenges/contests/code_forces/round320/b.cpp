/*
 * b.cpp
 * Copyright (C) 2016 missingdays <missingdays@missingdays>
 *
 * Distributed under terms of the MIT license.
 */

#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
#define ALL(v) v.begin(),v.end()
#define what_is(x) cout<<#x<<" is "<<x<<endl;
#define min3(a,b,c) min(min(a,b),c)
#define max3(a,b,c) max(max(a,b),c)
#define SIZE 1000005
#define MAXN 1000000007
#define PI 3.141592653589793

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int teams[1000001][2];
int used[1000];
int answ[1000];

int main(int argc, const char *argv[]){ 
    std::ios::sync_with_stdio(false);
    
    int n, v;
    cin >> n;

    n *= 2;

    used[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cin >> v;

            teams[v][0] = i;
            teams[v][1] = j;
        }
    }

    for(int i = 1000000; i >= 0; i--){
        if(!used[teams[i][0]] && !used[teams[i][1]]){
            answ[teams[i][0]] = teams[i][1];
            answ[teams[i][1]] = teams[i][0];

            used[teams[i][0]] = 1;
            used[teams[i][1]] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        cout << answ[i] << " ";   
    }
    cout << endl;
}



