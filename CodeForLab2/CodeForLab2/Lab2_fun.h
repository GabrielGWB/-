#pragma once
//ͷ�ļ�����
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;

//�궨������
#define random(x) (rand()%x)

//run��ʹ�õĺ�������
int **setArray(int rows, int cols);
void saveArray(int rows, int cols, string filename,int **arr);
void printArray(int rows, int cols,int **arr);