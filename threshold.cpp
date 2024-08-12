#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string str;
    bool aman = true;
    int x, y;
    cout << "";
    cin >> x >> y;
    cin.ignore();
    cout << "";
    getline(cin, str);
    vector<int> nums;
    
    stringstream ss(str);
    
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    for (vector<int>::size_type i=0; i < nums.size(); i++){
        if (nums[i] < x || nums[i] > y){
            aman = false;
            break;
        }
    }
    if (aman == true){
        cout << "aman" << endl;
    }
    else{
        cout << "tidak aman" << endl;
    }
    return 0;
}