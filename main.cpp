#include <cstdio>
#include <cctype>
#include <cstring>
#include <string>
#include <iostream>

int cnt = 0;

std::string subPrefix(std::string s, int len)
{
    std::string res = "";
    for (int i = 0; i < len; ++i)   
        res += std::string(1, s[i]);
    return res;
}

bool isNum(std::string s)
{
    for (auto i : s)
        if (!isdigit(i))
            return false;
    return true;
}

void printColor(const std::string &s, const std::string &color, std::string &rgb)
{
    if (color == "Yellow:")
        rgb = "f1c40f";
    if (color == "Green:")
        rgb = "5eb95e";
    if (color == "Blue:")
        rgb = "3498db";
    if (color == "Purple:")
        rgb = "9b59b6";
    if (color == "Bluedark:")
        rgb = "34495e";
    if (color == "Gray:")
        rgb = "bbbbbb";
    printf("\n\n![%s](https://img.shields.io/badge/%s-%s-%s.svg)\n\n> ", s.c_str(), s.c_str(), color.substr(0, color.size() - 1).c_str(), rgb.c_str());
    cnt = 0;
    printf("|  |  |  |  |  |  |  |  |  |  |\n| :----------- | :----------- | :----------- | :----------- | :----------- | :----------- | :----------- | :----------- | :----------- | :----------- |\n| ");
}

int main()
{
#ifdef yyfLocal 
    //freopen("data.txt", "r", stdin);
    //freopen("result.txt", "w", stdout);
    freopen("testdata.in", "r", stdin);
    freopen("testdata.out", "w", stdout);
#endif
    std::string s, rgb, color;
    while (std::cin >> s)
    {
        if (isNum(s))
        {
            std::cin >> color;
            printColor(s, color, rgb);
            continue;
        }
        int preLen = 1;
        if (s[0] == 'U')
            preLen = 3;
        if (s[0] == 'C' || s[0] == 'S' || s[0] == 'A')
            preLen = 2;
        const char *prefix = subPrefix(s, preLen).c_str();
        const char *suffix = s.substr(preLen).c_str();
        printf("[![%s](https://img.shields.io/badge/%s-%s.svg?label=%s&style=plastic&longcache=true)](https://www.luogu.org/problemnew/show/%s) $\\ $|", s.c_str(), suffix, rgb.c_str(), prefix, s.c_str());
        ++cnt;
        if (cnt % 8 == 0) // 一行最多几个 badge
            printf("\n| ");
    }
}
