class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        //PUSHINNG ALL ELEMENTS INTO SET
        set<int> temp;
        for(int i:score)temp.insert(i);

        //STORING RANKS FOR EACH ELEMENT
        map<int,int> ranks;
        int i=score.size();
        for(int curr:temp)ranks[curr]=i--;

        //FORMULATING ANSWER
        vector<string> ans;
        vector<string>delta={"Gold Medal" , "Silver Medal" , "Bronze Medal"};
        for(int i:score){
            if(ranks[i]>=1 and ranks[i]<=3)ans.push_back(delta[ranks[i]-1]);
            else {
                ans.push_back(to_string(ranks[i]));

            }
        }

        return ans;
    }
};