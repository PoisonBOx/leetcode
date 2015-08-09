class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        index=range(len(num))
        ind_num=zip(index,num)
        ind_num.sort(key=lambda x:x[1])
        for i in range(len(num)):
            residue=target-ind_num[i][1]
            result=self.binary_search(ind_num,i+1,len(ind_num),residue)
            if result!=-1:
				if ind_num[i][0]+1<ind_num[result][0]+1:
					tuple_index=(ind_num[i][0]+1, ind_num[result][0]+1)
				else:
					tuple_index=(ind_num[result][0]+1, ind_num[i][0]+1)				
				return tuple_index

    def binary_search(self, ind_num, low, length, key):
        high=length-1
        while low<=high:
            mid=(low+high)/2
            if ind_num[mid][1]==key:
                return mid
            elif ind_num[mid][1]<key:
                low=mid+1
            else:
                high=mid-1
        return -1