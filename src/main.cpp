#include "TemplateClassB.h"

int main()
{
	ClassA<float> instanceOfA;
	ClassB<int> instanceOfB;

	instanceOfB.doSomethingWithA<float>(&instanceOfA);

	return 0;
}