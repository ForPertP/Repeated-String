#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */


long repeatedString(string s, long n)
{
    long result = 0;
    
    long size = std::count(s.begin(), s.end(), 'a') * (n/s.size());
    long rest = std::count(s.begin(), s.begin() + (n % s.size()), 'a');
    
    return size + rest;
}
