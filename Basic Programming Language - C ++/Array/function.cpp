#include <iostream>

using namespace std;


int arr[5];

void userInput()
{
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

}

void print()
{
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    userInput();
    print();
    return 0;
}