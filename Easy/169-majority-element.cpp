#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

using vi = vector<int>;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> freq;

    // Calculate frequency of each element
    for (auto& x: nums) freq[x]++;


    int maxi = INT_MIN;
    int ans;
    // Find the element with maximum frequency
    for (auto x: freq) {
        if (x.second > maxi) {
            maxi = x.second;
            ans = x.first;
        }
    }
    return ans;
}


int main(){
    
    vi nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl; // 2
    return 0;

}
    

