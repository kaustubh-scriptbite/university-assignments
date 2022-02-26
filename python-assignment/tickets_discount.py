from curses.ascii import isdigit


def senior_discount_tickets(fname, lname, age):
    if age.isdigit() == True:
        if int(age) >= 65:
            print("Hello {} {},{},You are a senior and have {} off".format(fname,lname,age,"20%"))
        elif((int(age) < 65) or (int(age) > 18)):
            print("Hello {} {},{},You have no discount at this time, Sorry!".format(fname,lname,age))
    else:
        print("Age Should Be In Integer Format Only")

    
def main():
    first_name = input("Enter The Firts Name:\t")
    last_name = input("Enter The Last Name:\t")
    age = input("Enter The Age :\t")
    senior_discount_tickets(first_name,last_name,age)
    
if __name__ == "__main__":
    main()