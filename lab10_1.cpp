#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double prevbal,intrate,pay;
	cout << "Enter initial loan: ";
	cin >> prevbal;
	cout << "Enter interest rate per year (%): ";
    cin >> intrate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;


	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
    if(prevbal > 0 && intrate > 0 && pay > 0){
		for(int year = 1;;year++){
		double inter = prevbal*intrate / 100;
	    double total = prevbal + inter;
	    double newbal = total - pay;
		if(total > pay){
			cout << fixed << setprecision(2); 
	        cout << setw(13) << left << year; 
	        cout << setw(13) << left << prevbal;
	        cout << setw(13) << left << inter;
	        cout << setw(13) << left << total;
	        cout << setw(13) << left << pay;
	        cout << setw(13) << left << newbal;
	        cout << "\n";
		}
		else if(total <= pay){
			cout << fixed << setprecision(2); 
	        cout << setw(13) << left << year; 
	        cout << setw(13) << left << prevbal;
	        cout << setw(13) << left << inter;
	        cout << setw(13) << left << total;
	        cout << setw(13) << left << total;
	        cout << setw(13) << left << total-total;
	        cout << "\n";
			break;
		}
	    prevbal = newbal;
        } 
	}
	return 0;
}
