class Solution {
private:
    vector<vector<int>> ans;
public:
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int> perm;
       vector<bool> visited(nums.size());

       bk(nums, perm, visited);
       return ans;
    }
    void bk(vector<int>& nums, vector<int>& perm, vector<bool>& visited){
        if (perm.size() == nums.size()){
            ans.push_back(perm);
            return;
        }

        for (int i = 0; i< nums.size();i++){
            if (visited[i] == true){
                continue;
            }
            perm.push_back(nums[i]);
            visited[i] = true;
            bk(nums, perm, visited);
            visited[i] = false;
            perm.pop_back();
        }
    }
   
};
