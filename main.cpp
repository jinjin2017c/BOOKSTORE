#include<iostream>
#include "Sales_data.h"
//实现两个记录的输入并在ISBN相同的时候输出和
int main() {
	Sales_data data1,data2;
	//读入data1与data2
	double price = 0.0; //书的单价，用于计算销售收入
	//读入第一笔交易：ISBN、销售数量和单价
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	//计算销售收入
	data1.revenue = data1.units_sold * price;
	//读入第二笔交易
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	//计算销售收入
	data2.revenue = data2.units_sold * price;
	//检查data1和data2的ISBN是否相同
	//如果相同，求data1和data2的总和
	if (data1.bookNo == data2.bookNo) {
		//总数目等于两个子数目相加
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		//总销售额等于两个子销售额相加
		double totalRevenue = data1.revenue + data2.revenue;
		//输出：ISBN、总销售量、总销售额、平均价格
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else {   //两笔交易的ISBN不一样
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}