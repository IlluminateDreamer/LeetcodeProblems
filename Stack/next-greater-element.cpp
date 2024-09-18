class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> s;
        for (int num : nums2) {
            while (!s.empty() && num > s.top()) {
                nextGreaterMap[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        vector<int> result(nums1.size());
        for (int i = 0; i < nums1.size(); ++i) {
            result[i] = nextGreaterMap.count(nums1[i]) ? nextGreaterMap[nums1[i]] : -1;
        }
        return result;
    }
};
