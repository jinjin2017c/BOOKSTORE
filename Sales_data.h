#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
//sales_data的定义
struct Sales_data {
	//string 的默认初始化值为空串
	std::string bookNo;    
	//一个item的售出数量初始化为0
	unsigned units_sold = 0;
	//平均售价初始化为0.0
	double revenue = 0.0;
};
#endif