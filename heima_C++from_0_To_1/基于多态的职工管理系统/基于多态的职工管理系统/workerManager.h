#pragma once
#include<iostream>
using namespace std;
#include<fstream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	void Show_Menu();

	void ExitSystem();

	int m_EmpNum;

	Worker ** m_EmpArray;

	void Add_Emp();

	void save();

	//判断文件是否为空标注
	bool m_FileIsEmpty;

	//析构函数
	~WorkerManager();

private:

};
