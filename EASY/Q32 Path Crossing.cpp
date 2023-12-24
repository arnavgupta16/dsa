//https://leetcode.com/problems/path-crossing/description/

class Solution {
public:
    bool isPathCrossing(string path) {
        vector <pair<int,int>> coordinates;
        coordinates.push_back(make_pair(0,0));
        int x=0;
        int y=0;
        for(int i=0;i<path.length();i++){
            if(path[i]=='N'){
                y++;
                coordinates.push_back(make_pair(x,y));
            }
            if(path[i]=='S'){
                y--;
                coordinates.push_back(make_pair(x,y));
            }
            if(path[i]=='W'){
                x--;
                coordinates.push_back(make_pair(x,y));
            }
            if(path[i]=='E'){
                x++;
                coordinates.push_back(make_pair(x,y));
            }
        }
        for(int i=0;i<coordinates.size();i++){
            for(int j=0;j<coordinates.size();j++){
                if(coordinates[i]==coordinates[j] && i!=j){
                    return true;
                }
            }

        }
        return false;
       
    }
};
