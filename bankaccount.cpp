#include <iostream>
using namespace std;
class BankAccount {
public:
    BankAccount(string name, int accountNumber, double initialBalance)
	 {
        cout << "Account created for " << name << "." << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Initial Balance: $" << initialBalance << endl;
    }
    ~BankAccount() 
	{
        cout << "Account closed." << endl;
    }
};
int main() {
    BankAccount account("Fouzu", 68612, 600.00);
return 0;
}