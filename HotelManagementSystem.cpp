#include<iostream>
using namespace std;
int main()
{
    int quant; // which stand for quantity
    int choice;

    // these variable will hold the quantity of food item 
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0; 
    // the variable which will hold the value of the number of food item that have been sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0; 
    // these variable which store the total price of each of the food item or rooms
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

    cout<<"\n\t Quantity of item we have";
    cout<<"\n Rooms Available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken-Roll: ";
    cin>>Qchicken;

    m:  // label
    cout<<"\n\t\t\t Please select from the menu option";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken-Roll";
    cout<<"\n7) Information regarding sales and collection "; // this optionn would be use by the owner of the hotel to check the total collection for the day
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter Your Choice! ";
    cin>>choice;

    switch (choice)
    {
        case 1:
            cout<<"\n\n Enter the number you want: ";
            cin>>quant;
            if(Qrooms-Srooms>=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+quant*1200;  // assume price of single room is 1200
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
                break;
            }
        case 2:
            cout<<"\n\n Enter Pasta Quantity: ";
            cin>>quant;
            if(Qpasta-Spasta>=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+quant*250;  // assume price of single pasta is 1200
                cout<<"\n\n\t\t"<<quant<<" pasta is the order! ";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
                break;
            }
        case 3:
            cout<<"\n\n Enter Burger Quantity: ";
            cin>>quant;
            if(Qburger-Sburger>=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+quant*180;  // assume price of single burger is 1200
                cout<<"\n\n\t\t"<<quant<<" Burger is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<"burger remaining in hotel ";
                break;
            }
        case 4:
            cout<<"\n\n Enter Noodle Quantity: ";
            cin>>quant;
            if(Qnoodles-Snoodles>=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+quant*140;  // assume price of single noodle is 1200
                cout<<"\n\n\t\t"<<quant<<" noodle is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodles remaining in hotel ";
                break;
            }
        case 5:
            cout<<"\n\n Enter shake Quantity: ";
            cin>>quant;
            if(Qshake-Sshake>=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+quant*120;  // assume price of single room is 1200
                cout<<"\n\n\t\t"<<quant<<" shake is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Shake remaining in hotel ";
                break;
            }
        case 6:
            cout<<"\n\n Enter Chicken Quantity: ";
            cin>>quant;
            if(Qchicken-Schicken>=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+quant*150;  // assume price of single room is 1200
                cout<<"\n\n\t\t"<<quant<<" Chicken-Roll is the order!";
                break;
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"Chiken-Roll remaining in hotel ";
                break;
            }
        case 7:
        cout<<"\n\t\tDetails of sales and collection ";
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
        cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
        cout<<"\n\n Total Room collection for the day: "<<Total_rooms;

        cout<<"\n\n Number of Pasta we had: "<<Qpasta;
        cout<<"\n\n Number of Pasta we sold "<<Spasta;
        cout<<"\n\n Remaining Pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total Pasta collection for the day: "<<Total_pasta;

        cout<<"\n\n Number of Burger we had: "<<Qburger;
        cout<<"\n\n Number of Burger we sold: "<<Sburger;
        cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
        cout<<"\n\n Total Burger collection for the day: "<<Total_burger;

        cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold: "<<Snoodles;
        cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;

        cout<<"\n\n Number of Shakes we had: "<<Qshake;
        cout<<"\n\n Number of Shake we sold: "<<Sshake;
        cout<<"\n\n Remaining Shakes: "<<Qshake-Sshake;
        cout<<"\n\n Total Shake collection for the day: "<<Total_shake;

        cout<<"\n\n Number of Chiken-Roll we had: "<<Qchicken;
        cout<<"\n\n Number of Chicken-Roll we sold: "<<Schicken;
        cout<<"\n\n Remaining Chicken-Roll: "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-Roll collection for the day: "<<Total_chicken;

        cout<<"\n\n\n Total Collection of the Day: "<<Total_rooms+Total_burger+Total_chicken+Total_noodles+Total_pasta+Total_shake;
        break;



        // exit statement is used to terminate the program to shif the control out of the program

        case 8: 
            exit(0);
        default:
            cout<<"Please select the number mentioned above!"; 
    }
    goto m;   // is used to jump another part of program having a specified label. JUMP STATEMENT


}