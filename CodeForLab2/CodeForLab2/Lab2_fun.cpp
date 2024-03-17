#include"Lab2_fun.h"

/*
*�������ƣ�setArray
*�������ܣ�����һ����ά���飬�������ֵ
*�����������ά�������������ά���������
*����ֵ����ά����
*�汾��Ϣ��create by WenboGeng
*/
int **setArray(int rows,int cols) {
	int **arr = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++) {
		arr[i] = (int*)malloc(cols * sizeof(int));
	}
	//ʹ���������
	srand((int)time(0));
	//ʹ�����������ֵ
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int ans = random(100);
			arr[i][j]=ans;
		}
	}
	return arr;
}

/*
*�������ƣ�saveArray
*�������ܣ�������д���ļ���
*�����������ά�������������ά����������������ļ�������ά����
*����ֵ����
*�汾��Ϣ��create by WenboGeng
*/
void saveArray(int rows,int cols,string filename,int** arr) {
	FILE* fp = fopen(filename.c_str(), "w");
	if (fp != NULL) {
		fprintf(fp, "%d\n",rows);//���ļ�
		//�����������
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				fprintf(fp, "%d", arr[i][j]);
				if (j != cols - 1)
					fprintf(fp, ",");
			}
			fprintf(fp, "\n");
		}
		fclose(fp);//�ر��ļ�
	}
}

/*
*�������ƣ�printArray
*�������ܣ��������ӡ����Ļ��
*�����������ά�������������ά�������������ά����
*����ֵ����
*�汾��Ϣ��create by WenboGeng
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