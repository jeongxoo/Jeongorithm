# -*- coding: utf-8 -*-
"""8-Puzzle(A*)

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1on6UuG7z6oYpm-41-QNybOBtZtv2xGqe
"""

#8-puzzle A*(에이스타 알고리즘)
import collections
import copy
import time

goal = [1,2,3,
        8,0,4,
        7,6,5]

puzzle = [2,8,3,
          1,6,4,
          7,0,5]

op = ["up", "down", "right", "left"]

#---------- display ----------#
def display(puzzle):
    print(" -----------")
    print("| %d | %d | %d |" %(puzzle[0], puzzle[1], puzzle[2]))
    print(" -----------")
    print("| %d | %d | %d |" %(puzzle[3], puzzle[4], puzzle[5]))
    print(" -----------")
    print("| %d | %d | %d |" %(puzzle[6], puzzle[7], puzzle[8]))
    print(" -----------")

#---------- checkPosition ----------#
#0의 위치를 체크하는 함수
def checkPosition(xNode):
    i = xNode.index(0)  #0의 인덱스를 반
    return i

print("Goal")
display(goal)

print("Root")
display(puzzle)

#노드 클래스
class Node:
    def __init__(self, state):
        self.state = state

class Best: #가장 효율이 좋은 노드 목록과 점수를 저장해두기 위한 클래스
  score = 0
  node = []

#---------- createNode ----------#
#newNode생성 함수
def createNode(stack, visit, newNode, i, oper):  
    if oper == "up":
        if (i >= 3): 
            newNode[i] = newNode[i - 3]
            newNode[i - 3] = 0

            if newNode in visit or newNode in stack: 
                return None 
            else:
                return newNode
            
            
    if oper == "down":
        if (i < 6): # 0의 위치가 6미만일 경우 내릴 수 있기 때문에 
            newNode[i] = newNode[i + 3] # 3을 더해줌
            newNode[i + 3] = 0

            if newNode in visit or newNode in stack:
                return None
            else:
                return newNode

    if oper == "right": 
        if ((i%3) < 2): 
            newNode[i] = newNode[i + 1] # 1더해줌
            newNode[i + 1] = 0

            if newNode in visit or newNode in stack:
                return None
            else:
                return newNode
            

    if oper == "left":
        if ((i%3) > 0): 
            newNode[i] = newNode[i - 1] 
            newNode[i - 1] = 0

            if newNode in visit or newNode in stack:
                return None
            else:
                return newNode

#---------- A* ----------#
#A-STAR 알고리즘
def a_star(puzzle):
    visit = []                          #방문
    stack = collections.deque([puzzle]) #방문X
    move = 0 # 현재가 몇번째 이동한 것인지

    Best.node.append(puzzle) # 비어있는 베스트 클래스의 노드 변수에 초기 값 퍼즐을 넣어줌
    
    print("Goal : ", goal)
    display(goal)
    print("Start : ",Best.node)
    display(puzzle)

    while stack is not Node: 
        print("\n======================================")
        print("Best.Node 목록 : ", Best.node)
        move += 1 #g값증가

        xNode = Best.node.pop()             #stack.pop > 후입선출DFS스타일

        print("현재 노드 출력 : ", xNode, "\n")
        display(xNode)                  #현재 상태 출력

        if xNode == goal:               
            return print("\nSUCESS!")

        else:                           
            visit.append(xNode)
            print("현재 노드가 오답이므로 방문 리스트에 추가")         
            print("지금까지 방문한 노드 : ", visit)    
            index = checkPosition(xNode) 
            print("현재 노드에서 '0'의 위치 :", index)
            print("\n-------새로운 노드 생성--------")

            for oper in op:
                newNode = createNode(Best.node, visit, copy.deepcopy(xNode), index, oper)
                print("\n방향 : ", oper ,"\n새로 생성된 노드 : ", newNode)
                point = 0
                wrong = 0

                if newNode is not None:  
                  for i in goal:
                    if goal[i] != newNode[i]:  
                      wrong += 1
                  
                  point = move + wrong # 새로 생성되는 노드의 F값 계산 결과
                  print("점수 : ", point)

                  if Best.score > point: #저장된 최고 효율점수보다 더 좋은 F값일 경우
                    Best.score = point # 최고 효율점수를 갱신해주고
                    Best.node.append(newNode) # 최고효율노드 목록에 추가
                    print("이전보다 높은 효율을 가진 노드이므로 BEST.NODE 목록에 추가")
                    print("저장된 BEST.NODE 목록 : ", Best.node)
                    print("현재 가장 효율적인 점수 : ", Best.score)
                  elif Best.score == point: # 저장된 점수와 같을 경우
                    Best.node.append(newNode) # 최고효율노드 목록에 추가
                    print("이전과 같은 효율을 가진 노드이므로 BEST.NODE 목록에 추가")
                    print("저장된 BEST.NODE 목록 : ", Best.node)
                    print("현재 가장 효율적인 점수 : ", Best.score)
                  else: # 저장된 점수보다 안좋은 F값일 경우
                    print("저장된 점수보다 낮은 효율을 가진 노드이므로 무시")
                    if Best.node == []: #그렇지만 만일 최고효율노드 목록에 비어있다면
                      Best.score = point # 점수가 더 안좋더라도 갱신시켜주고
                      Best.node.append(newNode) # 목록에 추가
                      print("그러나 BEST.NODE 목록이 비어있으므로 점수에 상관없이 목록에 추가")
                      print("저장된 BEST.NODE 목록 : ", Best.node)
                      print("현재 가장 효율적인 점수 : ", Best.score)

#---------- main ----------#
node = Node(puzzle)

print("\n*A_STAR 알고리즘*\n")
a_star(puzzle)

