#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class pizza
{
	int total;
	public : int margherita(int a)
	{
		total = 199 * a;
		return total;
	}
	public : int corn(int a)
	{
		total = 309 * a;
		return total;
	}
	public : int tomato(int a)
	{
		total = 250 * a;
		return total;
	}
};

class burger
{
	int total;
	public : int vegb(int a)
	{
		total = 70 * a;
		return total;
	}
	public : int chickenb(int a)
	{
		total = 99 * a;
		return total;
	}
	public : cheseb(int a)
	{
		total = 129 * a;
		return total;
	}
};

class sandwich
{
	int total;
	public : int club(int a)
	{
		total = 240 * a;
		return total;
	}
	public : int crispy(int a)
	{
		total = 160 * a;
		return total;
	}
	public : int veg(int a)
	{
		total = 100 * a;
		return total;
	}
};

class rolls
{
	int total;
	public : int paneer(int a)
	{
		total = 130 * a;
		return total;
	}
	public : int chickenr(int a)
	{
		total = 160 * a;
		return total;
	}
	public : int eggr(int a)
	{
		total = 139 * a;
		return total;
	}
};

class biryani
{
	int total;
	public : int vegbi(int a)
	{
		total = 140 * a;
		return total;
	}
	public : int hydrabadi(int a)
	{
		total = 160 * a;
		return total;
	}
	public : int chickenbi(int a)
	{
		total = 180 * a;
		return total;
	}
};

int main()
{
	char name[10],ch;
	int choice,choice1,quantity;

	//clrscr();
	pizza pobj;
	burger bobj;
	sandwich sobj;
	rolls robj;
	biryani biobj;

	cout<<"---------Tops Tech. Fast Food----------"<<endl;

	cout<<"Please Enter your name : ";
	cin>>name;
	cout<<"Hello "<<name<<endl;
     do{
	cout<<"What would you like to order ?"<<endl;
	cout<<"---------------Menu-------------"<<endl;
	cout<<"1) Pizzas"<<endl;
	cout<<"2) Burgers"<<endl;
	cout<<"3) Sandwich"<<endl;
	cout<<"4) Rolls"<<endl;
	cout<<"5) Biryani"<<endl<<endl;
	cout<<"Please enter your choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
		{
			cout<<"1) Margherita Pizza Rs.199"<<endl;
			cout<<"2) Corn Pizza Rs.309"<<endl;
			cout<<"3) Tomato Pizza Rs.250"<<endl<<endl;
			cout<<"Please Enter which type of pizza would you like to order ?: ";
			cin>>choice1;

			switch(choice1)
			{
				case 1:
				{       cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is "<<pobj.margherita(quantity)<<endl;
				}
				break;
				case 2:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is "<<pobj.corn(quantity)<<endl;
				}
				break;
				case 3:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<pobj.tomato(quantity)<<endl;
				}
				break;
				default :
				{
					cout<<"Invalid choice."<<endl;
				}
			}
		}
		break;

		case 2:
		{
			cout<<"1) Veg Burger Rs.70 "<<endl;
			cout<<"2) Chicken Burger Rs.99"<<endl;
			cout<<"3) Chese Burger Rs.129"<<endl<<endl;

			cout<<"Please Enter which type of Burger would you like to have ? : ";
			cin>>choice1;

			switch(choice1)
			{
				case 1:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is "<<bobj.vegb(quantity)<<endl;
				}
				break;
				case 2:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is : "<<bobj.chickenb(quantity)<<endl;
				}
				break;
				case 3:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<bobj.cheseb(quantity)<<endl;
				}
				break;
				default:
				{
					cout<<"Invalid Choice."<<endl;
				}
			}
		}
		break;

		case 3 :
		{
			cout<<"1) Club Sandwich Rs.240 "<<endl;
			cout<<"2) Veg. Crispy Sndwich Rs.160 "<<endl;
			cout<<"3) Extream Veg Sandwich Rs.100 "<<endl<<endl;

			cout<<"Please Enter which type of Sandwich would you like to order ?: ";
			cin>>choice1;
			switch(choice1)
			{
			case 1:
			{
				cout<<"Please Enter Quantity : ";
				cin>>quantity;
				cout<<"Your Total Bill is "<<sobj.club(quantity)<<endl;
			}
			break;
			case 2:
			{
				cout<<"Please Enter Quantity : ";
				cin>>quantity;
				cout<<"Your Total Bill is "<<sobj.crispy(quantity)<<endl;
			}
			break;
			case 3:
			{
				cout<<"Please Enter Quantity : ";
				cin>>quantity;
				cout<<"Your Total bill is "<<sobj.veg(quantity)<<endl;
			}
			break;
			default:
			{
				cout<<"Invalid Choice."<<endl;
			}
			}
		}
		break;

		case 4:
		{
			cout<<"1) Paneer Roll Rs.130 "<<endl;
			cout<<"2) Chicken Roll Rs.160 "<<endl;
			cout<<"3) Egg Roll Rs.139 "<<endl<<endl;
			cout<<"Please Enter which type of Roll would you like to have ?: ";
			cin>>choice1;

			switch(choice1)
			{
				case 1:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<robj.paneer(quantity)<<endl;
				}
				break;
				case 2:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<robj.chickenr(quantity)<<endl;
				}
				break;
				case 3:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<robj.eggr(quantity)<<endl;
				}
				break;
				default:
				{
					cout<<"Invalid choice."<<endl;
				}
			}
		}
		break;

		case 5:
		{
			cout<<"1) Veg Biryani Rs.140 "<<endl;
			cout<<"2) Hydrabadi Biryani Rs.160 "<<endl;
			cout<<"3) Chicken Biryani Rs.180 "<<endl<<endl;

			cout<<"Please Enter which type of biryani would you like to have ?: ";
			cin>>choice1;

			switch(choice1)
			{
				case 1:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total bill is "<<biobj.vegbi(quantity)<<endl;
				}
				break;
				case 2:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is "<<biobj.hydrabadi(quantity)<<endl;
				}
				break;
				case 3:
				{
					cout<<"Please Enter Quantity : ";
					cin>>quantity;
					cout<<"Your Total Bill is "<<biobj.chickenbi(quantity)<<endl;
				}
				break;
				default :
				{
					cout<<"Invalid Choice."<<endl;
				}
			}
		}
		break;
		default :
		{
			cout<<"Invalid Choice."<<endl;
		}
	      }
		cout<<"Your Order will be delivered in 40 Minutes"<<endl;
		cout<<"Thank you Ordering From Tops Tech Fast Food"<<endl;
		cout<<"Would You like to order anything else ? Y / N : "<<endl;
		cin>>ch;
	}while(ch == 'y' || ch == 'Y');
	getch();
	return 0;
}
