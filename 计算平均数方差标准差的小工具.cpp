#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout << "请输入要计算的数据的个数：\n";
	cin >> num;
	double* data = new double[num];
	double sum=0;
	cout << "请输入"<<num<<"次数据：\n";
	for (int i = 0; i < num; i++)
	{
		cin >> data[i];
		sum += data[i];
	}
	double average = sum / num;
	double s=0;
	for (int i = 0; i < num; i++)
	{
		s += (average - data[i]) * (average - data[i]);
	}
	s /= num;
	cout << "平均值为：" << average << endl;
	cout << "方差为：" << s << endl << "标准差为：" << sqrt(s);
	delete[] data;
	cin.get();
	cout << "\n按任意按键退出。";
	cin.get();
}
