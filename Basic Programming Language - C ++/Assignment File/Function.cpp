#include <iostream>

using namespace std;

void Shop(){
    string Shop[3] = {"FOOD", "SPORT" , "BOOK"};
    cout <<endl;
}

void Food(){
    string Food[3] = {"Pizza", "Sandwich", "Burger"};
    cout << endl;
}

void Sport(){
    string Sport[3] = {"Basketball", "Football", "Badminton"};
    cout << endl;
}

void Book(){
    string Book[3] = {"Power" , "The Power of Quiet", "Introvertion"};
    cout << endl;
}

int main(){
    int input;
    cout << "WELCOME TO OUR SHOP:)\n )";
    Shop();

    cout << "Press 1 for FOOD! \nPress 2 for Sport! \nPress 3 for Book!";
    cin >> input;

    switch (input){
        case 1:
        Food();

        int input1;
        cout << "Press 1 for Pizza \nPress 2 for Sandwich \nPress 3 Burger";
        cin >> input1;
        
    }

}
