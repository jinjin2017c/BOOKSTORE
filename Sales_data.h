#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
//sales_data�Ķ���
struct Sales_data {
	//string ��Ĭ�ϳ�ʼ��ֵΪ�մ�
	std::string bookNo;    
	//һ��item���۳�������ʼ��Ϊ0
	unsigned units_sold = 0;
	//ƽ���ۼ۳�ʼ��Ϊ0.0
	double revenue = 0.0;
};
#endif