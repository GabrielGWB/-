#include"Lab2_fun.h"


/*
*�������ƣ�run
*�������ܣ�ʵ�ִ�����ά���鲢�漴��ֵ��Ȼ��洢���ļ��С�
*��������������в��������������в�������
*����ֵ����
*�汾��Ϣ��create by WenboGeng.
*/
void run(int argc, char* argv[]) {
	//���ж��������ж�
	if (argc == 1) {//����û�û�����������в���
		cout << "��������Ҫ�����������" << endl;
		int n;
		cin >> n;//��������
		int **array=setArray(n, 3);//������ά����
		string name;
		cout << "�������ļ�������" << endl;
		cin >> name;//�����ļ���
		name = name + ".txt";
		saveArray(n, 3, name, array);
		printArray(n, 3, array);
	}
	else if (argc == 2) {
		cout << "���������������" << endl;
	}
	else if (argc == 3) {
		int n = atoi(argv[1]);
		int **array=setArray(n, 3);
		string name = argv[2];
		name = name + ".txt";//��ʽ���ļ�������
		saveArray(n, 3, name ,array);
		printArray(n, 3,array);
	}
	else {
		cout << "����������࣡" << endl;
	}
}