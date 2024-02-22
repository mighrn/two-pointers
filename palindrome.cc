#pragma once

#include <string>
#include <iostream>

using namespace std;

bool isPalindrome(string const & s)
{
    if (s.size() == 0)
    {
        return false;
    }
    
    bool same = true;
    int iterator = 0;

    //no need to check the middle character against itself in an odd-sized string
    while (same && iterator < s.size() / 2)
    {
        // check if the two characters at both ends of the string are the same
        same = s[iterator] == s[s.size() - (1 + iterator)];
        // keep working towards the middle of the string
        iterator++;
    }

    return same;
}
