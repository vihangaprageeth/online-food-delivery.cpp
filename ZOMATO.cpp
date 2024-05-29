//To see customer list...........Id = group1@123
//...............................password = 12345


#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>

using namespace std;

//this can use to calculate the bill and display order date and time

//char pizza[20],burger[20],drinks[20];
//string orderDate,orderTime;


class Pizza_Hut
{
	public:
    char name[20],adrs[20],email_id[30],itm[20],itm_typ[20],mob[15],pass[20],size[20],crust[20],payment[20];
    //char cdate[20],ctime[20];
    char feedback[20];
    int qnt=0;
	float bill=0,crustbill=0,sizebill=0;

    //To get customer details for order process (signup)

	void customer_information()
	{

            cout<<"\n\t\tSignup For Ordering : \n\n";
            cout<<"\t\tMobile NO : ";
            cin.ignore();
            gets(mob);

			cout<<"\t\tPassword : ";
            cin>>pass;
			cin.ignore();

            cout<<"\t\tName : ";
            gets(name);

			cout<<"\t\tAddress : ";
            gets(adrs);

            cout<<"\t\tEmail address : ";
            gets(email_id);

            u:

            int option=0;

            cout<<"\t\tPayment Mode: Cash On Delivery\n\n";
            cout<<"Press 1 to confirm your order - ";
            cin>>option;

            //this switch case use for confirm order or back into menu

           switch(option)
	   {
	 	case 1:
	 		strcpy(payment,"Cash On Delivery");
	 		cout<<"\n\t\t\t~~~~~~~:)Order Sucessfully Placed(:~~~~~~~\n";
	 		break;

		default:
		    cout<<"\n\n\t\tYour order is not confirm.\n";
		    cout<<"\t\tPress Enter to back into menu...!!!";
	 		break;
	   }


            //);
	}

	//this is locked area who only can access manager. Use for display customer informations

	void display_customer_info()
	{

		cout<<endl<<"\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<endl<<"\t\tMobile Number "<<"\t = "<<mob; //<<"\t\t\t"<<itm<<itm_typ;
		cout<<endl<<"\t\tName "<<"\t\t = "<<name; //<<"\t\t\t\t";
		//cout<<endl<<"\t\tTotal bill = Rs"<<bill<<" x "<<qnt<<" = Rs"<<bill*qnt;
		cout<<endl<<"\t\tAddress "<<"\t = "<<adrs;
		cout<<endl<<"\t\tEmail Address "<<"\t = "<<email_id; //<<"\t\t\t";
		cout<<endl<<"\t\tPayment Mode "<<"\t = "<<payment;
		cout<<endl<<"\n\t\tTotal bill is already sent to customer email.";
		cout<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	}

	char* get_mobile_no()
	{
		return mob;
	}

	char* get_Name()
	{
		return name;
	}

	char* get_Address()
	{
		return adrs;
	}

	char* get_Email_id()
	{
		return email_id;
	}

	int option,t=0;


//display menu to customer

