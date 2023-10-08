#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char x;

    while(true)
    {

    cout<<"enter number one"<<endl;
    cin>>num1;

    cout<<"enter number two"<<endl;
    cin>>num2;
    cout<<"press a for additon"<<endl;
    cout<<"press b for substraction"<<endl;
    cout<<"press c for multiplication"<<endl;
    cout<<"press d for divisio"<<endl;
    cout<<"press e for remainder"<<endl;
    cin>>x;

    if(x=='a'){
        cout<<"The  sum = "<<num1 + num2<<endl;
    }
    else if(x=='b'){
        cout<<"The substraction = "<<num1 - num2<<endl;
    }
    else if(x=='c'){
        cout<<"The multiplication = "<<num1 * num2<<endl;
    }
    else if(x=='d'){
        cout<<"The division = "<<num1 / num2<<endl;
    }
    else if(x=='e'){
        cout<<"The remainder= "<<num1 % num2<<endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
    }
    
}
    return 0;
}