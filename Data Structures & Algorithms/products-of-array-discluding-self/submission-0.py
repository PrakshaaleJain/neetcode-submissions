class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product_array = [1]*len(nums)
        for i in range(1, len(nums)):
            product_array[i] = product_array[i-1]*nums[i-1]
        
        product = 1
        for i in range(len(nums)-1, -1, -1):
            product_array[i] = product_array[i]*product
            product *= nums[i]
            
        return product_array
