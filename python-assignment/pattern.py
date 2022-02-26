# txt1 = "banana"
# x = txt1.center(20)
# print(x)

# txt2 = "strawberry"
# y = txt2.center(21)
# print(y)

# txt3 = "water melon"
# z = txt3.center(22)
# print(z)


def display(value):
    for i in range(1,(value*2),2):
        txt = "*"*i
        print(txt.center(20))

def main():
    no = int(input("Enter The Number of Row:\t"))
    display(no)
    
if __name__ == "__main__":
    main()