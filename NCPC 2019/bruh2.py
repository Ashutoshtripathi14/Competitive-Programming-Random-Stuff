import sys
sys.setrecursionlimit(3000)
from jzHeap import jzHeap

class Node:
    def __init__(self,id,key,edge,isX,index=9999):
        self.id = id
        self.key = key
        self.edge = edge
        self.isX = isX
        self.index = index

    #reload > sign
    def __gt__(self,other):
        if self.key > other.key:
            return True
        else:
            return False

    def __repr__(self):
        return str("id\t"+str(self.id)+"\nkey\t"+str(self.key)+"\nedge\t"+str(self.edge)+"\nisInX\t"+str(self.isX) + "\nindex\t"+str(self.index))

def computeKey(node):
    costs = []
    edgesOfNode = node.edge
    for edgeNo in edgesOfNode:
        edge = edges[edgeNo]
        end1 = edge[0]
        end2 = edge[1]
        cost = edge[2]
        if nodes[end1].isX or nodes[end2].isX:
            costs.append(cost)
    return min(costs) if costs else 9999

#Initialization
nodeFile = open('edges.txt','r')
lines = nodeFile.readlines()
numberOfNodes = int(lines[0].split()[0])
numberOfEdges = int(lines[0].split()[1])
lines = lines[1:]
edges = []#edges starts from 0
nodes = [None for i in range(numberOfNodes+1)]#nodes starts from 1,to 500. so nodes[500] is OK
lineNumber = 0#Indicate which line id being executed

for line in lines:
    end1 = int(line.split()[0])
    end2 = int(line.split()[1])
    cost = int(line.split()[2])
    edges.append([end1,end2,cost])#write into the edges list
    #if vertex end1/2 not in the nodeList,insert it,else, append the line into the node
    if nodes[end1] == None:
        newNode = Node(end1,9999,[lineNumber],False)
        nodes[end1] = newNode
    else:
        nodes[end1].edge.append(lineNumber)
    if nodes[end2] == None:
        newNode = Node(end2,9999,[lineNumber],False)
        nodes[end2] = newNode
    else:
        nodes[end2].edge.append(lineNumber)
    lineNumber += 1

#Initialize X
X = [nodes[1]]
nodes[1].isX = True
nodes[1].key = 0

#Initialize V-X
V_X = jzHeap()
for node in nodes[2:]:
    node.key = computeKey(node)
    V_X.push(node)

while V_X.heapList:
    minItem = V_X.getMin()
    if len(V_X.heapList) == 1:
        pass
    minItem.isX = True
    X.append(minItem)
    end1s = [edges[edgeIndex][0] for edgeIndex in minItem.edge]
    end2s = [edges[edgeIndex][1] for edgeIndex in minItem.edge]
    ends = end1s + end2s
    for nodeIndex in ends:
        theNode =nodes[nodeIndex]
        if not theNode.isX:
            V_X.deleteItem(theNode.index)
            theNode.key = computeKey(theNode)
            V_X.push(theNode)



print("Overall cost of a minimum spanning tree"+str(sum([x.key for x in X])))
