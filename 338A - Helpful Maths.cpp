#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void tokenize(std::string const &str, const char delim,
              std::vector<std::string> &out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

int main()
{
    std::string s;
    std::cin >> s;
    const char delim = '+';

    std::vector<std::string> vec;
    tokenize(s, delim, vec);
    std::string ns;
    sort(vec.begin(), vec.end());
    for (auto &s : vec)
    {

        ns += s + "+";
    }
    std::cout << ns.substr(0, ns.size() - 1) << std::endl;

    return 0;
}