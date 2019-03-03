#pragma once

#include <iostream>

#include "TemplateClassA.h"

template <class B>
class ClassB
{	
public:
	void doSomethingB()
	{
		std::cout << "Do something B" << std::endl;
	}

	template<class A>
	void doSomethingWithA(ClassA<A> * instanceOfA)
	{
		instanceOfA->doSomethingWithB(this);
	}
};