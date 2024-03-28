class Solution(object):
    def mergeAlternately(self, w1, w2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        res = []
        w1 = list(w1)
        w2 = list(w2)

        while w1 and w2:
            res.append(w1[0])
            res.append(w2[0])

            w1.pop(0)
            w2.pop(0)
        
        if w1:
            res.extend(w1)
        
        if w2:
            res.extend(w2)

        return ''.join(res)