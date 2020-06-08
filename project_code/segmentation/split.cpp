#include "split.h"

void split(const std::string &str, std::vector<std::string>&result, const std::string &sep, int maxslit)
{
    result.clear();
    if (maxslit < 0)
        maxslit = MAX_32BIT_INT; //MAX_32BIT_INT是自己定义的一个整数，当maxslit为负数时，对整个字符串做切割处理
    //split函数默认为空格为分隔符
    if (sep.size() == 0)
    {
        //调用函数进行空格切割
        split_whitespace(str, result, maxslit);
        return;
    }
    std::string::size_type i, j, len = str.size(), n = sep.size();
    i = j = 0;
    while (i + n <= len)
    {
        if (str[i] == sep[0] && str.substr(i, n)== sep)
        {
            if (maxslit-- <= 0)
                break;
            result.push_back(str.substr(j, i - j));
            i = j = i + n;
        }
        else
            i++;
    }
 
    //剩下部分
    result.push_back(str.substr(j, len - j));
}

void split_whitespace(const std::string &str, std::vector<std::string> &result, int maxsplit)
{
    std::string::size_type i, j, len = str.size();
    for (i = j = 0; i < len;)
    {
            
        while (i < len&&::isspace(str[i]))
            i++;
        j = i;
 
        
        while (i < len&&!::isspace(str[i]))
            i++;
        if (j < i)
        {
            if (maxsplit-- <= 0)
                break;
            result.push_back(str.substr(j, i - j));
            while (i < len&&::isspace(str[i]))
                i++;
            j = i;
        }
    }
    if (j < len)
    {
        result.push_back(str.substr(j, len - j));
    }
}