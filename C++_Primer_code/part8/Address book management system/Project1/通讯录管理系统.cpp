#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "*****************************" << endl;
	cout << "*****   1�������ϵ��   *****" << endl;
	cout << "*****   2����ʾ��ϵ��   *****" << endl;
	cout << "*****   3��ɾ����ϵ��   *****" << endl;
	cout << "*****   4��������ϵ��   *****" << endl;
	cout << "*****   5���޸���ϵ��   *****" << endl;
	cout << "*****   6�������ϵ��   *****" << endl;
	cout << "*****   0���˳�ͨѶ¼   *****" << endl;
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
//�����ϵ�ˣ�
void addPerson(Addressbooks * abs)
{
	if (abs ->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷��������!";
		return;
	}
	else
	{
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		int sex=0;
		cout << "�������Ա�(1--�У�2--Ů): " << endl;
		
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
				cout << "�������������������Ա�(1--�У�2--Ů)��" << endl;
			}
		}
		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "��������ϵ�绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ: " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "��ӳɹ���" << endl;

		system("pause");
		system("cls");
	}

}

//��ʾ������ϵ��
void showPerson(Addressbooks * abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (size_t i = 0; i < abs->m_Size; i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t" ;
			cout << "�Ա� " << (abs->personArray[i].m_Sex==1?"��":"Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "��ϵ�绰�� " << abs->personArray[i].m_Phone << "\t";
			cout << "��ͥסַ�� " << abs->personArray[i].m_Addr << endl;
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

//ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��: " << endl;
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
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�";
	}

	system("pause");
	system("cls");
}

void findPerson(Addressbooks* abs) 
{
	cout << "��������Ҫ��ѯ����ϵ��: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		cout << "����: " << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�: " << abs->personArray[ret].m_Sex << "\t";
		cout << "����: " << abs->personArray[ret].m_Age << "\t";
		cout << "�绰: " << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ: " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��: " << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1 )
	{
		cout << "����: " << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�: " << abs->personArray[ret].m_Sex << "\t";
		cout << "����: " << abs->personArray[ret].m_Age << "\t";
		cout << "�绰: " << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ: " << abs->personArray[ret].m_Addr << endl;

		cout << "�������޸ĺ������: " << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "�������޸ĺ���Ա�(1--�У�2--Ů): " << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�������������������Ա�(1--�У�2--Ů): " << endl;
		}
		
		cout << "�������޸ĺ������: " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "�������޸ĺ�ĵ绰: " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "�������޸ĺ��סַ: " << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}

	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks* abs)
{
	string YorN;
	cout << "��ȷ���Ƿ���յ�ǰͨѶ¼(Y--�ǣ�N--��): " << endl;
	cin >> YorN;
	if (YorN == "y" || YorN == "Y")
	{
		abs->m_Size = 0;
		cout << "ͨѶ¼����գ�" << endl;
	}
	else
	{
		cout << "δ������ղ�����" << endl;
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
		case 1: //�����ϵ��
			addPerson(&abs);
			break;
		case 2: //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4: //������ϵ��
			findPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;

			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}