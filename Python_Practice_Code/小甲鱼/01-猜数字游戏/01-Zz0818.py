import random

secret = random.randint(1, 10)
temp = int(input("请输入一个数字："))

if temp == secret:
	print("恭喜你，猜中了")