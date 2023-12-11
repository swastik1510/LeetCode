class Solution {
public:
    std::string simplifyPath(std::string path) {
        stack<string> dirs;
        string dir;

        for (int i = 0; i < path.size(); ++i) {
            if (path[i] == '/') {
                continue; // Skip consecutive slashes
            }

            dir.clear();
            while (i < path.size() && path[i] != '/') {
                dir += path[i++];
            }

            if (dir == "..") {
                if (!dirs.empty()) {
                    dirs.pop();
                }
            } else if (dir != "." && !dir.empty()) {
                dirs.push(dir);
            }
        }

        string result;
        while (!dirs.empty()) {
            result = "/" + dirs.top() + result;
            dirs.pop();
        }

        if (result.empty()) {
            return "/";
        } else {
            return result;
        }
    }
};