#include <iostream>
#include <algorithm>
#include <string>

#include "cast.hpp"

int check_error(std::string str)
{
    size_t i = 0;
    if (str.length() == 1)
        return 2;
    while (i < str.length())
    {
        if ((str[i] >= 48 && str[i] <= 57) || str[i] == '.' || str[i] == 102)
        {
            if (str[i] == '.' && str[i + 1] && (str[i + 1] < 48 || str[i + 1] > 57))
                return -1;
            if (str[i] == 'f' && str[i + 1])
                return -1;
            i++;
        }
        else
            return -1;
    }
    if (std::count(str.begin(), str.end(), '.') > 1 || std::count(str.begin(), str.end(), 'f') > 1  || (std::count(str.begin(), str.end(), '.') == 0 && std::count(str.begin(), str.end(), 'f') > 0))
        return -1;
    else
        return 1;
}


int main(int ac, char **argv)
{
    try
    {
        std::string str;
        if (ac == 2)
            str = argv[1];
        if (ac == 2 && check_error(str) > 0)
        {
            Caster cs;
            if (check_error(str) == 2)
                cs.setArg((char)str[0]);
            else if (check_error(str) == 1)
                cs.setArg(str);
            std::cout << cs;
        }
        else
            std::cout << "something wrrong!" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}