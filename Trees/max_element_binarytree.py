# Programme to find the maximum element in binary tree

maxData = float("-infinity")
print(maxData)

# Boiler plate for binary tree

class BinaryTreeNode:
	def__init__(self,data):
		self.data = data
		self.left = None
		self.right = None
	# set data
	def setData(self,data):
		self.data = data

	def getData(self):
		return self.data

	def getLeft(self):
		return self.left

	def getRight(self):
		return self.right




# special function for finding max element
def findMaxRecursive(root):
	global maxData
	if not root:
		return maxData

	if root.getData() > maxData:
		maxData = root.getData()


	findMaxRecursive(root.getLeft())
	findMaxRecursive(root.getRight())
	return maxData