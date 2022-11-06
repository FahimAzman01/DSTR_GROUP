#include <iostream>
#include <fstream>
#include<stdio.h> 
#include<stdlib.h> 
#include<ctime>
using namespace std;
char f[10] = "f";
char s[10] = "s";
int addr, ad, flag, f1, d, m, i, amt;
float tamt;


int main() {
	char main;
	cout << "\n 1. Admin. \n";
    cout << "\n 2. Customer. \n";
    cout << "\n 3. Exit!! \n";
    cout << "\n Select An Option : ";
    cin >> main;
    int choice1; 
	do{
    switch (main) {
    	case '1':
        	
			
            break;
        case '2':
        	int choice; 
	do{
	
	class Detail
{
	public:
		int tno;
		char tname[100];
		int bp;
		char dest[100];
		int d,m,y;
		void getDetail()
		{
			cout << "\n **** Add New Purchase Details ****\n";
			cout << "Name: ";
			cin >> tname;
			cout << "Age ";
			cin >> tno;
			cout << "Ticket Price:  ";
			cin >> bp;
			cout << "Pay By Cash or Card: ";
			cin >> dest;
			cout << "Date of Travel\n";
			cout << "Day: ";
			cin >> d;
			cout << "Month: ";
			cin >> m;
			cout << "Year: ";
			cin >> y;
		}
		void displaydetail()
		{
			cout << "\n*********************************  Transaction History  *********************************\n";
		    cout << "\n|Name." << "\t" << "        |Age." << "\t" << "        |Ticket Price." << "\t" << "|Cash or Card."  <<"\t";
			cout << "        |Day" << "-" << "Month" << "-" << "Year" << "\n";
			cout << "|" << tname << "\t\t" << "|" << tno << "\t\t" << "|" << bp << "\t\t" << "|" << dest <<"\t\t\t";
			cout << "|" << d << "-" << m << "-" << y << "\n";
		}
};


    char Passenger;
    Detail a;
	fstream f;
	cout << "\n ****************** Welcome to LRT ****************** \n";
    cout << "\n 1. List of Subway Stations. \n";
    cout << "\n 2. Subway Stations Details. \n";
    cout << "\n 3. The Details Between Two Selected Cities. \n";
    cout << "\n 4. Display Ticket Details. \n";
    cout << "\n 5. Add Customer Purchase Information. \n";
    cout << "\n 6. Arrival Time From Departure City To Arrival City. \n";
    cout << "\n 7. View Purchase Transaction History. \n";
    cout << "\n 8. Exit!! \n";
    cout << "\nSelect An Option : ";
    cin >> Passenger;
    
    switch (Passenger) {
        case '1':
        	cout << "\n ******* Station List *******\n";
        	cout << "\n Code   ==   Station Name \n";
        	cout << "\n SP03   ==   Titiwangsa \n";
        	cout << "\n SP04   ==   PWTC \n";
        	cout << "\n SP05   ==   Sultan Ismail \n";
        	cout << "\n SP06   ==   Bandaraya \n";
        	cout << "\n SP07   ==   Masjid Jamek \n";
        	cout << "\n SP08   ==   Plaza Rakyat \n";
        	cout << "\n SP09   ==   Hang Tuah \n";
        	cout << "\n SP10   ==   Pudu \n";
        	cout << "\n SP11   ==   Chan Sow Lin \n";
        	cout << "\n";
        	cout << "\n";
        	cout << "\n";
        	f.close();
            break;
        case '2':
        	cout << "\n*****************************  ALL THE STATIONS DETAILS FROM TITIWANGSA TO CHAN SOW LIN  *****************************\n";
        	cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP03.   "<<"\t"<<"Sation Name: Titiwangsa.    "<<"\t"<<"Address: Lrt Station Titiwangsa, 53000 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP04.   "<<"\t"<<"Sation Name: PWTC.          "<<"\t"<<"Address: Chow Kit, 50350 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP05.   "<<"\t"<<"Sation Name: Sultan Ismail. "<<"\t"<<"Address: Chow Kit, 50350 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP06.   "<<"\t"<<"Sation Name: Bandaraya.     "<<"\t"<<"Address: Jln Raja Laut, City Centre, 50100 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP07.   "<<"\t"<<"Sation Name: Masjid Jamek.  "<<"\t"<<"Address: Masjid Jamek, Kelana Jaya Line, 50100, Kuala Lumpur . \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP08.   "<<"\t"<<"Sation Name: Plaza Rakyat.  "<<"\t"<<"Address: Kuala Lumpur City Centre, 50150 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP09.   "<<"\t"<<"Sation Name: Hang Tuah.     "<<"\t"<<"Address: Jalan Pudu, 55100 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP10.   "<<"\t"<<"Sation Name: Pudu.          "<<"\t"<<"Address: Jalan Pudu, 55100 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP11.   "<<"\t"<<"Sation Name: Chan Sow Lin.  "<<"\t"<<"Address: Fraser Business Park, 55200 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            f.close();
            break;
        case '3':
            cout << "\n **************** The Details Between Two Selected Cities ****************\n";
            cout << "\n 1. The Total Travel Distance Required Between Cities is 7.9 kilometers. \n";
            cout << "\n 2. The Total Travel Expenses Required Between Cities is 15 Rm.. \n";
            cout << "\n 3. The Total Travel Time Tequired Between Cities is 20 Minutes. \n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            f.close();
            break;
    
    
        case '4':
        	cout << "\n ******* Ticket Details *******\n";
        	cout << "\n Current Station  : Titiwangsa. \n";
        	cout << "\n Target Station   : Chan Sow Lin.\n";
        	cout << "\n Distance         : 7.9 kilometers.\n";
        	cout << "\n Ticket Price     : 15 Rm.\n";
        	cout << "\n";
        	cout << "\n";
        	cout << "\n";
        	f.close();
            break;
        case '5':
        	f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					a.getDetail();
					f.write((char *) & a,sizeof(a));
					f.close();
					cout << "\n";
					cout << "\n";
					cout << "\n";
            break;
        case '6':
        	cout << "\n **** Arrival Time From Departure City To Arrival City. ****\n";
        	cout << "\n Current Station  : Titiwangsa. \n";
        	cout << "\n Target Station   : Chan Sow Lin.\n";
        	cout << "\n Distance         : 7.9 kilometers.\n";
        	time_t t; 
            struct tm * tt; 
            time (&t); 
            tt = localtime(&t);
            cout << "\n Arrival Time = "<< asctime(tt)<<"\n";
            cout << "\n";
        	cout << "\n";
        	cout << "\n";
        	f.close();
					break;
					
        case '7':
        	f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
					f.seekg(0);
					while(f.read((char *) & a,sizeof(a)))
					{
					a.displaydetail();
					}
					f.close();
					cout << "\n";
					cout << "\n";
					cout << "\n";
            break;
        case '8':
        	exit;
        	
            break;
        default:
            cout << "Error!";
            break;
    }
}while(choice!=8);
            break;
        case '3':
        	exit;
        	
            break;
        default:
            cout << "Error!";
            break;
        }
    	
    	
    }while(choice1!=3);
	
	
	
	
	
	
	
	
	
	

	

    return 0;
}
