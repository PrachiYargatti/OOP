class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)
        smallest_stable_index = float('inf')
        for i in range(n):
            left_max = max(nums[:i+1])
            right_min = min(nums[i:])
            instability_score = left_max - right_min
            if(instability_score <= k):
                smallest_stable_index = min(smallest_stable_index, i)

        return smallest_stable_index if smallest_stable_index != float('inf') else -1
