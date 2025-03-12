card_list = []


def show_menu():

	"""显示菜单"""
	print(">" * 50)
	print("欢迎使用【名片管理系统】V 1.0\n")
	print("1.新增名片")
	print("2.显示全部")
	print("3.搜索名片\n")
	print("0.退出系统")
	print(">" * 50)


def new_card():

	"""新增名片"""
	print("-" * 50)
	print("新增名片")

	name_str = input("请输入姓名：")
	phone_str = input("请输入电话：")
	qq_str = input("请输入QQ：")
	email_str = input("请输入邮箱：")

	card_dict = {"name": name_str,
	             "phone": phone_str,
	             "QQ": qq_str,
	             "email": email_str}

	card_list.append(card_dict)

	print(card_list)

	print("添加 %s 的名片成功！" % name_str)


def show_all():

	"""显示所有名片"""
	print("=" * 50)
	print("显示所有名片")

	if len(card_list) == 0:
		print("挡墙没有名片记录，请使用新增功能添加名片！")

		return  # return后面没有任何的内容，表示会返回到调用函数的位置，不返回任何内容

	for name in ["姓名", "电话", "QQ", "email"]:
		print(name, end="\t\t")

	print("")

	print("=" * 50)

	for card_dict in card_list:
		print("%s\t\t%s\t\t%s\t\t%s" % (card_dict["name"],
		                                card_dict["phone"],
		                                card_dict["QQ"],
		                                card_dict["email"]))


def search_card():
	"""搜索名片"""
	print("-" * 50)
	print("搜索名片")

	find_name = input("请输入需要查询的姓名：")

	for card_dict in card_list:
		if card_dict["name"] == find_name:
			print("找到了")
			print("姓名\t\t电话\t\tQQ\t\t邮箱")
			print("=" * 50)
			print("%s\t\t%s\t\t%s\t\t%s" % (card_dict["name"],
			                                card_dict["phone"],
			                                card_dict["QQ"],
			                                card_dict["email"]))
			deal_card(card_dict)
			break

	else:
		print("抱歉没有找到%s" % find_name)


def deal_card(find_dict):

	print(find_dict)

	action_str = input("请选择要执行的操作：\n"
	                   "[1]、修改 "
	                   "[2]、删除 "
	                   "[0]、返回上一级菜单")

	if action_str == "1":
		find_dict["name"] = input("姓名【回车不修改】：")
		find_dict["phone"] = input("电话【回车不修改】：")
		find_dict["QQ"] = input("QQ【回车不修改】：")
		find_dict["email"] = input("email【回车不修改】：")
		print("修改名片成功！")

	elif action_str == "2":
		card_list.remove(find_dict)
		print("删除名片成功！")
