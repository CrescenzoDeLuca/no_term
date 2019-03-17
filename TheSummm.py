from pathlib import Path

f = Path("sum.dat")
if f.is_file():


    f = open('sum.dat', 'r')
    line = f.readline()
    num = int(line)

    f.close()

else:
    print("ERROR 404 \n")
    num = 0

n = input("new number == ")
n = int(n)
n = n+num

f = open('sum.dat', 'w')

n = str(n)
f.write(n)
print("il nuovo numero e ==", n)

f.close()
