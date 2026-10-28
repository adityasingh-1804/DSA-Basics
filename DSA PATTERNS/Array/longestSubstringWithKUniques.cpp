#include<iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    string s = "aabacbebebe";
    int k = 3;
    int high = 0; 
    int low = 0; 
    int res = INT_MIN;
    int n = s.size();
    unordered_map<char, int> f;
    for(high = 0; high < n; high++){
        f[s[high]]++;
        while(f.size()>k){
            f[s[low]]--;
             if (f[s[low]] == 0) {
                f.erase(s[low]);
            }
            low++;
        }
        if(f.size()==k){
            int len = high-low+1;
            res =max(len,res);
        }


        

    }
    cout<< res;

    


    
}


