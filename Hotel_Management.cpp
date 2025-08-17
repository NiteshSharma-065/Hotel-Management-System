#include<bits/stdc++.h>
using namespace std;
int main(){
int quant;
int choice;
//QUANTITY
int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
//FOOD ITEMS SOLD 
int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
//TOTAL PRICE OF ITEMS 
int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

// Welcome screen
cout << "\n============================================\n";
cout << "     WELCOME TO GRAND HOTEL MANAGEMENT\n";
cout << "============================================\n";

cout<<"\n\t Quantity of items we have!!";
cout<<"\n Rooms available:";
cin>>Qrooms;
cout<<"\n Quantity of pasta:";
cin>>Qpasta;
cout<<"\n Quantity of burger:";
cin>>Qburger;
cout<<"\n Quantity of noodles:";
cin>>Qnoodles;
cout<<"\n Quantity of shake:";
cin>>Qshake;
cout<<"\n Quantity of chicken-roll:";
cin>>Qchicken;

// m:// we have labelled menu with m.
while(true){
    // --- Per customer billing variables ---
    int Crooms = 0, Cpasta = 0, Cburger = 0, Cnoodles = 0, Cshake = 0, Cchicken = 0;
    int CTotal_rooms = 0, CTotal_pasta = 0, CTotal_burger = 0, CTotal_noodles = 0, CTotal_shake = 0, CTotal_chicken = 0;
    int total = 0;

    while(true){
        // Menu
        cout << "\n================== HOTEL MENU ====================\n\n";
        cout << left << setw(4) << "1)" << "Rooms                - Rs.1200\n";
        cout << left << setw(4) << "2)" << "Pasta                - Rs.250\n";
        cout << left << setw(4) << "3)" << "Burger               - Rs.120\n";
        cout << left << setw(4) << "4)" << "Noodles              - Rs.140\n";
        cout << left << setw(4) << "5)" << "Shake                - Rs.120\n";
        cout << left << setw(4) << "6)" << "Chicken-roll         - Rs.150\n";
        cout << left << setw(4) << "7)" << "Print Customer Bill\n";
        cout << left << setw(4) << "8)" << "Sales Info\n";
        cout << left << setw(4) << "9)" << "Exit Program\n\n";
        cout << "===================================================\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                cout<<"\n\nEnter the number of rooms you want:";
                cin>>quant; 
                if(quant>=0){      
                    if(Qrooms-Srooms>=quant){
                        Crooms = Crooms+quant;
                        Srooms = Srooms+quant;
                        CTotal_rooms = CTotal_rooms+(quant*1200);
                        Total_rooms = Total_rooms+(quant*1200);
                        cout<<"\n\n\t\t"<<quant<<"Room(s) have been allotted to you!\n";
                    }                  
                    else{
                        cout<<"\n\tOnly"<<Qrooms-Srooms<<"Room(s) remaining in hotel\n";
                        break;
                    }
                }
                else{
                    cout<<"Not enough rooms!\n";
                }
                break;

            case 2:
                cout<<"\n\nEnter the Quantity of pasta:";
                cin>>quant;
                if(quant>=0){ 
                    if(Qpasta-Spasta>=quant){
                        Cpasta = Cpasta+quant;
                        Spasta = Spasta+quant;
                        CTotal_pasta = CTotal_pasta+(quant*250);
                        Total_pasta = Total_pasta+(quant*250);
                        cout<<"\n\n\t\t"<<quant<<"Pasta is the order!\n";
                    }
                    else{
                        cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel\n";
                        break;
                    }
                }
                else{
                    cout<<"Not enough pasta!\n";       
                }
                break;
        
            case 3:
                cout<<"\n\nEnter the Quantity of Burger:";
                cin>>quant;
                if(quant>=0){ 
                    if(Qburger-Sburger>=quant){
                        Cburger = Cburger+quant;
                        Sburger = Sburger+quant;
                        CTotal_burger = CTotal_burger+(quant*120);
                        Total_burger = Total_burger+(quant*120);
                        cout<<"\n\n\t\t"<<quant<<"Burger is the order!\n";
                    }
                    else{
                        cout<<"\n\tOnly"<<Qburger-Sburger<<"Burger remaining in hotel\n";
                        break;
                    }
                }
                else{
                    cout<<"Not enough burgers!\n";
                }
                break;

            case 4:
                cout<<"\n\nEnter the Quantity of Noodles:";
                cin>>quant;
                if(quant>=0){ 
                    if(Qnoodles-Snoodles>=quant){
                        Cnoodles = Cnoodles+quant;
                        Snoodles = Snoodles+quant;
                        CTotal_noodles = CTotal_noodles+(quant*140);
                        Total_noodles = Total_noodles+(quant*140);
                        cout<<"\n\n\t\t"<<quant<<"Noodle(s) is the order!\n";
                    }
                    else{
                        cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"Noodle(s) remaining in hotel\n";
                        break;
                    }
                }
                else{
                    cout<<"Not enough noodles!\n";
                }
                break;
        
            case 5:
                cout<<"\n\nEnter the Quantity of shake:";
                cin>>quant;
                if(quant>=0){ 
                    if(Qshake-Sshake>=quant){
                        Cshake = Cshake+quant;
                        Sshake = Sshake+quant;
                        CTotal_shake = CTotal_shake+(quant*120);
                        Total_shake = Total_shake+(quant*120);
                        cout<<"\n\n\t\t"<<quant<<"Shake is the order!\n";
                    }
                    else{
                        cout<<"\n\tOnly"<<Qshake-Sshake<<"Shake remaining in hotel\n";
                        break;
                    }
                }
                else{
                    cout<<"Not enough shakes!\n";
                }
                break;
        
            case 6:
                cout<<"\n\nEnter the Quantity of Chicken-roll:";
                cin>>quant;
                if(quant>=0){ 
                if(Qchicken-Schicken>=quant){
                        Cchicken = Cchicken+quant;
                        Schicken = Schicken+quant;
                        CTotal_chicken = CTotal_chicken+(quant*150);
                        Total_chicken = Total_chicken+(quant*150);
                        cout<<"\n\n\t\t"<<quant<<"Chicken-roll is the order!\n";
                    }
                    else{
                        cout<<"\n\tOnly"<<Qchicken-Schicken<<"Chicken-roll remaining in hotel\n";
                        break;
                    } 
                }
                else{
                    cout<<"Not enough chicken-rolls!\n";
                }
                break;

            case 7:
                cout << "\n--- CUSTOMER BILL ---\n\n";
                
                if (Crooms > 0) {
                    int sub = CTotal_rooms;
                    cout << "Rooms x " << Crooms << " = " << sub << "\n";
                    total += sub;
                }
                if (Cpasta > 0) {
                    int sub = CTotal_pasta;
                    cout << "Pasta x " << Cpasta << " = " << sub << "\n";
                    total += sub;
                }
                if (Cburger > 0) {
                    int sub = CTotal_burger;
                    cout << "Burger x " << Cburger << " = " << sub << "\n";
                    total += sub;
                }
                if (Cnoodles > 0) {
                    int sub = CTotal_noodles;
                    cout << "Noodles x " << Cnoodles << " = " << sub << "\n";
                    total += sub;
                }
                if (Cshake > 0) {
                    int sub = Total_shake;
                    cout << "Shake x " << Cshake << " = " << sub << "\n";
                    total += sub;
                }
                if (Cchicken > 0) {
                    int sub = CTotal_chicken;
                    cout << "Chicken-roll x " << Cchicken << " = " << sub << "\n";
                    total += sub;
                }
                cout << "------------------------------\n";
                cout << left << setw(12) << "TOTAL" << "Rs." << total << "\n";
                cout << "*******************************\n";
                goto end_customer;
                break;

            case 8:
                cout << "\n*************** SALES REPORT *****************\n";
                cout<<"\n\tDetails of Sales and Collection";
                cout<<"\n\n Number of Rooms we had: "<<Qrooms;
                cout<<"\n\n Number of Rooms we gave for rent: "<<Srooms;
                cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
                cout<<"\n\n Total Rooms collection for the day: "<<Total_rooms;

                cout<<"\n\n Quantity of Pastas we had: "<<Qpasta;
                cout<<"\n\n Quantity of Pastas we sold: "<<Spasta;
                cout<<"\n\n Remaining Pastas: "<<Qpasta-Spasta;
                cout<<"\n\n Total Pastas collection for the day: "<<Total_pasta;

                cout<<"\n\n Quantity of Burger we had: "<<Qburger;
                cout<<"\n\n Quantity of Burger we sold: "<<Sburger;
                cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
                cout<<"\n\n Total Burger collection for the day: "<<Total_burger;

                cout<<"\n\n Quantity of Noodles we had: "<<Qnoodles;
                cout<<"\n\n Quantity of Noodles we sold: "<<Snoodles;
                cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
                cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;

                cout<<"\n\n Quantity of Shakes we had: "<<Qshake;
                cout<<"\n\n Quantity of Shakes we sold: "<<Sshake;
                cout<<"\n\n Remaining Shakes: "<<Qshake-Sshake;
                cout<<"\n\n Total Shakes collection for the day: "<<Total_shake;

                cout<<"\n\n Quantity of Chicken-roll we had: "<<Qchicken;
                cout<<"\n\n Quantity of Chicken-roll we sold: "<<Schicken;
                cout<<"\n\n Remaining Chicken-roll: "<<Qchicken-Schicken;
                cout<<"\n\n Total Chicken-roll collection for the day: "<<Total_chicken<<"\n\n";
                cout << "************************************************\n";
                break;

            case 9:
                exit(0);//The exit() statement is used to terminate the program to shift the control out of the program or exit the program.

            default:
                cout<<"\n Please select the number mentioned above!\n";
            }
        }
end_customer:
    char nextCustomer;
    cout << "\nDo you want to serve next customer? (y/n): ";
    cin >> nextCustomer;
    if (nextCustomer == 'n' || nextCustomer == 'N') {
        break; // Exit the outer loop
    }
}

//After making a choice we again want to choose another option.
//we use goto here to transfer the control of the menu after making a choice so tha we can more choices.
// goto m;//goto is jump statement basically i.e. used to jump from one part to another part having a specified label.
return 0;
}

