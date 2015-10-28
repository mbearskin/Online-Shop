// Programmer: Martha Winger-Bearskin    Date:2/22/13
// File Name:                            Class: cs 53 A
// Purpose:


#include <iostream>
using namespace std;


int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  
  //Constant Variables
  const string item1 = "Beer";
  const string item2 = "Spam";
  const string item3 = "DOHnuts";
  const string item4 = "Mustard Packets (100 ct)";
  const float price1 = 4.88;
  const float price2 = 1.77;
  const float price3 = 3.29;
  const float price4 = 2.50;
    
    
  //Variables
  int choice;
  float spendingMoney;
  float totalSpent= 0;
  int quantity;
  int numItem1 = 0;
  int numItem2 = 0;
  int numItem3 = 0;
  int numItem4 = 0;
  bool quit;
  char done;
  
  cout << "Welcome to Marge's online store" << endl;
  
  do
  {
    cout << "Enter the amount of money you have to spend today: ";
    cin  >> spendingMoney;
    if(spendingMoney < 0)
      cout << "Error you must have money to spend to shop here!!" << endl;
  } while (spendingMoney < 0);

  // menu
  do
  {
    
    cout << "\n\t\t Marge's Store" << endl;
    cout << "1. " << item1 << endl;
    cout << "2. " << item2 << endl;
    cout << "3. " << item3 << endl;
    cout << "4. " << item4 << endl;
    cout << "5. Quit"  << endl;
    cout << "What item would you like to purchase: ";
    cin >> choice;
    
    switch (choice)
    {
      case 1:
        do
        {
          cout << "\nEnter the number of " << item1 << " you would like: ";
          cin >> quantity;
          if (quantity < 0)
            cout << "\nError invalid entry...try again";
        }while(quantity < 0);
        if ((quantity* price1) <= spendingMoney)
        {
          numItem1 = quantity;
          spendingMoney -= (quantity * price1);
        }
        else
        {
          while(spendingMoney > price1)
          {
            spendingMoney -= price1;
            numItem1++;
          }
          cout << "You do not have enough money to buy " << quantity << " ";
          cout << item1 << "s." << endl;
          cout << "You can buy " << numItem1 << " " << item1 << endl;
        }
        if(numItem1)
          totalSpent += (numItem1 * price1);
        cout << "You have $" << spendingMoney << " left to spend." << endl;
      break;
      
      case 2:
        do
        {
          cout << "\nEnter the number of " << item2 << " you would like: ";
          cin >> quantity;
          if (quantity < 0)
            cout << "\nError invalid entry...try again";
        }while(quantity < 0);
        if ((quantity* price2) <= spendingMoney)
        {
          numItem2 = quantity;
          spendingMoney -= (quantity * price2);
        }
        else
        {
          while(spendingMoney > price2)
          {
            spendingMoney -= price2;
            numItem2++;
          }
          cout << "You do not have enough money to buy " << quantity << " ";
          cout << item2 << "s." << endl;
          cout << "You can buy " << numItem2 << " " << item2 << endl;
        }
        if(numItem2)
          totalSpent += (numItem2 * price2);
        cout << "You have $" << spendingMoney << " left to spend." << endl;
      break;
      
      case 3:
        do
        {
          cout << "\nEnter the number of " << item3 << " you would like: ";
          cin >> quantity;
          if (quantity < 0)
            cout << "\nError invalid entry...try again";
        }while(quantity < 0);
        if ((quantity* price3) <= spendingMoney)
        {
          numItem3 = quantity;
          spendingMoney -= (quantity * price3);
        }
        else
        {
          while(spendingMoney > price3)
          {
            spendingMoney -= price3;
            numItem3++;
          }
          cout << "You do not have enough money to buy " << quantity << " ";
          cout << item3 << "s." << endl;
          cout << "You can buy " << numItem3 << " " << item3 << endl;
        }
        if(numItem3)
          totalSpent += (numItem3 * price3);
        cout << "You have $" << spendingMoney << " left to spend." << endl;
      break;
        
      case 4:
        do
        {
          cout << "\nEnter the number of " << item4 << " you would like: ";
          cin >> quantity;
          if (quantity < 0)
            cout << "\nError invalid entry...try again";
        }while(quantity < 0);
        if ((quantity* price4) <= spendingMoney)
        {
          numItem4 = quantity;
          spendingMoney -= (quantity * price4);
        }
        else
        {
          while(spendingMoney > price4)
          {
            spendingMoney -= price4;
            numItem4++;
          }
          cout << "You do not have enough money to buy " << quantity << " ";
          cout << item4 << "s." << endl;
          cout << "You can buy " << numItem4 << " " << item4 << endl;
        }
        if (numItem4)
          totalSpent += (numItem4 * price4);
        cout << "You have $" << spendingMoney << " left to spend." << endl;
      break;
        
      case 5: // display summary and quit
        
        cout << "\n***Your Shopping summary***" << endl;
        cout << "Purchases:" << endl;
        if (numItem1 > 0)
          cout << numItem1 << " " << item1 << endl;
        if (numItem2 > 0)
          cout << numItem2 << " " << item2 << endl;
        if (numItem3 > 0)
          cout << numItem3 << " " << item3 << endl;
        if (numItem4 > 0)
          cout << numItem4 << " " << item4 << endl;
        cout << "Total Spent: $" << totalSpent << endl;
        cout << "Money Remaining: $" << spendingMoney << endl;
        cout << "Would you like to continue shopping? (y/n): ";
        cin >> done;
        switch(done)
        {
          case 'y':
          case 'Y' :
            quit = false;
            do
            {
              cout << "Enter the amount of money you have to spend today: ";
              cin  >> spendingMoney;
              if(spendingMoney < 0)
               cout << "Error you must have money to spend to shop here!!"
                << endl;
            } while (spendingMoney < 0);

            break;
          case 'n':
          case 'N':
            quit = true;
            break;
          default:
            cout << "Error...";
          }
      break;
        
      default:
        cout << "\nPlease enter a valid choice 1-5" << endl;
      
    }
  } while (!quit);
  
  cout << endl << "Thanks for shopping!!";
  return 0;
}

