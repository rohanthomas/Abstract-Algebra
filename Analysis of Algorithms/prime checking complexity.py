import matplotlib.pyplot as plt
import math

x_values = []
y_values = []

for n in range(2,100): #avoided the edge cases for fun.
    x_values.append(n)
    flag = 0
    count=0

    for i in range(2, int(math.isqrt(n) + 1)):
        count= count + 1

        if n % i == 0:
            flag = 1
            y_values.append(count)
            break

    if flag == 1:
        print(n, "is not a prime")
    else:
        print(n, "is a prime")
        y_values.append(count)

y_real=[math.sqrt(x)-1 for x in x_values]

plt.title("Time Complexity of Primality check: $\mathcal{O}(\sqrt{n})$")
plt.scatter(x_values, y_values, color='magenta')
plt.plot(x_values, y_real, color='black')

plt.show()
