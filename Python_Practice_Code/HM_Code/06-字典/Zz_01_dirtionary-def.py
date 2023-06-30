xiaoming_info = {"name": "小明",
                 "age": 18,
                 "gender": True,
                 "height": 175,
                 "weight": 70}

print(len(xiaoming_info))

temp_info = {"height": 1.75}  # 新增键字对，包含已经存在的则更新
xiaoming_info.update(temp_info)

print(xiaoming_info)

card_list = [
	{"name": "zhangsan",
	 "age": "21",
	 "height": "175"},
	{"name": "lisi",
	 "age": "22",
	 "height": "170"}
]

for card_info in card_list:
	print(card_info)

