#include<iostream>

int Nultiply(int a,int b)
{
	return a*b;
}

int main(int argc,char* argv[])
{
	int a = 10;
	int b = 20;
	int c = Nultiply(a,b); 
	std::cout<<"hello C"<<std::endl;
	std::cout<<"a*b = "<<c<<std::endl;
	return 0;
}

