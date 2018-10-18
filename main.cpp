//
//  main.cpp
//  leetcode algorithm p171-excel-sheet-number
//
//
//

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        int total=0,temp=0;
        char c;
        
        for(int i=0; i<n; ++i)
        {
            c=s[n-1-i];
            temp=(int) c - 64;
            total+=(temp*pow(26,i));
        }
        return total;
        
    }
};

int main() {
    Solution so;
    string s ="ZY";
    // expected result for ZY is Z=26, Y=25 then 26*26^1+25*26^0 = 701
    cout << so.titleToNumber(s) << endl;;
    
    return 0;
}
