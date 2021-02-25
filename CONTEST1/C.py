a=input()
c=input()
huongHT='B'
x,y=[0,0]
for i in c:
    if huongHT=='B':
        if i == 'G':
            y += 1
        elif i == 'B':
            y -= 1
        elif i == 'L':
            x -= 1
            huongHT='T'
        elif i == 'R':
            x += 1
            huongHT ='D'
    elif huongHT == 'T':
        if i == 'G':
           x-= 1
        elif i == 'B':
            x += 1
        elif i == 'L':
            y-= 1
            huongHT='N'
        elif i == 'R':
            y += 1
            huongHT='B'
    elif huongHT == 'N':
        if i == 'G':
            y -= 1
        elif i == 'B':
            y += 1
        elif i == 'L':
            x += 1
            huongHT='D'
        elif i == 'R':
            x -= 1
            huongHT='T'
    elif huongHT == 'D':
        if i == 'G':
            x += 1
        elif i == 'B':
            x -= 1
        elif i == 'L':
            huongHT='B'
            y+= 1
        elif i == 'R':
            y-= 1
            huongHT='N'



print(f'{x} {y}',end='')
