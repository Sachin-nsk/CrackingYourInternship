/*
https://leetcode.com/problems/find-the-duplicate-number/
*/

/*
Notes: 
1.Unordered Map 
2. Slow and fast pointer --> Using linked list concept
3. Binary search 
 i.Count the number of elements that are less than or      equal to the mid.
ii.If the count the greater than mid than duplicate is in left side orelse right side.
*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int,int> map;
        for(auto i:nums){
            if(map.find(i)==map.end()) map[i]=1;
            else return i;
        }
        return 0;
    }
};