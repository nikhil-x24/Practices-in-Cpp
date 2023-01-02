#include <iostream>

using namespace std;
class twoStacks//
 {
	int* arr;
	int size;
	int top1, top2;
// constructor
public:
	twoStacks(int n) 
	{
		size = n;
		arr = new int[n];
		top1 = -1;
		top2 = size;
	}
	
	void push1(int x)
	{
		if (top1 < top2 - 1) 
		{
			top1++;
			arr[top1] = x;
		}
		else
		{
			cout << "Stack Overflow";
			exit(1);
		}
	}
	
	void push2(int x)
	{
		if (top1 < top2 - 1) 
		{
			top2--;
			arr[top2] = x;
		}
		else 
		{
			cout << "Stack Overflow";
			exit(1);
		}
	}

	int pop1()
	{
		if (top1 >= 0) {
			int x = arr[top1];
			top1--;
			return x;
		}
		else {
			cout << "Stack UnderFlow";
			exit(1);
		}
	}
	
	int pop2()
	{
		if (top2 < size)
		{
			int x = arr[top2];
			top2++;
			return x;
		}
		else 
		{
			cout << "Stack UnderFlow";
			exit(1);
		}
	}
};

int main()
{
	twoStacks ob(5);
	ob.push1(5);
	ob.push2(10);
	ob.push2(15);
	ob.push1(200);
	cout << "stack1 pop element is "
		<< ob.pop1();
	cout << "\n stack2 pop element is "
		<< ob.pop2();
	return 0;
}