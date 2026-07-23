 #include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string dir;

 
        while (getline(ss, dir, '/')) {
       
            if (dir == "" || dir == ".") {
                continue;
            }
            if (dir == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } 
 
            else {
                stack.push_back(dir);
            }
        }
 
        string result = "";
        for (const string& folder : stack) {
            result += "/" + folder;
        }
 
        return result.empty() ? "/" : result;
    }
};