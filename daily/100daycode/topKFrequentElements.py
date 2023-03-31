class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        res = {}
        for i in nums:
            if res.get(i):
                res[i] += 1;
            else:
                res[i] = 1
        res = sorted(res.items(), key = lambda x:x[1], reverse = True)
        res = res[0:k]
        r = []
        for i in res:
            r.append(i[0])
        return r
