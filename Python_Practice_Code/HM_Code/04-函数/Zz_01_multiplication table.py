def multiple_table():
	"""打印九九乘法表"""
	i = 1
	j = 1
	while i < 10:
		print("第 %d 行：" % i, end="")
		while j <= i:
			print("%d*%d=%2d\t" % (j, i, i * j), end="")  # end=""使代码不换行输出
			j += 1
		print("")
		j = 1
		i += 1

	print("结束时，i的值为 %d ,j的值为%d" % (i, j))


row = 1
col = 1
while row < 10:
	print("第 %d 行：" % row, end="")
	while col < 10:
		print("%d*%d=%2d\t" % (row, col, row * col), end="")  # end=""使代码不换行输出
		col += 1
	print("")
	row += 1
	col = row

print("结束时，i的值为 %d ,j的值为%d" % (row, col))
