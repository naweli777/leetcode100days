class Solution {
public:
       int subarraySum(vector<int>& arr, int k) {
       //LOGIC: we use presum technique here.
	int sum = 0;
	int count = 0;
	map<int, int> mp; //sum,freq.
	mp[0] = 1; //think, very imp
	for (int ele : arr) {
		sum += ele;
		if (mp.find(sum - k) != mp.end()) { //found
			//means, sum - k exist krta h, we found subarray having k sum
			count += mp[sum - k];
		}
		mp[sum]++;
	}
	return count;
    }
};