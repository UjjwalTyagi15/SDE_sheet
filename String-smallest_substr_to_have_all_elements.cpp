class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m1,m2;
        string ans=s;
        string temp;
        for(int i=0;i<t.size();i++)
        m2[t[i]]++;

        int j=0;
        int i=0;
        int count=0;
        int n=t.size();
        while(j<=i && i<s.size()){
            // aquire
            if(count<n){
                m1[s[i]]++;
                if(m1[s[i]]<=m2[s[i]])count++;
                i++;
                continue;
            }

            if(count>=n){
                if((i-j)<ans.size())
                    ans=s.substr(j,i-j+1);
                m1[s[j]]--;
                if(m1[s[j]]<m2[s[j]])count--;
                j++;
                }

        }
        while(j<=i && count>=n){
            if((i-j)<ans.size())
                    ans=s.substr(j,i-j+1);
                m1[s[j]]--;
                if(m1[s[j]]<m2[s[j]])count--;
                j++;
        }
        return ans ;



    }
};