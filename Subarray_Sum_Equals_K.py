class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        presum = {0:1}
        count = 0
        psum = 0
        for i in nums:
            psum += i
            if psum - k in presum:
                count += presum[psum-k]
            if psum in presum:
                presum[psum] += 1
            else:
                presum[psum] = 1
            # print(presum)
        return count