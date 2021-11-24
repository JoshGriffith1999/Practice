#No built in way to sort dictionaires, need to do it ourselves

stocks = {
    "GOOG":520.20, 
    "FB":45.47, 
    "TLSA":870.11, 
    "OIL":78.45
}
#First thing passed in is how it is going to be sorted by

#Min
print(min(zip(stocks.values(), stocks.keys())))

#Max
print(max(zip(stocks.values(), stocks.keys())))

#Sorted
print(sorted(zip(stocks.values(), stocks.keys())))