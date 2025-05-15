
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length()) return "";

        unordered_map<char, int> targetFreq;
        unordered_map<char, int> windowFreq;

        // Count frequency of chars in t
        for (char ch : t) {
            targetFreq[ch]++;
        }

        int required = targetFreq.size(); // Number of unique chars to match
        int formed = 0;                   // How many unique chars matched required freq so far
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int startIndex = 0;

        while (right < s.length()) {
            char ch = s[right];
            windowFreq[ch]++;

            // If char is part of t and windowFreq matches targetFreq, increment formed
            if (targetFreq.count(ch) && windowFreq[ch] == targetFreq[ch]) {
                formed++;
            }

            // Try to contract window when all chars matched
            while (left <= right && formed == required) {
                // Update minimum window
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    startIndex = left;
                }

                // Remove from window from left side
                char leftChar = s[left];
                windowFreq[leftChar]--;
                if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formed--;
                }
                left++;
            }
            right++;
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIndex, minLen);
    }
};