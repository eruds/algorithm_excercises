def getCoinCombination ( amount ) : 
    def filterCoins ( coinsUsed ) : 
        keys = []
        for (key, value) in coinsUsed.items() :
            if (value == 0) : 
                keys.append(key)
        for key in keys : 
            del coinsUsed[key]
        return coinsUsed
    coins = [1, 5, 10, 25, 50]
    total = 0
    coinsUsed = { 
        1 : 0,
        5 : 0,
        10 : 0, 
        25 : 0, 
        50 : 0
    }
    idx = coins.index(coins[-1])
    while total != amount : 
        total += coins[idx]
        if total > amount : 
                total -= coins[idx]
                idx -= 1
        else : 
            coinsUsed[coins[idx]] += 1
    return filterCoins(coinsUsed)

def minimumCoinUsed( amount ) :
    coinsUsed = getCoinCombination(amount) 
    sum = 0
    for (key, value) in coinsUsed.items() :
        sum += value 
    return sum 

print(getCoinCombination(32))
print(minimumCoinUsed(32))