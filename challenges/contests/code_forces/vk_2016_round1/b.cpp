
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
    
    int n, d, h;
    int total = 0;
    scanf("%d%d%d", &n, &d, &h);

    if(d == 1){
        if(n == 2 && h == 1){
            cout << "1 2" << endl;
        } else {
            cout << -1 << endl;
        }

        return 0;
    }

    if(d == 2){
        if(h == 1 && n > 2){
            for(int i = 0; i < n-1; i++){
                cout << 1 << " " << (i+2) << endl;
            }
        } else if(h == 2 && n == 3){
            cout << "1 2" << endl;
            cout << "2 3" << endl;
        } else if(h == 2 && n == 4){
            cout << "1 2" << endl;
            cout << "2 3" << endl;
            cout << "2 4" << endl;
        } else {
            cout << -1 << endl;
        }

        return 0;
    }

    if(h*2 < d){
        cout << -1 << endl;
        return 0;
    }

    if(h > d){
        cout << -1 << endl;
        return 0;
    }

    if(n-1 < d){
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < h; i++){
        total++;
        cout << (i+1) << " " << (i+2) << endl;
    }

    if(d > h){
        cout << 1 << " " << h+2 << endl;
        total++;
        for(int i = h+1; i < d; i++){
            cout << (i+1) << " " << (i+2) << endl;
            total++;
        }
    }

    if(d == h){
        for(int i = n-1; i > total; i--){
            cout << 2 << " " << (i+1) << endl;
        }
    } else {
        for(int i = n-1; i > total; i--){
            cout << 1 << " " << (i+1) << endl;
        }
    }
}
