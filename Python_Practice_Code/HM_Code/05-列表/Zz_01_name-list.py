name_list = ["zhangsan", "lisi", "wangwu"]

print(name_list[1])

name_list[1] = "李四"

print(name_list[1])

name_list.append("wangxiaoer")

temp_list = ["jack", "mick"]
name_list.extend(temp_list)

print(name_list)

name_list.pop(2)  # 按索引删除
print(name_list)

name_list.remove("jack")  # 按对象删除,删除列表中第一个出现的对象
print(name_list)

# name_list.clear()  # 清空列表
# print(name_list)

list_len = len(name_list)
print("列表中有 %d 个数据" % list_len)

count = name_list.count("李四")
print(count)
