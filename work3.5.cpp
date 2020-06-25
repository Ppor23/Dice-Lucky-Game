#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{
	int main=0, creditScore=3,Rand=0,total=0,Score=0, resetScore=0,resetCredit=0, creditStart=3 ;
	char guess = 'L',again='Y';
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	do
	{
		cout<<"Dice Lucky Game!"<<endl;
		cout<<"Admin Mode"<<endl;
		cout<<"1)Play Game Mode"<<endl;
		cout<<"2)Setting Game"<<endl;
		cout<<"3)Shut Down"<<endl;
		cout<<"Select:";
		cin>>main;
		switch(main)
		{
			case 1 :
				//game 1.1
				system("cls");
				cout<<"============================"<<endl;
				cout<<"|                          |"<<endl;
				cout<<"|      WELCOME!            |"<<endl;
				cout<<"|      Dice Lucky Game!    |"<<endl;
				cout<<"|                          |"<<endl;
				cout<<"============================"<<endl<<endl;
				cout << " >>> To Play New Game"<<endl;
           	 	SetConsoleTextAttribute(hStdOut, 11);
           	 	system(" pause");
          	 	SetConsoleTextAttribute(hStdOut, 15);
          	  	system("cls");
            
           	 //game 1.2
            	cout << " ======================="<<endl;
            	cout << " |                     |"<<endl;
            	cout << " |      WELCOME !      |"<<endl;
            	cout << " |";
            	SetConsoleTextAttribute(hStdOut, 14);                                              
            	cout << " You Have "<<creditScore<< " Credit ! ";
            	SetConsoleTextAttribute(hStdOut, 7);
            	cout << "|"<<endl;
            	cout << " |                     |"<<endl;
            	cout << " ======================="<<endl<<endl;
           	 	cout << " >>> To Play New Game"<<endl;
            	SetConsoleTextAttribute(hStdOut, 11);
            	system(" pause");
            	SetConsoleTextAttribute(hStdOut, 15);
            	 do
             		{
	             		srand (time(NULL));
	             		Rand = rand() % 6 + 1;
	                	system("cls");         
	                
	                	//LOW/High
	                	cout << endl<<"       ?    ?    ?     "<<endl<<endl;
	                	cout << "       LOW or HIGH      "<<endl;
	                	cout << "    ( 3-11)  (12-18)    "<<endl<<endl;
	                	cout <<endl<< " >>> Your Select LOW / HIGH ?"<<endl;
	                	SetConsoleTextAttribute(hStdOut, 11);
	                	cout << " Select (L/H) : ";
	                	cin >> guess;              
	                	SetConsoleTextAttribute(hStdOut, 15);
	                
	                	// Random Number
	                	system("cls");
	                	cout <<endl<< "      "<<Rand<<"    "<<Rand<<"    "<<Rand<<endl<<endl;
	                	total=Rand+Rand+Rand;
	                	SetConsoleTextAttribute(hStdOut, 10);
	                	cout << "         [ "<<total<<" ] "<<endl;
	                	SetConsoleTextAttribute(hStdOut, 15);
	                
	                	//Random Low
	                	if ((guess=='L')||(guess=='l'))
	                	{              
	                		if (total<=11)
	                 	   	{
	                 	       SetConsoleTextAttribute(hStdOut, 10);
	                 	       cout << "     LOW ";
	                 	       SetConsoleTextAttribute(hStdOut, 15);
	                 	       cout << " or ";
	                 	       cout << " HIGH "<<endl;
	                 	       cout << "    ( 3-11)  (12-18)   "<<endl<<endl;
	                 	       cout << "You Won !!";
	                 	       creditScore +=1;
	                 	       SetConsoleTextAttribute(hStdOut, 10);
	                 	       cout << " Your Score [+1]"<<endl<<endl;
	                 	       SetConsoleTextAttribute(hStdOut, 15);
	                 	       cout << " Score "<<Score<< " / " <<creditScore<<" Credit"<<endl;                          
	                  	  	}
	                    	else if(total>=11)
	                    	{
	                    		cout<<"     LOW";
	                    		cout<<" or ";
	                    		SetConsoleTextAttribute(hStdOut, 10);
	                        	cout << " HIGH "<<endl;
	                        	SetConsoleTextAttribute(hStdOut, 7);
	                        	cout << "    ( 3-11)  (12-18)   "<<endl<<endl;
	                        	cout << " You Fail !!";
	                        	creditScore -=1;
	                        	SetConsoleTextAttribute(hStdOut, 12);
	                       	 	cout << " Your Credit [-1]"<<endl<<endl;
	                        	SetConsoleTextAttribute(hStdOut, 15);
	                        	cout << " Score "<<Score<< " / " <<creditScore<<" Credit"<<endl;
							}
							cout << " >>> To Play Next Game "<<endl;
	                		(hStdOut, 11);
	                		system(" pause");
	                		SetConsoleTextAttribute(hStdOut, 15);
	                		system("cls");
	                }
	                
	                //Random High
	                else if ((guess=='H')||(guess=='h'))
	                {
	                    if (total>=11)
	                    {
	                        cout << "     LOW ";
	                        cout << " or ";
	                        SetConsoleTextAttribute(hStdOut, 10);
	                        cout << " HIGH "<<endl;
	                        SetConsoleTextAttribute(hStdOut, 15);
	                        cout << "    ( 3-11)  (12-18)   "<<endl<<endl;
	                        cout << " WOW ! You Won !!";
	                        Score +=1;
	                        SetConsoleTextAttribute(hStdOut, 10);
	                        cout << " Your Score [+1]"<<endl<<endl;
	                        SetConsoleTextAttribute(hStdOut, 15);
	                        cout << " Score "<<Score<< " / " <<creditScore<<" Credit"<<endl;
	                    }
	                    else if (total<=11)
	                    {
	                        SetConsoleTextAttribute(hStdOut, 10);
	                        cout << "     LOW ";
	                        SetConsoleTextAttribute(hStdOut, 15);
	                        cout << " or ";                
	                        cout << " HIGH "<<endl;
	                        cout << "    ( 3-11)  (12-18)   "<<endl<<endl;
	                        cout << " Ahh ! You Fail !!";
	                        SetConsoleTextAttribute(hStdOut, 12);
	                        creditScore -=1;
	                        cout << " Your Credit [-1]"<<endl<<endl;
	                        SetConsoleTextAttribute(hStdOut, 15);
	                        cout << " Score "<<Score<< " / " <<creditScore<<" Credit"<<endl;
	                    }
	                	cout << " >>> To Play Next Game "<<endl;
	               		SetConsoleTextAttribute(hStdOut, 11);
	                	system(" pause");
	                	SetConsoleTextAttribute(hStdOut, 15);                                           
	                } 
						else 
						{
						system("cls");
						break;
						}
					}
						while(creditScore>0);
	            		system("cls");
	            		
	        // Admin Setting
	        case 2 :    
	            do
	            {
	                system("cls");
	                cout << " Admin Setting "<<endl<<endl;
	                cout << " Player Credit : ";
	                SetConsoleTextAttribute(hStdOut, 14);
	                cout <<" Current [ "<<creditScore<<" ] "<<endl;
	                SetConsoleTextAttribute(hStdOut, 15);
	                cout << " >>> New Setting"<<endl<<endl;
	                SetConsoleTextAttribute(hStdOut, 11);
	                cout << " Enter New Credit (Number): ";
	                cin >> creditStart;
	                creditScore = creditStart;
	                SetConsoleTextAttribute(hStdOut, 15);
	                cout << endl;
	                cout << " >>>Again YES/NO"<<endl;
	                SetConsoleTextAttribute(hStdOut, 11);
	                cout <<" You select (Y/N) : "; 
	                cin >> again;
	                SetConsoleTextAttribute(hStdOut, 15);
	            } 
				while((again == 'Y') || (again == 'y'));         
	            system("cls");             
	            break;             
	       case 3 :    
            		cout << " Thank For Playing"<<endl;  
            		break;         
    	   default :
            		cout<< " Error !"<<endl;
            		break;     
        }      
    } 
	while( (main == 1) || (main == 2) );     
    return 0;
}
