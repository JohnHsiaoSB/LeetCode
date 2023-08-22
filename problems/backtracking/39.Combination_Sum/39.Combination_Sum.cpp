class Solution {
private:
   vector<vector<int>> m_ans;
public:
    
    void bk(vector<int>& candidates, int target, int sum, vector<int>& comb, int idx){
        if (sum > target){
            return;
        }
        if (sum == target){
            m_ans.push_back(comb);
            return;
        }

        for (int i = idx;i< candidates.size();i++){
            comb.push_back(candidates[i]);
            bk(candidates, target, sum+candidates[i], comb, i);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;

        bk(candidates, target,0,comb, 0);
        return m_ans;
    }

};
