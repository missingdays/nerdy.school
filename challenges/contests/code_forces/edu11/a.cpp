
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

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(int argc, const char *argv[]){ 
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int i = 0;
    while(i < a.size()-1){
        if(gcd(a[i], a[i+1]) != 1){
            a.insert(a.begin()+i+1, 1);
        }

        i++;
    }

    cout << (a.size() - n) << endl;

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;
}
