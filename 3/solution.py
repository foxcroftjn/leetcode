class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_length = 0
        start_index = 0
        current_index = -1
        while current_index < len(s) - 1:
            found = {}
            for current_index in range(start_index, len(s)):
                if s[current_index] in found:
                    start_index = found[s[current_index]] + 1
                    break
                found[s[current_index]] = current_index
                max_length = max(max_length, len(found))
        return max_length

print(Solution().lengthOfLongestSubstring("abba"))