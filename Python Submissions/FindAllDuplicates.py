class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        if len(nums) == 1: return []

        arr = set()
        res = []

        for i in nums:
            if i in arr:
                res.append(i)
            else:
                arr.add(i)

        return res

        