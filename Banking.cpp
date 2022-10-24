#include <iostream>
using namespace std;
int main ()
{
	//variables
	int user;
	long long accno = 10182002;
	int pin;
	int pin2;
	int pin3;
	int cpin = 101802;
	int opin;
	int npin;
	int command;
	int deposit;
	int withdraw;
	int othaccno;
	int transfer;
	int utils;
	int eamount;
	int wamount;
	int iamount;
	int pamount;
	int lamount;
	int balance = 10000;
	string accname;
	string othname;
	string compname;
	string purpose;
	
	//body
	cout << "======= MYBANK =======" << endl;
	cout << "Have a good day" << endl;
	cout << "Please select your account type" << endl;
	cout << "[1] New Account" << endl;
	cout << "[2] Existing Account" << endl;
	cout << "--------------------" << endl;
	cout << "Command: ";
	cin >> user;
	switch (user)
	{
		case 1:
			cout << "======= SIGN-UP =======" << endl;
			cout << "Please Enter The Following" << endl;
			cout << "Acc. Name: ";
			cin >> accname;
			cout << "6 Digits PIN No.: ";
			cin >> pin;
			cout << "======= PIN VERIFIER =======" << endl;
			for (int i=1; i<=3; i++)
			{
				cout << "Verify your PIN No." << endl;
				cout << "PIN No.       : ";
				cin >> pin2;
				if (pin2 == pin)
				{
					cout << "===========================" << endl;
					cout << "Your PIN no. is now granted" << endl;
					cout << "Your Account is now Created" << endl;
					cout << "Thank you for choosing MYBANK" << endl;
					break;
				}
				else
				{
					cout << "== ATTEMPTS (" << i << "/3)==" << endl;
					if (i == 3)
					{
						cout << "Unfortunately, your PIN no. that you entered recently during the registrarion is not matched," << endl;
						cout << "Thank you for using this banking services" << endl;
					}
					else
					{
						cout << "Wrong Pin: Please Try Again" << endl;
					}
				}
			}
			break;
		case 2:
			{
				cout << "======= SIGN-IN =======" << endl;
				cout << "Please Enter your existing PIN no." << endl;
				for (int j=1; j<=3; j++)
				{
					cout << "6 Digits PIN No.: ";
					cin >> pin;
					if (pin == cpin)
					{
						cout << "======= MYBANK BANKING SERVICES =======" << endl;
						cout << "Have a Good Day: Axis" << endl;
						cout << "Acc No.: " << accno << endl;
						cout << "Please Select your services" << endl;
						cout << "[1] Deposit" << endl;
						cout << "[2] Withdraw" << endl;
						cout << "[3] Balance Inquiry" << endl;
						cout << "[4] Transfer" << endl;
						cout << "[5] Payments" << endl;
						cout << "[6] Change PIN" << endl;
						cout << "[7] Sign-Out" << endl;
						cout << "--------------------" << endl;
						cout << "Command: ";
						cin >> command;
						switch (command)
						{
							case 1:
								cout << "======= DEPOSIT =======" << endl;
								cout << "Please Enter your Deposit Amount" << endl;
								cout << "Amount : ";
								cin >> deposit;
								cout << "======= SUCCESS =======" << endl;
								cout << "New Balance: " << balance + deposit << endl;
								cout << "Thank you for using this banking services" << endl;
								break;
							case 2:
								cout << "======= WITHDRAW =======" << endl;
								cout << "Please Enter your Withdraw Amount" << endl;
								cout << "Amount : ";
								cin >> withdraw;
								if (balance < withdraw)
								{
									cout << "======= DENIED =======" << endl;
									cout << "Sorry, This is not enough" << endl;
									cout << "Thank you for using this banking services" << endl;
								}
								else
								{
									cout << "======= SUCCESS =======" << endl;
									cout << "New Balance: " << balance - withdraw << endl;
									cout << "Thank you for using this banking services" << endl;
								}
								break;
							case 3:
								cout << "======= BALANCE INQUIRY =======" << endl;
								cout << "Current Balance: " << balance  << endl;
								cout << "Thank you for using this banking services" << endl;
								break;
							case 4:
								cout << "======= TRANSFER =======" << endl;
								cout << "Please Anter the Following" << endl;
								cout << "From   : Axis " << endl;
								cout << "Acc no.: " << accno << endl;
								cout << "To     : ";
								cin >> othname;
								cout << "Acc No.: ";
								cin >> othaccno;
								cout << "Please Enter your Transfer Amount" << endl;
								cout << "Amount : ";
								cin >> transfer;
								cout << "======= SUCCESS =======" << endl;
								cout << "Amt. of Transfer: " << transfer << endl;
								cout << "Send to: " << othname << endl;
								cout << "Acc no.: " << othaccno << endl;
								cout << "Service Charge: 15" << endl;
								cout << "--------------------" << endl;
								cout << "New Balance: " << balance - transfer - 15 << endl;
								cout << "Thank you for using this banking services" << endl;
								break;
							case 5:
								{
									cout << "======= PAYMENT =======" << endl;
									cout << "You may pay the following below" << endl;
									cout << "[1] Electricity" << endl;
									cout << "[2] Water" << endl;
									cout << "[3] Internet" << endl;
									cout << "[4] Paybills" << endl;
									cout << "[5] Loans" << endl;
									cout << "--------------------" << endl;
									cout << "Command: ";
									cin >> utils;
									switch (utils)
									{
										case 1:
											cout << "======= ELECTRICITY =======" << endl;
											cout << "Present Current Balance: PHP 500" << endl;
											cout << "Please Enter Your Amount to Pay" << endl;
											cout << "Note: You can exceed for more advantage" << endl;
											cout << "Amount :";
											cin >> eamount;
											if (eamount >= 500)
											{
												cout << "======= SUCCESS =======" << endl;
												cout << "Monthy Pay - Electricity: 500" << endl;
												cout << "Amount: " << eamount << endl; 
												cout << "New Balance: " << balance - eamount << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
											else
											{
												cout << "======= DENIED =======" << endl;
												cout << "Sorry, This is not Enough" << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
										case 2:
											cout << "======= WATER =======" << endl;
											cout << "Present Current Balance: PHP 450" << endl;
											cout << "Please Enter Your Amount to Pay" << endl;
											cout << "Note: You can exceed for more advantage" << endl;
											cout << "Amount :";
											cin >> wamount;
											if (wamount >= 450)
											{
												cout << "======= SUCCESS =======" << endl;
												cout << "Monthy Pay - Water: 450" << endl;
												cout << "Amount: " << wamount << endl; 
												cout << "New Balance: " << balance - wamount << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
											else
											{
												cout << "======= DENIED =======" << endl;
												cout << "Sorry, This is not Enough" << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
										case 3:
											cout << "======= INTERNET =======" << endl;
											cout << "Present Current Balance: PHP 800" << endl;
											cout << "Please Enter Your Amount to Pay" << endl;
											cout << "Note: You can exceed for more advantage" << endl;
											cout << "Amount :";
											cin >> iamount;
											if (iamount >= 800)
											{
												cout << "======= SUCCESS =======" << endl;
												cout << "Monthy Pay - Internet: 800" << endl;
												cout << "Amount: " << iamount << endl; 
												cout << "New Balance: " << balance - iamount << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
											else
											{
												cout << "======= DENIED =======" << endl;
												cout << "Sorry, This is not Enough" << endl;
												cout << "Thank you for using this banking services" << endl;
												break;
											}
										case 4:
											cout << "======= PAYAMOUNT =======" << endl;
											cout << "Please Enter Your Amount to Pay" << endl;
											cout << "Amount : ";
											cin >> pamount;
											cout << "Company Name: ";
											cin >> compname;
											cout << "======= SUCCESS =======" << endl;
											cout << "Payment - TO: " << compname << " : " << pamount << endl;
											cout << "Amount: " << pamount << endl; 
											cout << "New Balance: " << balance - pamount << endl;
											cout << "Thank you for using this banking services" << endl;
											break;
										case 5:
											cout << "======= LOAN =======" << endl;
											cout << "Please Enter Your Amount to Pay" << endl;
											cout << "Amount : ";
											cin >> lamount;
											cout << "Loan Type: ";
											cin >> purpose;
											cout << "======= SUCCESS =======" << endl;
											cout << "Loan - Purpose: " << purpose << " : " << lamount << endl;
											cout << "Amount: " << lamount << endl; 
											cout << "New Balance: " << balance - lamount << endl;
											cout << "Thank you for using this banking services" << endl;
											break;
									}
								break;	
								}
							case 6:
								{
									cout << "======= PIN CHANGE =======" << endl;
									cout << "Enter your Old PIN No." << endl;
									for (int k=1; k<=3; k++)
									{
										cout << "PIN no.: ";
										cin >> opin;
										if (opin == cpin)
										{
											cout << "Enter your New PIN No." << endl;
											cout << "PIN no.: ";
											cin >> npin;
											cout << "======= PIN VERIFIER =======" << endl;
											cout << "Please verify your new pin" << endl;
											for (int l=1; l<=3; l++)
											{
												cout << "Pin no.: ";
												cin >> pin3;
												if (pin3 == npin)
												{
													cout << "===========================" << endl;
													cout << "Your PIN no. has been changed" << endl;
													cout << "Thank You for using this banking services" << endl;
													break;
												}
												else
												{
													cout << "== ATTEMPTS (" << l << "/3)==" << endl;
													{
														if (l==3)
														{
															cout << "Unfortunately, your PIN no. that you entered recently during the pin change is not matched," << endl;
															cout << "Thank you for using this banking services" << endl;
															break;
														}
														else
														{
															cout << "Please Try Again" << endl;
														}
													}
												}
											}
										}
										else
										{
											cout << "== ATTEMPTS (" << k << "/3)==" << endl;
											cout << "Sorry, you have entered your wrong PIN no." << endl;
											if (k == 3)
											{
												cout << "Unfortunately our services has been terminated becasue you have entered a false PIN no." << endl;
												cout << "Thank You for using this banking services" << endl;
												break;
											}
											else
											{
												cout << "Please Try Again" << endl;
											}
										break;
										}
									break;
									}
								break;	
								}
							case 7:
								{
									cout << "Thank you for using this banking services" << endl;
									break;
								}
						}
						break;
					}
					else
					{
						cout << "== ATTEMPTS (" << j << "/3)==" << endl;
						cout << "Sorry, you have entered your wrong PIN no." << endl;
						if (j == 3)
						{
							cout << "Unfortunately our services has been terminated becasue you have entered a false PIN no." << endl;
							cout << "Thank You for using this banking services" << endl;
							break;
						}
						else
						{
							cout << "Please Try Again" << endl;
						}
					}
			
				}
			}
			
	}
}

