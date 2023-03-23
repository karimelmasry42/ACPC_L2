from random import randint
with open("/Users/karim/Desktop/ACM L2/vjudge/F_in.txt", "w") as f:
    t = 10
    f.write(f"{t}\n")
    for _ in range(t):
        for _ in range(3):
            f.write(f"{randint(0, 50)} ")
        f.write("\n")
        for _ in range(5):
            f.write(f"{randint(0, 15)} ")
        f.write("\n")
