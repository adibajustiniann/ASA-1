#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    bool left = true;
    int l=0;
    int r=0;
    
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        
        if(arr[i] ==0){
            left = false;
            continue;
        }
        if(left){
            l+=arr[i];
        }
        else{
            r+=arr[i];
        }
    }
    cout << l-r;
    
    return 0;
}