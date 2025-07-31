def printNumbers(Lrange, Urange):
    # base case
    if Lrange > Urange: 
        return
    
    printNumbers(Lrange+1, Urange)
    print(Lrange)
printNumbers(1, 5)