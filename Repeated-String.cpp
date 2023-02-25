long repeatedString(string s, long n)
{
    long result = 0;
    long size = std::count(s.begin(), s.end(), 'a') * (n/s.size());
    long rest = std::count(s.begin(), s.begin() + (n % s.size()), 'a');
    
    return size + rest;
}
