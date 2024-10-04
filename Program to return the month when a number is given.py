#Program to return the month when a number is given #
def mon(num):
    month = ["JAN", "FEB", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"]
    if 1 <= num <= 12:
        return month[num - 1]
    else:
        return "INVALID"

num = int(input("Enter a month number\n"))
print("The month is", mon(num))
