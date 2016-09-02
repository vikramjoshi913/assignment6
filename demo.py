#!/usr/bin/env python

list1=[0,23,12,43,43,12,43]
a=2
while (a==2):
    print("\nEnter your option\n")
    print("1.-isEmpty()\n2.-Size()\n3.-GetMin()\n4.-GetMax()\n5.-put(x):\n6.-BuiltDEPQ(FileName)\n")

var=raw_input("Enter your input:") 

if var==1:
  isEmpty()

elif var ==2:
  Size()

elif var==3:
  temp=len(list1)
  if temp==1:
    print("List is empty\n")
  else :
    GetMin()
  elif var==4:
    GetMax()
  elif var==5:
    put(x)
  elif var==6:
    BuiltDEPQ()
  else:  
    print("Entry is not valid\n")

    var1=raw_input("Continue ?[y/n]\n")
    if(var1=='n')
    break

    def isEmpty(list1):
      lenght=len(list1)
      if length==1:
        print("\nList is empty\n")
      else :
        print("\nlist is not empty\n")       
        return

        def Size(list1)
        a=len(list1)
        a=a-1
        print "Size is:\n"+a
        return

        def GetMin()

        return

        def GetMax(list1)

        return

        def put(x)

        return

        def BuiltDEPQ()
        size=len(list1)
        if size==1:
          print("List is empty")
          else
          child=size
          parent=child/2
          temp=list1[child]
          while (parent>=1) and (temp>list1[parent]) :
            list1[child]=list1[parent]
            child=parent
            parent=child/2

            list1[child]=temp 
            size=size+1 
            for num in range(1,size):
              print list1[num]         

