#include "Base.hpp"

Base::~Base(){}

Base* generate(void){
	switch (std::rand() % 3)
	{
		case 0:
		{
			std::cout << "Generated: A\n";
			return (new A);
		}
		case 1:
		{
			std::cout << "Generated: B\n";
			return (new B);
		}
		default:
		{
			std::cout << "Generated: C\n";
			return (new C);
		}
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base& p){
	try{
		(void)(dynamic_cast<A&>(p));
		std::cout << "A\n";
		return;
	}
	catch(...)
	{
	}
	try{
		(void)(dynamic_cast<B&>(p));
		std::cout << "B\n";
		return;
	}
	catch(...)
	{
	}
	try{
		(void)(dynamic_cast<C&>(p));
		std::cout << "C\n";
		return;
	}
	catch(...)
	{
	}
}
