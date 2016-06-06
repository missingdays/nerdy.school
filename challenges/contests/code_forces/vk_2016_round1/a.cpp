
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

vector<int> friends;
vector<pii> show;
int n, k, q;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

void find(int bear){
    for(int i = 0; i < show.size(); i++){
        if(show[i].first == bear){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

void insert(int bear){
    int rating = friends[bear-1];

    int j = -1;
    for(int i = 0; i < show.size(); i++){
        if(show[i].second < rating){
            j = i;
        }
    }

    if(show.size() < k){
        show.push_back(pii(bear, rating));
        return;
    }

    if(j == -1){
        return;
    }

    for(int i = show.size()-1; i > j; i--){
        show[i] = show[i-1];
    }

    show[j] = pair<int, int>(bear, rating);
}

int main(int argc, const char *argv[]){ 

    scanf("%d%d%d", &n, &k, &q);

    friends = vector<int>(n);
    show = vector<pii>(0);

    for(int i = 0; i < n; i++){
        scanf("%d", &friends[i]);
    }

    for(int i = 0; i < q; i++){
        int t, f;
        scanf("%d%d", &t, &f);
        if(t == 1){
            insert(f);
            sort(show.begin(), show.end(), cmp);
        } else {
            find(f);
        }
    }
}
