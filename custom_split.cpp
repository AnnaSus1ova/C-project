#include <vector>
#include <string>
#include "custom_split.h"

std::vector<std::string> customSplit(const std::string& str, const char* separator) {
    int startIndex = 0;
    std::vector<std::string> result;

    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == separator[0] || i == str.size()) {
            std::string temp = str.substr(startIndex, i - startIndex);
            if (!temp.empty())
                result.push_back(temp);
            startIndex = i + 1;
        }
    }
    return result;
}
