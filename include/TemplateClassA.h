#pragma once

#include <iostream>

template <class B> class ClassB;

template <class A>
class ClassA
{
public:
	void doSomethingA()
	{
		std::cout << "Do something A" << std::endl;
	}

	template <class B>
	void doSomethingWithB(ClassB<B> * instanceOfB)
	{
		instanceOfB->doSomethingB();
	}
};