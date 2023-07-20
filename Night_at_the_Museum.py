s = input()
len = len(s)
Smoves = 0
strt = 0  # a
for i in range(len):
    index = ord(s[i]) - 97
    walk = abs(strt - index)
    if walk > 13:
        Smoves += 26 - walk
    else:
        Smoves += walk
    strt = index
print(Smoves)