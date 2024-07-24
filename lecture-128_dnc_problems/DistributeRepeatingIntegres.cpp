/*

class Solution {
public:
    bool solve(vector<int> &counts,vector<int>& quantity, int index){
        if(index == quantity.size()){
            return true;
        }
        for(int i=0; i<counts.size(); i++){
            if(counts[i] >= quantity[index]){
                counts[i] -= quantity[index];
                if(solve(counts, quantity, index+1)){
                    return true;
                }
                counts[i] += quantity[index];
            }
        }
        return false;
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int> countMap;
        for(auto i: nums){
            countMap[i]++;
        }
        vector<int> counts;
        for(auto i:countMap){
            counts.push_back(i.second);
        }
        sort(quantity.rbegin(), quantity.rend() );
        return solve(counts, quantity, 0);
    }
};
*/