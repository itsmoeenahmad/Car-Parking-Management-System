#include<iostream>
using namespace std;

int no_buses=0,no_cars=0,no_motorcycles=0,amount=0,countvehicle=0;

int menu()
{
   int choice;
   cout<<"*********************************************"<<endl;
   cout<<"ENTER 1 FOR BUS : CHARGES ARE 100 PKR"<<endl;	
   cout<<"ENTER 2 FOR CAR : CHARGES ARE 70 PKR"<<endl;
   cout<<"ENTER 3 FOR MOTORCYCLE : CHARGES ARE 50 PKR"<<endl;	
   cout<<"ENTER 4 FOR SHOWING RECORDS"<<endl;	
   cout<<"ENTER 5 FOR DELETING RECORDS"<<endl;	
   cout<<"ENTER 6 FOR EXIT"<<endl;
   cout<<"*********************************************"<<endl;	
   cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
   cin>>choice;	
   
   return choice;
}

void bus()
{
   no_buses++;
   amount = amount + 100;
   countvehicle++;
}

void car()
{
   no_cars++;
   amount = amount + 70;
   countvehicle++;
}

void motorcycle()
{
   no_motorcycles++;
   amount = amount + 50;
   countvehicle++;
}

void showdata()
{
   cout<<"***********************************"<<endl;
   cout<<"NO OF BUSES IN PARKING AREA :"<<no_buses<<endl;	
   cout<<"NO OF CARS IN PARKING AREA :"<<no_cars<<endl;
   cout<<"NO OF MOTORCYCLES IN PARKING AREA :"<<no_motorcycles<<endl;	
   cout<<"NO OF VEHICLES IN PARKING AREA :"<<countvehicle<<endl;	
   cout<<"TOTAL AMOUNT COLLECTION :"<<amount<<endl;	
   cout<<"ENTER 6 FOR EXIT"<<endl;
   cout<<"***********************************"<<endl;
}

void deletedata()
{
  no_buses=0;
  no_cars=0;
  no_motorcycles=0;
  amount=0;
  countvehicle=0;	
}

int main()
{
	int choice_ques;
	do
	{
	
	switch(menu())
	{
		case 1:
		{
			bus();
		}
		break;
		
		case 2:
		{
			car();
		}
		break;
		
		case 3:
		{
			motorcycle();
		}
		break;
		
		case 4:
		{
		    showdata();
		}
		break;
		case 5:
		{
			deletedata();
		}
		break;
		
		default:
			{
				cout<<"SORRY ! YOU ENTERED THE WRONG CHOICE , TRY AGAIN"<<endl;
			}
				
	}
	
	
	cout<<"ENTER 0 FOR ADDING ANOTHER VEHICLE || ENTER ANY NUMBER FOR EXIT "<<endl;
	cin>>choice_ques;
	
    
	}while(choice_ques==0);
	
    cout<<"THANK YOU FOR USING OUR SOFTWARE" ;
	
	return 0;
}
