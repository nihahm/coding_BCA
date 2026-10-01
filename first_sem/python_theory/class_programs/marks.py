rollno=0
name=''
mark1,mark2,mark3=0
total=mark1+mark2+mark3
average=total/3
percentage=(total/300)*100

def read_data():
    global mark1,mark2,mark3
    name=input("enter your name:")
    rollno=int(input("enter the rollno:"))
    mark1=int(input("enter mark1:"))
    mark2=int(input("enter mark2:"))
    mark3=int(input("enter mark3:"))
    pass
    mark2=int(mark2)
    return rollno,name,mark1,mark2,mark3
def gettotal():
    global total
    total=mark1+mark2+mark3
    pass
#to calculate average mark in 3 subject
def getaverage():
    global average
    average=total/3
    pass
#to determine student grade 
def findgrade():
    if percentage>=80:
        print("distinction")
    elif percentage>=65:
        print("firstclass")
    elif percentage>=40:
        print("secondclasss")
    else:
        print("fail")
        pass
#to display student result
def displayresult():
    pass


