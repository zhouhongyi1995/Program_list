#include "workerManager.h"

WorkerManager::WorkerManager()
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;
		ifs.close();

		return;
	}
	
	//文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文件为空
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;
		ifs.close();

		return;
	}

}

void WorkerManager::Show_Menu()
{
	cout << "************************************************" << endl;
	cout << "*********     欢迎使用职工管理系统！     *********" << endl;
	cout << "***************  0.退出管理程序  ****************" << endl;
	cout << "***************  1.增加职工信息  ****************" << endl;
	cout << "***************  2.显示职工信息  ****************" << endl;
	cout << "***************  3.删除离职职工  ****************" << endl;
	cout << "***************  4.修改职工信息  ****************" << endl;
	cout << "***************  5.查找职工信息  ****************" << endl;
	cout << "***************  6.按照编号排序  ****************" << endl;
	cout << "***************  7.清空所有文档  ****************" << endl;
	cout << "************************************************" << endl;
	cout << endl;
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量：" << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		 int newSize = this->m_EmpNum + addNum; //新空间人数

		//开辟新空间
		Worker ** newSpace = new Worker*[newSize];

		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << " 个新职工编号： " << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << " 个新职工姓名： " << endl;
			cin >> name; 
			cout << "请选择该职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;

			cin >> dSelect;

			Worker* worker = NULL;
			
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
			
		}
		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		//更新职工不为空
		this->m_FileIsEmpty = false;

		//保持数据到文件中
		this->save();

		cout << "成功添加" << addNum << "名新职工!" << endl;
	}
	else
	{
		cout << "输入数据有误" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)	
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}