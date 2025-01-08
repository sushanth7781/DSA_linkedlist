class node:
    def __init__(self,data):
        self.data=data
        self.next=None
node1=node(5)
node2=node(4)
node3=node(6)
node4=node(7)
currentnode=node1
while currentnode:
    print(currentnode.data,end='->')
    currentnode=currentnode.next
print('null')