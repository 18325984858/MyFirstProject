#include<iostream>
using namespace std;

size_t Fid(size_t n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fid(n - 1) + Fid(n - 2);
}
void main(int argc, char* argv[])
{
	size_t n;
	cout << "������n: >";
	cin >> n;
	cout << "��" << n << "��쳲�����ֵ��:>" << Fid(n) << endl;
}

/*
size_t Fid(size_t n)
{
	size_t fid1 = 1;
	size_t fid2 = 1;
	size_t fid = 1;
	for (int i = 3; i <= n; ++i)
	{
		fid = fid1 + fid2;
		fid1 = fid2;
		fid2 = fid;
	}
	return fid;
}
void main(int argc, char* argv[])
{
	size_t n;
	cout << "������n: >";
	cin >> n;
	cout << "��" << n << "��쳲�����ֵ��:>" << Fid(n) << endl;
}
*/