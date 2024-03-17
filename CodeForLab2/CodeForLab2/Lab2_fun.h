#pragma once
//头文件引用
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;

//宏定义声明
#define random(x) (rand()%x)

//run中使用的函数声明
int **setArray(int rows, int cols);
void saveArray(int rows, int cols, string filename,int **arr);
void printArray(int rows, int cols,int **arr);