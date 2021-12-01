#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

signed main() {
    vector<int> arr;
    while(cin.peek() != EOF){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int total = 0;
    for(int i = 1; i < arr.size(); ++i){
        if(arr[i] > arr[i - 1]) ++total;
    }
    cout << total;
}