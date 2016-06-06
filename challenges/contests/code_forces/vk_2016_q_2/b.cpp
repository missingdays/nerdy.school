
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

int order[26][26];
 
bool cmp(char c1, char c2){
    //cout << c1 << " " << c2 << endl;
    //cout <<  order[c1-'a'][c2-'a'] << " " << order[c2-'a'][c1-'a'] << endl;
    return order[c1-'a'][c2-'a'] < order[c2-'a'][c1-'a'];
}
 
int toInt(char c){
    return c-'a';
}
 
int main(int argc, const char *argv[]){
   
    int c;
    cin >> c;
    vector<char> answ;
 
    for(int i = 0; i < 26; i++){
        memset(order+i, 0, sizeof(order[i]));
    }
 
    map<char, bool> seen;
    map<char, bool> single;
 
    string s;
    for(int i = 0; i < c; i++){
        cin >> s;
        
        if(s.size() == 1){
            single[s[0]] = true;
            continue;
        }
 
        for(int j = 0; j < s.size(); j++){
            seen[s[j]] = true;
            for(int k = j+1; k < s.size(); k++){
                order[toInt(s[j])][toInt(s[k])] = -1;
                order[toInt(s[k])][toInt(s[j])] = 1;
            }
         }
    }
    
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            if(order[i][j] == 1){
                for(int k = 0; k < 26; k++){
                    if(order[j][k] == 1){
                        order[i][k] = 1;   
                    }
                }
            } else if(order[i][j] == -1){
                for(int k = 0; k < 26; k++){
                    if(order[j][k] == -1){
                        order[i][k] = -1;   
                    }
                }
            }
        }
    }
 
    for(int i = 0; i < 26; i++){
        if(seen['a'+i]){
            answ.push_back('a'+i);
        }
    }
 
    sort(answ.begin(), answ.end(), cmp);
    
    for(int i = 0; i < 26; i++){
        if(single['a'+i] && !seen['a'+i]){
            answ.push_back('a'+i);   
        }
    }
 
    for(int i = 0; i < answ.size(); i++){
        cout << answ[i];
    }
    cout << endl;
}
