cnt=0
a=int(input())

for i in range(1,100):
    if i%2!=0:
        if cnt<a:
            print(i,end="")
            if (cnt<a-1):
                print(end=",")

            cnt = cnt + 1

        else:
            break


