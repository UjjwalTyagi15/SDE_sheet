// start from end and ignore any space in the starting .
// if u find words then keep a pointer at the end of that word and one at the start and add it to ans with a space at end 
// after iteration delete the extra space at end ;



class Solution {
public:
    string reverseWords(string s) {
        string ans;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ')continue;
            int j=i;
            while(i>=0 && s[i]!=' '){
                i--;
            }
            ans+=s.substr(i+1,j-i)+" ";

        }
        ans.pop_back();
        return ans;
    }
};