 void menu()
 {

		int choice;

	cout<<"\t\t Menu Selection \n";
	cout<<"\t\t==================\n";
	cout<<"\t\t1: Pizza\n";
	cout<<"\t\t2: Burger\n";
	cout<<"\t\t3: Drinks\n";
	cout<<"\t\t4: Exit\n\n";
	cout<<"Let's start your order now - ";
	cin>>choice;
	cout<<"\n";


	//select pizza categories

	switch(choice)
	{
		case 1:

	cout<<"\t\tPizza Selection\n";
	cout<<"\t\t=================\n\n";
	cout<<"\t\t Pizza_list\t\t\tPersonal\t\tMedium\t\tLarge\t\tXtra_Large\n";
	cout<<"\t\t_________________\t\t_______\t\t\t_______\t\t_______\t\t__________\n\n";
	cout<<"\t\t1: Cheese Lovers\t\tRs 980\t\t\tRs 1930\t\tRs 3460\t\tRs 4120\t\t\n";
	cout<<"\t\t2: BBQ Chicken\t\t\tRs 1160\t\t\tRs 2090\t\tRs 3820\t\tRs 4460\t\t\n";
	cout<<"\t\t3: Sausage Delight\t\tRs 840\t\t\tRs 1560\t\tRs 2840\t\tRs 3150\t\t\n";
	cout<<"\t\t4: Veggie Supreme\t\tRs 1260\t\t\tRs 2300\t\tRs 3200\t\tRs 3850\t\t\n";
	cout<<"\t\t5: Not Intrested\n\n";
	cout<<"What is your favorite - ";
	cin>>option;
	cout<<"\n";


	//if you want to calculate the bill use this part

	   switch(option)
	   {
	 	case 1:
	 		//strcpy(pizza,"Cheese Lovers");
	 		//bill=?;
	 		break;
	 	case 2:
	 		//strcpy(pizza,"BBQ Chicken");
	 		//bill=?;
	 		break;
		case 3:
	 		//strcpy(pizza,"Sausage Delight");
	 		//bill=?;
	 		break;
		case 4:
	 		//strcpy(pizza,"Veggie Supreme");
	 		//bill=?;
	 		break;
	 	case 5:
		     menu();
			 break;
		default:
		    cout<<"\t\tYour choice is unvalid...!!!\n\n";
	 		menu();
	   }

	   //to get quantity

	    cout<<"\t\tEnter the quantity of Pizza You Want - ";
	    cin>>qnt;
	    cout<<"\n";
	 		//strcpy(itm,"Pizza");
	 		//strcpy(itm_typ,pizza);

	 		//pizza size selection part

	      t:

	      cout<<"\t\tSelect the size of PIZZA\n";
	      cout<<"\t\t===========================\n\n";
	      cout<<"\t\t1 :Personal\n";
	      cout<<"\t\t2 :Medium\n";
	      cout<<"\t\t3 :Large\n";
	      cout<<"\t\t4 :Xtra_Large\n\n";
	      cout<<"Enter your choice - ";
	      cin>>option;
	      cout<<"\n";

	      switch(option)
	   {
	 	case 1:
	 		//strcpy(size,"Personal");
	 		//sizebill=?;
	 		break;
	 	case 2:
	 		//strcpy(size,"Medium");
	 		//sizebill=?;
			break;
		case 3:
	 		//strcpy(size,"Large");
	 		//sizebill=?;
			break;
		case 4:
	 		//strcpy(size,"Xtra_Large");
	 		//sizebill=?;
			break;
		default:
		    cout<<"\t\tYour choice is unvalid...!!!\n\n";
	 		goto t;
	   }


	   //select additional crust

			int option;

			 c:

	cout<<"\t\tNeed special Crust\n";
	cout<<"\t\t===================\n\n";
	cout<<"\t\t Crust_list\t\t\tPrice_cost\n";
	cout<<"\t\t ___________\t\t\t___________\n";
	cout<<"\t\t1: Fresh Pan\t\t\tRs 250\n";
	cout<<"\t\t2: Triple Layer Cheese\t\tRs 300\n";
	cout<<"\t\t3: With Tomato Sauce\t\tRs 120\n";
	cout<<"\t\t4: No Need\n\n";
    cout<<"Select your crust - ";
	cin>>option;
	cout<<"\n";

	   switch(option)
	   {
	 	case 1:
	 		//strcpy(crust,"Fresh Pan");
	 		//crustbill=?;
	 		break;
	 	case 2:
	 		//strcpy(crust,"Triple Layer Cheese");
	 		//crustbill=?;
	 		break;
		case 3:
	 		//strcpy(crust,"With Tomato Sauce");
	 		//crustbill=?;
	 		break;
	 	case 4:
	 		cout<<"\t\tOrder Has Been Sucessfully Placed...!!!\n";
		     //crustbill=0;
			 break;
		default:
		    cout<<"\t\tYour choice is unvalid...!!!\n\n";
	 		goto c;
	   }


	break;


	//select burger categories

	case 2:
	{

			int option;

	cout<<"\t\tBurger Selection\n";
	cout<<"\t\t====================\n\n";
	cout<<"\t\t Burger_list \t\t\tPrice\n";
	cout<<"\t\t_____________\t\t\t_______\n\n";
	cout<<"\t\t1: Beef Burger\t\t\tRs 2450\n";
	cout<<"\t\t2: Spicy Chiken Burger\t\tRs 1960\n";
	cout<<"\t\t3: Cheese Burger\t\tRs 1560\n";
	cout<<"\t\t4: Fish Burger\t\t\tRs 1400\n";
	cout<<"\t\t5: Veggie Burger\t\tRs 980\n";
	cout<<"\t\t6: Not Intrested\n\n";
	cout<<"What is your favorite - ";
	cin>>option;
	cout<<"\n";

	   switch(option)
	   {
	 	case 1:
	 		//strcpy(burger,"Beef Burger");
	 		//bill=?;
	 		break;
	 	case 2:
	 		//strcpy(burger,"Spicy Chiken Burger");
	 		//bill=?;
			break;
		case 3:
	 		//strcpy(burger,"Cheese Burger");
	 		//bill=?;
			break;
		case 4:
	 		//strcpy(burger,"Fish Burger");
	 		//bill=?;
	 		break;
		case 5:
	 		//strcpy(burger,"Veggie Burger");
	 		//bill=?;
	 		break;
	 	case 6:
		     menu();
			 break;
		default:
		    cout<<"\t\tYour choice is unvalid...!!!\n\n";
	 		menu();
	   }
	    cout<<"\t\tEnter the burger quantity - ";
	 		cin>>qnt;
	 		//strcpy(itm,"Burger");
	 		//strcpy(itm_typ,burger);
	}
	break;


	//select drinks categories

    case 3:
  {

			int option;

	cout<<"\t\tDrinks Selection\n";
	cout<<"\t\t===================\n\n";
	cout<<"\t\t Drinks_list\t\t\tPrice\n";
	cout<<"\t\t_____________\t\t\t_______\n\n";
	cout<<"\t\t1: Vanila Milk Shake\t\tRs 900\n";
	cout<<"\t\t2: Hot chocolate\t\tRs 850\n";
	cout<<"\t\t3: Pepsi 1.5l\t\t\tRs 380\n";
	cout<<"\t\t4: Sprite 1.5l\t\t\tRs 450\n";
	cout<<"\t\t5: Coca Cola 2l\t\t\tRs 600\n";
	cout<<"\t\t6: Not Intrested\n\n";
	cout<<"What is your favorite - ";
	cin>>option;
	cout<<"\n";

	   switch(option)
	   {
	 	case 1:
	 		//strcpy(beverg,"Vanila Milk Shake");
	 		//bill=80;
	 		break;
	 	case 2:
	 		//strcpy(beverg,"Hot chocolate");
	 		//bill=90;
	 		break;
		case 3:
	 		//strcpy(beverg,"Pepsi 1.5l");
	 		//bill=95;
	 		break;
		case 4:
	 		//strcpy(beverg,"Sprite 1.5l");
	 		//bill=100;
	 		break;
		case 5:
	 		//strcpy(beverg,"Coca Cola 2l");
	 		//bill=110;
	 		break;
	 	case 6:
	 		cout<<"\t\tHave look on another items...\n\n";
		     menu();
			 break;
		default:
		    cout<<"\t\tYour choice is unvalid...!!!\n\n";
	 		menu();
	   }

	    cout<<"\t\tEnter the beverg quantity - ";
	 		cin>>qnt;
	 		//strcpy(itm,"Drinks");
	 		//strcpy(itm_typ,drinks);
	}
	break;

	case 4:
		exit (0);

	default:
		cout<<"\t\tYour choice is unvalid...!!!\n\n";
		menu();
		break;
}
}
};

