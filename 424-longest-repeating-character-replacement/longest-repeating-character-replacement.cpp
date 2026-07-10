class Solution {
public:
    int characterReplacement(string s, int k) {
       

        unordered_map<char, int> freq;

        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            // Step 1: Expand window
            freq[s[right]]++;

            // Step 2: Update maximum frequency
            maxFreq = max(maxFreq, freq[s[right]]);

            // Step 3: Shrink if invalid
            while ((right - left + 1) - maxFreq > k) {

                freq[s[left]]--;
                left++;
            }

            // Step 4: Store answer
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
    
