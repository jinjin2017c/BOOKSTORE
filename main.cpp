#include<iostream>
#include "Sales_data.h"
//ʵ��������¼�����벢��ISBN��ͬ��ʱ�������
int main() {
	Sales_data data1,data2;
	//����data1��data2
	double price = 0.0; //��ĵ��ۣ����ڼ�����������
	//�����һ�ʽ��ף�ISBN�����������͵���
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	//������������
	data1.revenue = data1.units_sold * price;
	//����ڶ��ʽ���
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	//������������
	data2.revenue = data2.units_sold * price;
	//���data1��data2��ISBN�Ƿ���ͬ
	//�����ͬ����data1��data2���ܺ�
	if (data1.bookNo == data2.bookNo) {
		//����Ŀ������������Ŀ���
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		//�����۶�������������۶����
		double totalRevenue = data1.revenue + data2.revenue;
		//�����ISBN�����������������۶ƽ���۸�
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		return 0;
	}
	else {   //���ʽ��׵�ISBN��һ��
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}