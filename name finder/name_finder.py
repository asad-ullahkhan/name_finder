num=int(input("Think of a word.\nHow many words are in it: ",))
print(" a b c d \n e f g h\n i j k l \n m n o p \n q r s t \n u v w x \n y z    \nSelect columns between 1 to 4")
col1=[]
col2=[]

for i in range(num):
    temp=int(input(f"which column does your {i+1} letter belong:"),)
    col1.append(temp)

print("choose which column does it belong now ")
for i in range(num):
    if col1[i]==1:
        print("a e i m q u y")
    if col1[i]==2:
        print("b f j n r v z")
    if col1[i]==3:
        print("c g k o s w  ")
    if col1[i]==4:
        print("d h l p t x  ")
print("choose from 1 to 7 ")

for i in range(num):
    temp=int(input(f"which column does your {i+1} letter belong : "))
    col2.append(temp)

for i in range(num):
    if col1[i]==1:
        if col2[i]==1:
            print("A",end="")
        if col2[i]==2:
            print("E",end="")
        if col2[i]==3:
            print("I",end="")
        if col2[i]==4:
            print("M",end="")
        if col2[i]==5:
            print("Q",end="")
        if col2[i]==6:
            print("U",end="")
        if col2[i]==7:
            print("Y",end="")
    if col1[i]==2:
        if col2[i]==1:
            print("B",end="")
        if col2[i]==2:
            print("F",end="")
        if col2[i]==3:
            print("J",end="")
        if col2[i]==4:
            print("N",end="")
        if col2[i]==5:
            print("R",end="")
        if col2[i]==6:
            print("V",end="")
        if col2[i]==7:
            print("Z",end="")
    if col1[i]==3:
        if col2[i]==1:
            print("C",end="")
        if col2[i]==2:
            print("G",end="")
        if col2[i]==3:
            print("K",end="")
        if col2[i]==4:
            print("O",end="")
        if col2[i]==5:
            print("S",end="")
        if col2[i]==6:
            print("W",end="")
    if col1[i]==4:
        if col2[i]==1:
            print("D",end="")
        if col2[i]==2:
            print("H",end="")
        if col2[i]==3:
            print("L",end="")
        if col2[i]==4:
            print("P",end="")
        if col2[i]==5:
            print("T",end="")
        if col2[i]==6:
            print("X",end="")
        