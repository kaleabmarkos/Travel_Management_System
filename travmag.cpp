#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management{

    public:
      Management()
      {
        mainMenu();
      }
};

class Details{
    public:

      static string name, gender;
      int phone_no;
      int age;
      string add;
      static int cid;
      char arr[100];



      void information()
      {
        cout<< "\n Enter the customer id: ";
        cin>>cid;
        cout<<"\n Enter name: ";
        cin>>name;
        cout<<"\n Enter age: ";
        cin>>age;
        cout<<"\n Enter Address: ";
        cin>>add;
        cout<<"\n Gender: ";
        cin>>gender;
        cout<<"Your details are saved\n"<<endl;
      }

};

int Details ::cid;
string Details::gender;
string Details::name;

class registration
{

   public:
      static int choice;
      int cho1;
      int back;
      static float ch;

      void flights()
      {
        string flight[] = {"NY", "FL", "GA","LA"}; 
      for(int i = 0; i<4; i++)
      {
        cout << (i+1)<< ".flight to" << flight[i]<<endl;
      }

      cout << "Welcome to the airlines."<< endl;
      cout<< "Press the number of the country of which you want to book the flight: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
      {
        cout << "_______________WELCOME TO NEWYORK___________________" << endl;
       
       cout << "Following are the flights \n"<< endl;
       cout << "1 - 234 - NY"<<endl;
       cout << "\t10 - 20 - 2023   8:00am  6hrs  700$"<<endl;
       cout << "1 - 456 - NY"<<endl;
       cout << "\t10 - 21 - 2023   10:00am  6hrs  600$"<<endl;
       cout << "1 - 987 - NY"<<endl;
       cout << "\t10 - 22 - 2023   8:00pm  6hrs  500$"<<endl;

       cout<< "\n Select the flight you want to book : ";
       cin>>cho1;

       if(cho1 == 1){
         cho1 = 700;
         cout<< "You have successfully booked a flight to NYC 234"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else if(cho1 == 2){
         cho1 = 600;
         cout<< "You have successfully booked a flight to NYC 456"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
      else if(cho1 == 3){
         cho1 = 500;
         cout<< "You have successfully booked a flight to NYC 987"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else{
        cout<< "Invalid input, shifting to prev menu"<< endl;
        flights();
       }
      cout << "Press any to go back to main menu"<< endl;
      cin>>back;
      if(back == 1)
      {
        mainMenu();
      }
      else{
        mainMenu();
              }
      }

      break;

      case 2:
      {
cout << "_______________WELCOME TO FLORIDA___________________" << endl;
       
       cout << "Following are the flights \n"<< endl;
       cout << "1 - 234 - FL"<<endl;
       cout << "\t10 - 20 - 2023   8:00am  6hrs  700$"<<endl;
       cout << "1 - 456 - FL"<<endl;
       cout << "\t10 - 21 - 2023   10:00am  7hrs  600$"<<endl;
       cout << "1 - 987 - FL"<<endl;
       cout << "\t10 - 22 - 2023   8:00pm  6hrs  500$"<<endl;

       cout<< "\n Select the flight you want to book : ";
       cin>>cho1;

       if(cho1 == 1){
         cho1 = 700;
         cout<< "You have successfully booked a flight to FL 234"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else if(cho1 == 2){
         cho1 = 600;
         cout<< "You have successfully booked a flight to FL 456"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
      else if(cho1 == 3){
         cho1 = 500;
         cout<< "You have successfully booked a flight to FL 987"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else{
        cout<< "Invalid input, shifting to prev menu"<< endl;
        flights();
       }
      cout << "Press any to go back to main menu"<< endl;
      cin>>back;
      if(back == 1)
      {
        mainMenu();
      }
      else{
        mainMenu();
              }
      }

      break;

      case 3:
      {
        cout << "_______________WELCOME TO GEORGIA___________________" << endl;
       
       cout << "Following are the flights \n"<< endl;
       cout << "1 - 234 - GA"<<endl;
       cout << "\t10 - 20 - 2023   8:00am  6hrs  700$"<<endl;
       cout << "1 - 456 - GA"<<endl;
       cout << "\t10 - 21 - 2023   10:00am  6hrs  600$"<<endl;
       cout << "1 - 987 - GA"<<endl;
       cout << "\t10 - 22 - 2023   8:00pm  6hrs  500$"<<endl;

       cout<< "\n Select the flight you want to book : ";
       cin>>cho1;

       if(cho1 == 1){
         cho1 = 700;
         cout<< "You have successfully booked a flight to GA 234"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else if(cho1 == 2){
         cho1 = 600;
         cout<< "You have successfully booked a flight to GA 456"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
      else if(cho1 == 3){
         cho1 = 500;
         cout<< "You have successfully booked a flight to GA 987"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else{
        cout<< "Invalid input, shifting to prev menu"<< endl;
        flights();
       }
      cout << "Press any to go back to main menu"<< endl;
      cin>>back;
      if(back == 1)
      {
        mainMenu();
      }
      else{
        mainMenu();
              }
      }

    break;

    case 4:
    {
        cout << "_______________WELCOME TO LOS ANGELES___________________" << endl;
       
       cout << "Following are the flights \n"<< endl;
       cout << "1 - 234 - NY"<<endl;
       cout << "\t10 - 20 - 2023   8:00am  6hrs  700$"<<endl;
       cout << "1 - 456 - NY"<<endl;
       cout << "\t10 - 21 - 2023   10:00am  6hrs  600$"<<endl;
       cout << "1 - 987 - NY"<<endl;
       cout << "\t10 - 22 - 2023   8:00pm  6hrs  500$"<<endl;

       cout<< "\n Select the flight you want to book : ";
       cin>>cho1;

       if(cho1 == 1){
         ch = 700;
         cout<< "You have successfully booked a flight to LA 234"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else if(cho1 == 2){
         cho1 = 600;
         cout<< "You have successfully booked a flight to LA 456"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
      else if(cho1 == 3){
         cho1 = 500;
         cout<< "You have successfully booked a flight to LA 987"<<endl;
         cout<< "Tickets back at the menu" <<endl;
       }
       else{
        cout<< "Invalid input, shifting to prev menu"<< endl;
        flights();
       }
      cout << "Press any to go back to main menu"<< endl;
      cin>>back;
      if(back == 1)
      {
        mainMenu();
      }
      else{
        mainMenu();
              }
      }

     break;

     default:
     cout << "Those are the flights we have for the week."<<endl;
     mainMenu();
      break;
      }

      }

};

       float registration::ch;
       int registration::choice;


       class Ticket : public registration, Details
       {
      
      public:
       
        void Bill()
        {
            string destination="";
           ofstream outf("Records.txt");
           {
            outf<<"____________C++ Airlines_____________"<<endl;
            outf<<"____________Tickets_______________"<<endl;
            outf<<"____________________________________"<<endl;

            outf<<"Customer ID: " <<Details::cid<<endl;
            outf<<"Customer Name: "<<Details::name<<endl;
            outf<<"Customer Gender: "<<Details::gender<<endl;
            outf<<"\tDescription" <<endl<<endl;

            if(registration::cho1==1)
            {
                destination = "NY";
            }
            else if(registration::cho1==2)
            {
                destination = "FL";
            }
              else if(registration::cho1==3)
            {
                destination = "GA";
            }
              else if(registration::cho1==4)
            {
                destination = "LA";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Filght cost: \t\t"<<registration::ch<<endl;
           }
        outf.close();
        }

        void displayBill()
        {
            ifstream ifs("record.txt");
            {
                if(!ifs)
                {
                    cout<< "File error!" << endl;
                }
                while (!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                }
                
            }
            ifs.close();
        }

       };
      



void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    
    cout<<"\t          C++ Airlines \n" << endl;
    cout<<"\t___________Main Menu_____________"<<endl;

    cout<<"\t_________________________________"<<endl;
    cout<<"|\t\t\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details  \t"<<endl;
    cout<<"\t|\t Press 2 for flight Registration      \t"<<endl;
    cout<<"\t|\t Press 3 for flight Registration      \t"<<endl;
    cout<<"\t|\t Press 4 to Exit                      \t"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t___________________________________________"<<endl;

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Ticket t;
    Details d;
    registration r;
    

    switch(lchoice)
    {
        case 1:
        {
            cout<<"______________Customers_______________\n"<<endl;
            d.information();
            cout<<"Press any number to go back to Main Menu";
            cin>>back;

            if(back == 1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        break;

        case 2:
        {
            cout<<"_________Book a flight here___________\n"<<endl;
            r.flights();
        }
        break;

        case 3:
        {
         cout<<"_____Get your Ticket_____\n"<<endl;
         t.Bill();

         cout<<"Your ticket is printed and ready to go\n"<<endl;
         cout<<"Press 1 to display your ticket ";

         cin>>back;

         if(back == 1)
         {
            t.displayBill();
            cout<< "Press any key to go back to main menu: ";
            cin>>back;
            if(back ==1)
            {
                mainMenu();
            }
            else{
                mainMenu();
            }
            
         }
         else{
            mainMenu();
         }
    }

    break;

    case 4:
    {
        cout << "\n\n\t___________Thank you___________"<<endl;
    }
    break;
    default:
    {
        cout<<"Invalid Input. Try again!\n"<<endl;
        mainMenu();
    
    }

}
}

