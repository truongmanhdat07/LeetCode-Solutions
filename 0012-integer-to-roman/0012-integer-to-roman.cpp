class Solution {
public:
    string intToRoman(int num) {
        const pair<int, const char*> rules[] = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100,  "C"}, {90,  "XC"}, {50,  "L"}, {40,  "XL"},
            {10,   "X"}, {9,   "IX"}, {5,   "V"}, {4,   "IV"},
            {1,    "I"}
        };

        string res = "";

        for (const auto& r : rules) {
            while (num >= r.first) {
                num -= r.first;
                res += r.second;
            }
        }

        return res;
    }
};