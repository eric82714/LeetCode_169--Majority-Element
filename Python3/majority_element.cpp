class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        times = len(nums) // 2
        
        hashmap = {}
        for num in nums:
            if num in hashmap:
                hashmap[num] += 1
                if hashmap[num] > times: return num 
            else:
                hashmap[num] = 1
                if hashmap[num] > times: return num
