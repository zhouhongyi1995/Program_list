holiday_name = input("请输入节日名称：")

if holiday_name == "情人节":
	print("买玫瑰，看电影")

elif holiday_name == "圣诞节":  # elif ：同时判断多个条件，每个条件都是平级的
	print("买苹果，吃大餐")

elif holiday_name == "生日":
	print("买蛋糕")

else:
	print("每天都是节日啊")
