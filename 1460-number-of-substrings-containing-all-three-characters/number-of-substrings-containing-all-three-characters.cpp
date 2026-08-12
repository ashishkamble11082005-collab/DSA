class Solution {
public:
    int numberOfSubstrings(string s) {
        int count  =0;
        vector<int>seen(3,-1);
        int n = s.size();
        for( int i =0; i<s.size(); i++){
            seen[s[i]-'a']=i;
          int min_index = min({seen[0],seen[1],seen[2]});
            if(min_index!=-1){
                count+=min_index+1;
            }
        }
        return count;
    }
};