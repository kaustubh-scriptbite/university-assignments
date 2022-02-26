def DisplayAdjective(l1,l2):
    if l1 and l2:
        d1 = dict(zip(l1,l2))
        for key,value in d1.items():
            print(key,value)
    else:
        print("Please Check The Input")

def main():
    adj = ["red","big","tasty"]
    fruits = ["apple","banana","cherry"]
    
    DisplayAdjective(adj,fruits)
    
if __name__ == "__main__":
    main()