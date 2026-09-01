class Solution:
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False
        listS = list(s)
        listT = list(t)
        listS.sort()
        listT.sort()
        for i in range(len(listS)):
            if listS[i] != listT[i]:
                return False
        return True
        