import random

computer = random.randint(1, 3)

player = int(input("请输入石头(1)、剪刀(2)或者布(3):"))

if ((player == 1 and computer == 2)
		or (player == 2 and computer == 3)
		or (player == 3 and computer == 1)):

	print("very good, you win!")

elif player == computer:
	print("We are the same")

else:
	print("Unfortunately, you lost")

