// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        unordered_set<char>st;
        string result;
        for(char c:s){
            if(st.find(c)==st.end()){
                result+=c;
                st.insert(c);
            }
        }
        return result;
    }
};