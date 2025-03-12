Friends_names = ['he song', 'yang zhe','li chenggang','wu xiujing','li lei','chen rui',]
Friends_names.append('zhou hongyi')
Friends_names.insert(1,'zhang hao')
for name in Friends_names:
    print(name.title())
Friends_names[0]='wen yuxuan'
print(Friends_names[0].title())

popped_friend= Friends_names.pop()
print(Friends_names)
print(popped_friend)