//save above all selection and customer details to file

fstream file;
Pizza_Hut phut;

//customer interface

 main_page()
{

	    int n;

		cout<<"\n\t\t\t\t\t\t ZOMATO - KANDY \n";

		cout<<"\n\t\t\t\t A leader in the online food delivery industry ... \n";

		cout<<"\n   1.Menu List         \n";

		cout<<"   2.Customer list (Manager Access Only)     \n";

		cout<<"   3.Special Offers        \n";

		cout<<"   4.Customer Feedback      \n";

		cout<<"   5.Exit              \n\n";

        cout<< "What do you looking for - ";
		cin>>n;

		cout<<endl;

		return (n);

}

//saving all customer data to file

void save_customer_data()

{
	file.open("file.dat",ios::out|ios::app);
	phut.customer_information();
	file.write((char*)&phut,sizeof(phut));
	file.close();
	cout<<endl<<endl<<"Order Has Been Sucessfully Placed...";
	getchar();
}

//manager can access part (locked for anyothers)

void display_customer_list()

{
	t:

	system("cls");
	char id[20];
	char password[20];

	cout<<"\n\t\t\tManager Access Only :";
	cout<<"\n\t\t\t===================== :";

	cout<<"\n\t\t\tEnter The ID :\n\t\t\t";
	cin>>id;

	cout<<"\n\t\t\tEnter The Password :\n\t\t\t";
	cin>>password;

	if(strcmp(id,"group1@123")==0 && strcmp(password,"12345")==0)
	{
		cout<<"\n\t\t\t\t\tSuccessful Login\n";
	}

	else
	{
		cout<<"\n\t\t\tInvalid Access Retry:\n";
		getch();
		goto t;
	}

	system("cls");

	cout<<"\n\t\t\t\t================================\n\t\t\t\t\tDetails Of Customer\n\t\t\t\t================================\n";

	file.open("file.dat",ios::in);

	while(file.read((char*)&phut,sizeof(phut)))
	{
		phut.display_customer_info();

	}

	file.close();
	getch();
	system("cls");
}

