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
<<<<<<< Updated upstream
	std::cout<<"a*b = "<<c<<std::endl;
=======
	std::cout<<"b*a = "<<c<<std::endl;
>>>>>>> Stashed changes
	return 0;
}

