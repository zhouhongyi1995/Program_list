students = [
	{"name": "Mick"},
	{"name": "Jack"},

]

find_name = "J"

for stu_dict in students:

	print(stu_dict)

	if stu_dict["name"] == find_name:
		print("找到了 %s " % find_name)

		break
else:
	print("抱歉，没有找到 %s" % find_name)

print("循环结束")
