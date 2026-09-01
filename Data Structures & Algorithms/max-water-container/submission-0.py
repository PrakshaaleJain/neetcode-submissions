class Solution:
    def maxArea(self, heights: List[int]) -> int:
        low = 0
        high = len(heights) - 1
        res = 0

        while low < high:
            res = max(res, min(heights[low], heights[high])*(high-low))
            if heights[low] < heights[high]:
                low += 1
            elif heights[low] >= heights[high]:
                high -= 1
        return res
