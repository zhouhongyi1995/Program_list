python_score = int(input("请输入python成绩："))

c_score = int(input("请输入C成绩:"))

if python_score > 60 or c_score > 60:
	print("恭喜你，考试成绩通过。")
	if python_score < 70 and c_score < 70:
		print("继续加油哦")

else:
	print("failed,try again!")
