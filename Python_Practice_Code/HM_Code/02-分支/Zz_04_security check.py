
has_ticket = input("是否有车票(请输入：yes/no):")

if has_ticket == "yes":
	print("车票检查通过，请准备开始安检。\n")

	knife_length = int(input("请输入刀的长度(cm)："))
	if knife_length <= 20:
		print("安检通过，祝您旅途愉快!")

	else:
		print("有携带管制刀具，安检不合格，请退出黄线！")

else:
	print("没有购买车票，不允许通过！")

