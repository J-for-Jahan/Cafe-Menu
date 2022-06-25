#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


struct menuitem //definition of a struct to store data about resturant
{
       string menulist;
       double price;
};
menuitem menu[8]; //Instance of a struct to store data of 7 resturant items
void getdata(); //prototype of a function to loads data about the items in struct
void showdata(); // prototype of a function show the loaded data
void selectItems(); //prototype of a function  to select the items
void cal(); //prototype of a function to calculate the bill
int c[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

int main()
{
       double t;
       getdata(); //Calling of a function to get load the data
       showdata();//calling of a function to display data
       selectItems(); //calling of a function select the items from the menu
       cal(); //calling of a function to calculate the bill
       //system("pause");
       return 0;

}
void getdata() //a function to get load the data
{
       menu[1].menulist = "Plain Egg";
       menu[1].price = 15.00;
       menu[2].menulist = "Omelet";
       menu[2].price = 15.00;
       menu[3].menulist = "Paratha";
       menu[3].price = 12.00;
       menu[4].menulist = "French Toast";
       menu[4].price = 20.99;
       menu[5].menulist = "Fruit Basket";
       menu[5].price = 120.49;
       menu[6].menulist = "Coffee";
       menu[6].price = 50.00;
       menu[7].menulist = "Tea";
       menu[7].price = 20.00;

}
void showdata() //a function to display menu
{
       cout << "Breakfast items offered by the restaurant are" << endl;
       cout << 1 << "\t" << menu[1].menulist << setw(12) << "RS " << menu[1].price << endl;
       cout << 2 << "\t" << menu[2].menulist << setw(15) << "RS " << menu[2].price << endl;
       cout << 3 << "\t" << menu[3].menulist << setw(14) << "RS " << menu[3].price << endl;
       cout << 4 << "\t" << menu[4].menulist << setw(9) << "RS " << menu[4].price << endl;
       cout << 5 << "\t" << menu[5].menulist << setw(9) << "RS " << menu[5].price << endl;
       cout << 6 << "\t" << menu[6].menulist << setw(15) << "RS " << menu[6].price << endl;
       cout << 7 << "\t" << menu[7].menulist << setw(18) << "RS " << menu[7].price << endl;

}
void selectItems() //function select the items from the menu
{
       int ch,quantity;
       char con;
       do{
              cout << "Enter your choice :";
              cin >> ch; //takes the choice from the user to select the item
              cout << "Enter the Quantity :";
              cin >> quantity;
              switch (ch)
              {
              case 1:
              {
                     c[1] = c[1] + quantity;
                     cout << "You have Selected :" << menu[1].menulist << endl;

                     break;
              }
              case 2:
              {
                     c[2] = c[2] + quantity;
                     cout << "You have Selected :" << menu[2].menulist << endl;

                     break;
              }
              case 3:
              {
                     c[3] = c[3] + quantity;
                     cout << "You have Selected :" << menu[3].menulist << endl;

                     break;
              }
              case 4:
              {
                     c[4] = c[4] + quantity;
                     cout << "You have Selected :" << menu[4].menulist << endl;

                     break;
              }
              case 5:
              {
                     c[5] = c[5] + quantity;
                     cout << "You have Selected :" << menu[5].menulist << endl;

                     break;
              }
              case 6:
              {
                     c[6] = c[6] + quantity;
                     cout << "You have Selected :" << menu[6].menulist << endl;

                     break;
              }
              case 7:
              {
                     c[7] = c[7] + quantity;
                     cout << "You have Selected :" << menu[7].menulist << endl;


                     break;
              }
              default:
                     cout << "invalid input" << endl;
              }
              cout << "to select more items (y/n)";
              cin >> con;


       } while (con != 'n');
       cout << endl;
}
void cal()
{
       double total = 0, tax, due;
       cout << "------Welcome to Caf� international-----" << endl;
       for (int i = 1; i < 8; i++)
       {
              if (c[i] > 0)
              {
                     cout << c[i] << "\t" << menu[i].menulist << "   RS " << menu[i].price << endl;
                     total = total + (menu[i].price*c[i]);
              }

       }
       tax = total*0.17; //calculate the tax on the total price
       due = total + tax; //calculate the price after adding tax
       cout << "        Tax " << "\t" << tax << endl;
       cout << "-----------------------------------------------" << endl;
       cout << "Amount due      RS " << due << endl;
       cout << "-----------------------------------------------" << endl;


}
