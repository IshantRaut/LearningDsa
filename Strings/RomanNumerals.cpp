#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:

    int romanToInt(string s){
        int res =0;

        //Create map of numerals integer
        unordered_map<char,int> roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        //Iterater throud the string
        for(int i =0;i<s.size()-1;i++){
            if(roman[s[i]] < roman[s[i + 1]]){
                res -= roman[s[i]];
            }else{
                res += roman[s[i]];
            }
        }
        return res + roman[s.back()];
    }
};

/*
Dry run for s = "MCMXCIV"

roman map: I=1, V=5, X=10, L=50, C=100, D=500, M=1000

s = "M C M X C I V"

i=0: s[0]='M'(1000), s[1]='C'(100), 1000 > 100, res += 1000, res=1000
i=1: s[1]='C'(100), s[2]='M'(1000), 100 < 1000, res -= 100, res=900
i=2: s[2]='M'(1000), s[3]='X'(10), 1000 > 10, res += 1000, res=1900
i=3: s[3]='X'(10), s[4]='C'(100), 10 < 100, res -= 10, res=1890
i=4: s[4]='C'(100), s[5]='I'(1), 100 > 1, res += 100, res=1990
i=5: s[5]='I'(1), s[6]='V'(5), 1 < 5, res -= 1, res=1989

Then res + roman[s.back()] = 1989 + roman['V'] = 1989 + 5 = 1994

Output: Integer value: 1994
*/

int main() {
    Solution sol;
    string s = "MCMXCIV"; 
    int result = sol.romanToInt(s);
    
    // Print the result
    cout << "Integer value: " << result << endl;

    return 0;
}
