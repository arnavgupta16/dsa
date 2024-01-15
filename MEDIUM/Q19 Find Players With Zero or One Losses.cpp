//https://leetcode.com/problems/find-players-with-zero-or-one-losses/submissions/1146740918/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>winCount;
        unordered_map<int,int>looseCount;
        int n=matches.size();
        for(auto i=0;i<matches.size();i++){
            winCount[matches[i][0]]++;
            looseCount[matches[i][1]]++;
        }
        vector<int>lostOne;
        auto it=looseCount.begin();
        while(it!=looseCount.end()){
            if(it->second==1) lostOne.push_back(it->first);
            it++;
        }
        vector<int>lostZero;
        auto it2=winCount.begin();
        while(it2!=winCount.end()){
            if(it2->second>=1 && looseCount[it2->first]==0) lostZero.push_back(it2->first);
            it2++; 
        }
        sort(lostZero.begin(),lostZero.end());
        sort(lostOne.begin(),lostOne.end());
        vector<vector<int>>ans;
        ans.push_back(lostZero);
        ans.push_back(lostOne);
        return ans;
    }
};
