def DisplayOdd(value):
    if value.isdigit() == True:
        for i in range(1,int(value),2):
            print(i,end=" ")
        print()
    else:
        print("Please Enter The Integer Number")
    
def main():
    no = input("Enter The End Number:\t")
    DisplayOdd(no)
    
if __name__ == "__main__":
    main()
    print("Program Ended")