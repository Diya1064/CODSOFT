#include<iostream.h>
#include<conio.h>
class Calculator
{
	private:
		float a,b;
	public:
		Calculator()
		{
			a=0;
			b=0;
		}
		Calculator(float x, float y)
		{
			a=x;
			b=y;
		}
		float Addition()
		{
			return a+b;
		}
		float Subtraction()
		{
			return a-b;
		}
		float Multiplication()
		{
			return a*b;
		}
		float Division()
		{
			return a/b;
		}
};
void main()
{
	float num1,num2;
	int op;
	cout<<"\nEnter Two Numbers: ";
	cin>>num1>>num2;
	Calculator C(num1, num2);
	cout<<"\nMenu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit";
	while(op!=5)
	{
		cout<<"\nEnter operation you want tp perform: ";
		cin>>op;
		switch(op)
		{
			case 1:
			{
				cout<<"\nAddition of two Numbers: "<<C.Addition();
				break;
			}
			case 2:
			{
				cout<<"\nSubtraction of two Numbers: "<<C.Subtraction();
				break;
			}
			case 3:
			{
				cout<<"\nMultiplication of two Numbers: "<<C.Multiplication();
				break;
			}

			case 4:
			{
				cout<<"\nDivision of two Numbers: "<<C.Division();
				break;
			}
			case 5:
			{
				cout<<"\nIllegal operation";
			}
			default:
			{
				cout<<"\nExit";
			}
		}
	}
	clrscr();
	getch();
	}