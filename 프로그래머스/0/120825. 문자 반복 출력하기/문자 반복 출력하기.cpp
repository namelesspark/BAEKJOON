#include <string>
using namespace std;

string repeat(const string& my_string, int n) {
    string rpt_str;
    rpt_str.reserve(my_string.size() * n);

    for (size_t i = 0; i < my_string.size(); ++i)   {
        rpt_str.append(n, my_string[i]);
    }
    return rpt_str;
}

string solution(string my_string, int n) {
    return repeat(my_string, n);
}
