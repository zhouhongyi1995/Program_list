poem_str = "登鹤雀楼\t 王之涣 \t 白日依山尽 \t \n 黄河入海流 \t\t 欲穷千里目 \n更上一层楼"

print(poem_str)

poem_list = poem_str.split()  # 提取字符串并保存为列表
print(poem_list)

result = " ".join(poem_list)  # 将列表以字符串连接
print(result)
