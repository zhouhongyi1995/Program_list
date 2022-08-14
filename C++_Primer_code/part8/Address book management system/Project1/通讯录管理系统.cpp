#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "*****************************" << endl;
	cout << "*****   1、添加联系人   *****" << endl;
	cout << "*****   2、显示联系人   *****" << endl;
	cout << "*****   3、删除联系人   *****" << endl;
	cout << "*****   4、查找联系人   *****" << endl;
	cout << "*****   5、修改联系人   *****" << endl;
	cout << "*****   6、清空联系人   *****" << endl;
	cout << "*****   0、退出通讯录   *****" << endl;
	cout << "*****************************" << endl;

}

struct Person
{
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[MAX];
	int m_Size;
};
//添加联系人：
void addPerson(Addressbooks * abs)
{
	if (abs ->m_Size == MAX)
	{
		cout << "通讯录已满，无法继续添加!";
		return;
	}
	else
	{
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex=0;
		cout << "请输入性别(1--男；2--女): " << endl;
		
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入性别(1--男；2--女)：" << endl;
			}
		}
		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系电话: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址: " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "添加成功！" << endl;

		system("pause");
		system("cls");
	}

}

//显示所有联系人
void showPerson(Addressbooks * abs)
{
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (size_t i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名： " << abs->personArray[i].m_Name << "\t" ;
			cout << "性别： " << (abs->personArray[i].m_Sex==1?"男":"女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_Age << "\t";
			cout << "联系电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "家庭住址： " << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

int isExist(Addressbooks* abs,string name)
{
	for (size_t i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//删除指定联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (size_t i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！";
	}

	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs) 
{
	cout << "请输入您要查询的联系人: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "姓名: " << abs->personArray[ret].m_Name << "\t";
		cout << "性别: " << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
		cout << "电话: " << abs->personArray[ret].m_Phone << "\t";
		cout << "住址: " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1 )
	{
		cout << "姓名: " << abs->personArray[ret].m_Name << "\t";
		cout << "性别: " << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
		cout << "电话: " << abs->personArray[ret].m_Phone << "\t";
		cout << "住址: " << abs->personArray[ret].m_Addr << endl;

		cout << "请输入修改后的姓名: " << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "请输入修改后的性别(1--男；2--女): " << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入性别(1--男；2--女): " << endl;
		}
		
		cout << "请输入修改后的年龄: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "请输入修改后的电话: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "请输入修改后的住址: " << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}

	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs)
{
	string YorN;
	cout << "请确认是否清空当前通讯录(Y--是；N--否): " << endl;
	cin >> YorN;
	if (YorN == "y" || YorN == "Y")
	{
		abs->m_Size = 0;
		cout << "通讯录已清空！" << endl;
	}
	else
	{
		cout << "未进行清空操作！" << endl;
	}

	system("pause");
	system("cls");
}

int main()
{
	Addressbooks abs;
	abs.m_Size = 0;

	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs);
			break;
		case 2: //显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人
			deletePerson(&abs);
			break;
		case 4: //查找联系人
			findPerson(&abs);
			break;
		case 5: //修改联系人
			modifyPerson(&abs);
			break;
		case 6: //清空联系人
			cleanPerson(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用！" << endl;

			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}