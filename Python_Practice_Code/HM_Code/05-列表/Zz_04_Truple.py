info_tuple = ("zhangsan", 18, 1.75)  # 元组变量
print(info_tuple[1])

single_tuple = (5,)  # 只包含一个元素的元组
print(type(single_tuple))

print(info_tuple.count(18))
print(info_tuple.index(1.75))

for info in info_tuple:
	print(info)
