import cards_tools
while True:  # 无限循环,由用户主动决定什么时候退出循环

	# 显示功能菜单
	cards_tools.show_menu()

	action_str = input("请选择希望执行的操作：")
	print("您选择的操作是【%s】" % action_str)

	if action_str in ["1", "2", "3"]:
		if action_str == "1":
			cards_tools.new_card()
		elif action_str == "2":
			cards_tools.show_all()
		elif action_str == "3":
			cards_tools.search_card()

		pass

	elif action_str == "0":
		print("欢迎再次使用【名片管理系统】")
		break

		pass  # pass关键字表示一个占位符,能够保证程序的代码结构正确

	else:
		print("您的输入不正确，请重新选择：")
