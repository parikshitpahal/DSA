
class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> ans;
        string tmp = "";
        bool inBlock = false;

        for (const string& line : source) {
            int n = line.size();
            for (int i = 0; i < n; ++i) {
                if (inBlock) {
  
                    if (i + 1 < n && line[i] == '*' && line[i + 1] == '/') {
                        inBlock = false;
                        i++; 
                    }
                } else {

                    if (i + 1 < n && line[i] == '/' && line[i + 1] == '/') {
                        break;
                    }
                    
                    else if (i + 1 < n && line[i] == '/' && line[i + 1] == '*') {
                        inBlock = true;
                        i++;
                    } 

                    else {
                        tmp += line[i];
                    }
                }
            }

          
            if (!inBlock && !tmp.empty()) {
                ans.push_back(tmp);
                tmp = ""; 
            }
        }

        return ans;
    }
};