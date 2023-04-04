class py_solution:
 def threeSum(self, nums):
        nums, result, i = sorted(nums), [], 0
        temp=[]
        lst1=[]
        lst2=[]
        n = len(nums)
        for i in range(0, n-2):
            for j in range(i+1, n-1):
                for k in range(j+1, n):
                    if (nums[i] + nums[j] + nums[k] == 0):
                        temp.append(nums[i])
                        temp.append(nums[j])
                        temp.append(nums[k])
                        
        for i in range(0,len(temp)):
            if(i<3):
                lst1.append(temp[i])
            else:
                lst2.append(temp[i])
        result.append(lst1)
        result.append(lst2)
        return result
NumSum=py_solution()
print(NumSum.threeSum([-25, -10, -7, -3, 2, 4, 8, 10]))