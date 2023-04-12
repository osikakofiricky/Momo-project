#include <iostream>
#include <string>

using namespace std;


int main() {
	bool authenticated = false;
	string pin="1000";
	string password;
	float balance =1000;
	bool run =true;
	int option;
	while (run){
		
		
		cout<<"ENTER PIN OR PRESS 0 TO EXIT"<<endl;
		
		for (int x=0; x<3; x++){
			
			cin>>password;
			
			if (password==pin){
				authenticated=true;
				break;
			} else if (password=="0"){
				run=false;
				break;
			} else{
				if (x==2) {
					run=false;
					break;
				} else {
					cout<<"TRY AGAIN OR PRESS 0 TO EXIT:"<<endl;
				}
			}
		}

         if (authenticated) {
         	cout<< " PRESS 1 TO RESET PIN"<< endl;
         	cout<<"PRESS 2 TO CHECK BALANCE"<< endl;
         	cout<<"PRESS 3 TO SEND MONEY"<< endl;
         	cout<<"PRESS 4 TO DEPOSIT MONEY"<< endl;
         	cout<<"PRESS 0 TO EXIT"<< endl;
         	cin>> option;
         	if (option==0){
         		run=false;
         	} else if (option==1){
         		cout<<"ENTER NEW PIN:"<<endl;
         		cin>> password;
         		pin=password;
         		cout<<"YOUR NEW PIN "<< pin<<endl;
         	}else if (option==2){
         		cout<<"YOUR CURRENT BALANCE IS GHS"<<balance<<endl;
         	}else if (option==3){
         		string number;
         		float amount;
         		cout<<"ENTER THE NUMBER YOU WANT TO SEND TO:" << endl;
         		cin>> number;
         		cout<<"ENTER THE AMOUNT YOU WANT TO SEND:"<< endl;
         		cin>> amount;
         		if (amount>balance) {
         			cout<<"YOU ACCOUNT BALANCE IS NOT ENOUGH FOR THIS TRANSACTION."<< endl;
         		} else {
         			balance -= amount;
         			cout<<"GHS"<< amount<<"HAS BEEN SENT TO"<< number<<endl;
         			cout<<" YOUR CURRENT BALANCE IS GHS" << balance << endl;
				 }
			} else if (option ==4){
				float amount;
				cout << "ENTER THE AMOUNT TO BE DEPOSITED"<< endl;
				cin>> amount;
				balance += amount;
				cout<<"TRANSACTION SUCESSFUL" << endl;
				cout<<"YOUR BALANCE IS NOW GHS" <<balance << endl;
			}
    	}
			 
    }
			 return 0;
}
