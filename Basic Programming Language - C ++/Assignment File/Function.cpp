#include <iostream>

using namespace std;

string SHOP[3] = {"FOOD", "SPORT" , "BOOK"};
string FOOD[3] = {"Pizza", "Sandwich", "Burger"};
string SPORT[3] = {"Basketball", "Football", "Badminton"};
string BOOK[3] = {"Power" , "The Power of Quiet", "Introvertion"};
string MyCart[3] = {};

int input1, input2 , input3;


void Shop(){
    string Shop[3] = SHOP[3];
    cout <<endl;
}

void Food(){
    string Food[3] = FOOD[3];
    cout << endl;
}

void Sport(){
    string Sport[3] = SPORT[3];
    cout << endl;
}

void Book(){
    string Book[3] = BOOK[3];
    cout << endl;
}

void mycart(){
    cout<<"\n\nYour Cart:";
    for(int i=0 ;i<5;i++)
        cout<<MyCart[i]<<", ";
    cout<<endl;

}

int main(){
    int input;
    cout << "\n======= WELCOME TO OUR SHOP:) ======= \n ";
    Shop();

    cout << "Choose Your Category!\nPress 1 : FOOD \nPress 2 : Sport  \nPress 3 : Book \nPress A : My Cart: \nYour answer: ";
    cin >> input;

    switch (input){
        case 1:
        Food();

        int input1;
        cout << "========================\n";
        cout << "Press 1: Pizza \nPress 2 : Sandwich \nPress 3: Burger \nYour answer: ";
        cin >> input1;
        switch (input1){
            case 1:
            cout <<  "========================\n" <<FOOD[0];
            MyCart[1] = FOOD[0];
            break;
            case 2:
            cout << "========================\n" <<FOOD[1];
            MyCart[1] = FOOD[1];
            break;
            case 3:
            cout << "========================\n" <<FOOD[2];
            MyCart[1] = FOOD[2];
            break;
        }

        case 2:
        Sport(); 

        int input2;
        cout << "========================\n";
        cout << "Choose your book: \nPress 1: Power \nPress 2: The Power of Quiet \nPress 3: Introvertion \nYour answer: ";
        cin >> input2;
        switch (input2){
            case 1:
            cout << "========================\n" << BOOK[0];
            MyCart[2] = BOOK[0];
            break;
            case 2:
            cout << "========================\n" <<BOOK[1];
            MyCart[2] = BOOK[1];
            break;
            case 3:
            cout << "========================\n" <<BOOK[2];
            MyCart[2] = BOOK[2];
            break;
        }

        case 3:
        Sport(); 

        int input3;
        cout << "========================\n";
        cout << "Choose your sport: \nPress 1 : Basketball \nPress 2 : Football \nPress 3 : Badminton \nYour answer:" ;
        cin >> input3;
        switch (input3){
            case 1:
            cout << "========================\n" <<SPORT[0];
            MyCart[3] = SPORT[0];
            break;
            case 2:
            cout <<  "========================\n" <<SPORT[1];
            MyCart[3] = SPORT[1];
            break;
            case 3:
            cout <<  "========================\n" <<SPORT[2];
            MyCart[3] = SPORT[2];
            break;
        }
        
        cout << "\n========================";
        mycart();
        cout << "\n========================";
        break;


        
    }

}