//display offers for customers

void special_offer()
{
    cout<<"\tMonday Offers\n";
    cout<<"\t================\n";
    cout<<"\t\t1. Cyber Saving - Buy 2 Cheese Lover Large pizza and Rs. 1000 off\n";
    cout<<"\t\t2. My Box Lite - Coca Cola 2l + BBQ Chiken personal pizza * 2 for Rs. 2000\n";
    cout<<"\t\t3. My Box Pro - Buy any Xtra_large pizza + Sprite 1.5l + Hot Chocolate and get Rs. 1500 off\n\n";

    cout<<"\tWednesday Offer\n";
    cout<<"\t================\n";
    cout<<"\t\t1. Cyber Saving - Buy 2 Sausage Delight pizza and Rs. 800 off\n";
    cout<<"\t\t2. My Box Lite - Coca Cola 2l + Sausage Delight personal pizza * 2 for Rs. 1800\n";
    cout<<"\t\t3. My Box Pro - Buy any Xtra_large pizza and get free Coca Cola 2l\n\n";

    cout<<"\tFriday Offer\n";
    cout<<"\t===============\n";
    cout<<"\t\t1. Cyber Saving - Buy 4 Veggie Supreme pizza and Rs. 2000 off\n";
    cout<<"\t\t2. My Box Lite - Sprite 1.5l + Sausage Delight personal pizza for Rs. 1000\n";
    cout<<"\t\t3. My Box Pro - Buy any Xtra_large pizza and Get any personal pizza free\n\n";

    cout<<"\tWeekend Hot Offer\n";
    cout<<"\t===================\n";
    cout<<"\t\t1. Double Deal - Any Large pizza + Pepsi * 2 for Rs. 1600\n";
    cout<<"\t\t2. Family Fun - Buy any Xtra_large pizza and Get Free Hot Chocolate\n";
    cout<<"\t\t3. Kids Meals - Any Medium pizza * 2 + Vanila Milk Shake for Rs. 1800\n\n";

}

//customer feedback section

void customer_feedback()
{
    char feedback[20];
    cout<<"\tWe'd love to hear your thoughts\n\n";
    cout<<"\t====================================\n\n";
    cout<<"\tThank you for shopping with us.\n";
    cout<<"\tEnter your valueble feedback \n\n\t";
    cin>>feedback;

    gets(feedback);

    cout<<"\n\n\t Your feedback will greatly help us to further improve our service.\n\n";

}

// main function (calling every functions)

int main()

{
	int p;
	char mob_no[15];

	lbl:
	p=main_page();
	switch(p)
	{

		case 1:
			phut.menu();
			save_customer_data();
			system("cls");
		    goto lbl;

		case 2:
			system("cls");
			display_customer_list();
		    goto lbl;

		case 3:
			special_offer();
			goto lbl;

		case 4:
		    customer_feedback();
		    goto lbl;

		case 5:
		    exit (0);

		default:
			printf("\t\tYou have Entered Invalid Option Please Retry\n");
		    goto lbl;

	}

	return 0;

}
