class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        str1 = {}
        str2 = {}
        for c in s:
            str1[c] = str1.get(c, 0) + 1
        for c in t:
            str2[c] = str2.get(c, 0) + 1
        if str1 == str2:
            return True
        return False
