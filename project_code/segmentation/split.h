#include<vector>
#include<string>
#define MAX_32BIT_INT 2147483467

void split(const std::string &str, std::vector<std::string>&result, const std::string &sep, int maxslit);
void split_whitespace(const std::string &str, std::vector<std::string> &result, int maxsplit);