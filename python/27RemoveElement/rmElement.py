class Solution:
	# @param    A       a list of integers
	# @param    elem    an integer, value need to be removed
	# @return an integer
	def removeElement(self, A, elem):
		# return self.rmIteration(A, elem)
		return self.rmRecursion(0, A, elem)
		

	def rmIteration(self, A, elem):
		index = list()
		count=0
		for i in range(len(A)):
			if A[i]==elem:
				index.append(i-count)
				count+=1
		for i in range(len(index)):
			del A[index[i]]
		return len(A)

	def rmRecursion(self, start, A, elem):
		for i in range(start, len(A)):
			if A[i] == elem:
				del A[i]
				self.rmRecursion(i, A, elem)
		return len(A)