#include"Lab2_fun.h"

/*
*函数名称：setArray
*函数功能：创建一个二维数组，并随机赋值
*输入参数：二维数组的行数，二维数组的列数
*返回值：二维数组
*版本信息：create by WenboGeng
*/
int **setArray(int rows,int cols) {
	int **arr = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++) {
		arr[i] = (int*)malloc(cols * sizeof(int));
	}
	//使用随机函数
	srand((int)time(0));
	//使用随机函数赋值
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int ans = random(100);
			arr[i][j]=ans;
		}
	}
	return arr;
}

/*
*函数名称：saveArray
*函数功能：将数组写入文件中
*输入参数：二维数组的行数，二维数组的列数，储存文件名，二维数组
*返回值：无
*版本信息：create by WenboGeng
*/
void saveArray(int rows,int cols,string filename,int** arr) {
	FILE* fp = fopen(filename.c_str(), "w");
	if (fp != NULL) {
		fprintf(fp, "%d\n",rows);//打开文件
		//遍历数组输出
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				fprintf(fp, "%d", arr[i][j]);
				if (j != cols - 1)
					fprintf(fp, ",");
			}
			fprintf(fp, "\n");
		}
		fclose(fp);//关闭文件
	}
}

/*
*函数名称：printArray
*函数功能：将数组打印到屏幕上
*输入参数：二维数组的行数，二维数组的列数，二维数组
*返回值：无
*版本信息：create by WenboGeng
*/
void printArray(int rows, int cols,int **arr) {
	cout << rows << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j];
			if (j != cols - 1)
				cout << ",";
		}
		cout << endl;
	}
}