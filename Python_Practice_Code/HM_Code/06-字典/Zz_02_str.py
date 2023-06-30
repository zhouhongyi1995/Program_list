space_str = "i love you"

print(space_str.islower())

num_str1 = "\u00b3"
print(num_str1)
print(num_str1.isdecimal())
print(num_str1.isdigit())
print(num_str1.isnumeric())

num_str2 = "11"
print(num_str2)
print(num_str2.isdecimal())
print(num_str2.isdigit())
print(num_str2.isnumeric())

num_str3 = "一千零一"
print(num_str3)
print(num_str3.isdecimal())
print(num_str3.isdigit())
print(num_str3.isnumeric())

hello_str = "hello, world"
print(hello_str.replace("world", "python"))  # .replace只会返回新的字符串，不会修改原有的字符串
print(hello_str)
