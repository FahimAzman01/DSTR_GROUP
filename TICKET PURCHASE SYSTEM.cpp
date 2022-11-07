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
	cout << "\n * SUBWAY TICKET PURCHASE SYSTEM * \n";
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
		char bpp[100];
		char dpp[100];
		int d,m,y;
		void getDetail()
		{
			cout << "\n Route Between >>>>>>>>>>>>>>>>>>>>  Price  <<<<<<<<<<<<<<<<<<<< Route Between \n";
        	cout << "\n Titiwangsa - PWTC >>>>>>>>>>>>>>>> RM 0.40 <<<<<<<<<<<<<<<< PWTC - Titiwangsa \n";
        	cout << "\n PWTC - Sultan Ismail >>>>>>>>>>>>> RM 0.80 <<<<<<<<<<<<< Sultan Ismail - PWTC \n";
        	cout << "\n Sultal Ismail - Majilis Jamek >>>> RM 0.80 <<<<< Majilis Jame - Sultal Ismail \n";
        	cout << "\n Majilis Jamek - Plaza Rakyat >>>>> RM 0.60 <<<<<< Plaza Rakyat - Majilis Jame \n";
        	cout << "\n Plaza Rakyat - Hang Tuah >>>>>>>>> RM 1.00 <<<<<<<<< Hang Tuah - Plaza Rakyat \n";
        	cout << "\n Hang Tuah - Pudu >>>>>>>>>>>>>>>>> RM 0.50 <<<<<<<<<<<<<<<<< Pudu - Hang Tuah \n";
        	cout << "\n Pudu - Chan Sow Lin >>>>>>>>>>>>>> RM 0.50 <<<<<<<<<<<<<  Pudu - Chan Sow Lin \n";
			cout << "\n **** Add New Purchase Details ****\n";
			cout << "Passenger Name : ";
			cin >> tname;
			cout << "Passenger Age : ";
			cin >> tno;
			cout << "Current Station :  ";
			cin >> bpp;
			cout << "Arrival Station : ";
			cin >> dpp;
			cout << "Ticket Price :  ";
			cin >> bp;
			cout << "Pay By Cash or Card : ";
			cin >> dest;
			cout << "Date of Travel. \n";
			cout << "Day : ";
			cin >> d;
			cout << "Month : ";
			cin >> m;
			cout << "Year : ";
			cin >> y;
		}
		void displaydetail()
		{
			cout << "\n |Name : " << tname << "\t" << "|Age : " << tno << "\t" << "|Current Station : " << bpp << "\t" << "|Arrival Station : " << dpp <<"\t"<< "|Ticket Price : " << bp << "\t" << "|Cash or Card : " << dest <<"\t";
			cout << "|Date of Travel : " << d << "-" << m << "-" << y << "\n";
		}
};


    char Passenger;
    Detail a;
	fstream f;
	cout << "\n ********** SUBWAY TICKET PURCHASE SYSTEM ********** \n";
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
        	cout << "\n SP06   ==   Masjid Jamek \n";
        	cout << "\n SP07   ==   Plaza Rakyat \n";
        	cout << "\n SP08   ==   Hang Tuah \n";
        	cout << "\n SP09   ==   Pudu \n";
        	cout << "\n SP10   ==   Chan Sow Lin \n";
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
            cout << "\n Sation Code : SP06.   "<<"\t"<<"Sation Name: Masjid Jamek.  "<<"\t"<<"Address: Masjid Jamek, Kelana Jaya Line, 50100, Kuala Lumpur . \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP07.   "<<"\t"<<"Sation Name: Plaza Rakyat.  "<<"\t"<<"Address: Kuala Lumpur City Centre, 50150 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP08.   "<<"\t"<<"Sation Name: Hang Tuah.     "<<"\t"<<"Address: Jalan Pudu, 55100 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP09.   "<<"\t"<<"Sation Name: Pudu.          "<<"\t"<<"Address: Jalan Pudu, 55100 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n Sation Code : SP10.   "<<"\t"<<"Sation Name: Chan Sow Lin.  "<<"\t"<<"Address: Fraser Business Park, 55200 Kuala Lumpur. \n"<<"\t";
            cout << "\n======================================================================================================================\n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            f.close();
            break;
        case '3':
            cout << "\n **************** The Details Between Two Selected Cities ****************\n";
            cout << "\n 1. The Total Travel Distance Required Between Cities is 7.9 kilometers. \n";
            cout << "\n 2. The Total Travel Expenses Required Between Cities is 4.6 Rm.. \n";
            cout << "\n 3. The Total Travel Time Tequired Between Cities is 39 Minutes. \n";
            cout << "\n";
            cout << "\n";
            cout << "\n";
            f.close();
            break;
    
    
        case '4':
        	cout << "\n ******************************* Ticket Details ******************************\n";
        	cout << "\n Route Between >>>>>>>>>>>>>>>>>>>>  Price  <<<<<<<<<<<<<<<<<<<< Route Between \n";
        	cout << "\n Titiwangsa - PWTC >>>>>>>>>>>>>>>> RM 0.40 <<<<<<<<<<<<<<<< PWTC - Titiwangsa \n";
        	cout << "\n PWTC - Sultan Ismail >>>>>>>>>>>>> RM 0.80 <<<<<<<<<<<<< Sultan Ismail - PWTC \n";
        	cout << "\n Sultal Ismail - Majilis Jamek >>>> RM 0.80 <<<<< Majilis Jame - Sultal Ismail \n";
        	cout << "\n Majilis Jamek - Plaza Rakyat >>>>> RM 0.60 <<<<<< Plaza Rakyat - Majilis Jame \n";
        	cout << "\n Plaza Rakyat - Hang Tuah >>>>>>>>> RM 1.00 <<<<<<<<< Hang Tuah - Plaza Rakyat \n";
        	cout << "\n Hang Tuah - Pudu >>>>>>>>>>>>>>>>> RM 0.50 <<<<<<<<<<<<<<<<< Pudu - Hang Tuah \n";
        	cout << "\n Pudu - Chan Sow Lin >>>>>>>>>>>>>> RM 0.50 <<<<<<<<<<<<<  Pudu - Chan Sow Lin \n";
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
        	cout << "\n*********************************  Transaction History  *********************************\n";
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
