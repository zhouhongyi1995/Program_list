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
	//���캯��
	WorkerManager();
	void Show_Menu();

	void ExitSystem();

	int m_EmpNum;

	Worker ** m_EmpArray;

	void Add_Emp();

	void save();

	//�ж��ļ��Ƿ�Ϊ�ձ�ע
	bool m_FileIsEmpty;

	//��������
	~WorkerManager();

private:

};
