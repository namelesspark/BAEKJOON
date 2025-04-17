#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    char ch = letter[0];
    for (int i = 0; i < my_string.size(); ++i) {
        if (my_string[i] == ch) {
            my_string.erase(i, 1);
            --i;                  
        }
    }
    return my_string;
}