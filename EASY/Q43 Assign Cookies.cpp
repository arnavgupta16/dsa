//https://leetcode.com/problems/assign-cookies/description/?envType=daily-question&envId=2024-01-01

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans=0;
        int n=s.size();
        int k=g.size();
        int a=0,b=0;
        while(a!=n && b!=k){
            if(s[a]>=g[b]){
                ans++;
                a++;
                b++;
            }
            else{a++;}
        }
        return ans;
    }
};
