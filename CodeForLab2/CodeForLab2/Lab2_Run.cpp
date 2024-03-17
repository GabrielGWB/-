#include"Lab2_fun.h"


/*
*函数名称：run
*函数功能：实现创建二维数组并随即赋值，然后存储在文件中。
*输入参数：命令行参数个数，命令行参数数组
*返回值：无
*版本信息：create by WenboGeng.
*/
void run(int argc, char* argv[]) {
	//用判断语句进行判断
	if (argc == 1) {//如果用户没有输入命令行参数
		cout << "请输入需要输出的行数：" << endl;
		int n;
		cin >> n;//输入行数
		int **array=setArray(n, 3);//创建二维数组
		string name;
		cout << "请输入文件的名字" << endl;
		cin >> name;//输入文件名
		name = name + ".txt";
		saveArray(n, 3, name, array);
		printArray(n, 3, array);
	}
	else if (argc == 2) {
		cout << "输入参数个数不对" << endl;
	}
	else if (argc == 3) {
		int n = atoi(argv[1]);
		int **array=setArray(n, 3);
		string name = argv[2];
		name = name + ".txt";//格式化文件的名字
		saveArray(n, 3, name ,array);
		printArray(n, 3,array);
	}
	else {
		cout << "输入参数过多！" << endl;
	}
}