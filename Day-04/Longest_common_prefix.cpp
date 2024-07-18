class Solution {
public:
    /*string find(string s,string check){
        int i=0,j=0;
        string str = "";
        while(i<s.length() && j<check.length()){
            if(s[i]==check[j]){
                str+=s[i];
                i++;
                j++;
            }else
            return str;
        }
        return str;
    }*/
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string s1 = strs[0], s2 = strs[n-1];
        string ans = "";
        for(int i=0;i<min(s1.length(),s2.length());i++){
            if(s1[i]!=s2[i]){
                return ans;
            }
            else
            ans+=s1[i];
        }
        return ans;
    }
};