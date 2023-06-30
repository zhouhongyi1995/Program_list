i = 0
while i <= 10:
	if i == 5:
		i += 1  # 此处的计算仅在i = 5时执行。不可少！
		continue
	print(i)
	i += 1  # 此处的计算在i ！= 5时执行。不可少！
