
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
class Guess_game
{
       int player_choice;
       int secret_number;
       public:
	       Guess_game()
	       {
			srand(time(0));
			secret_number= 1+(rand()%100);
	       }
	       friend void Easy_level(Guess_game G);
	       friend void Intermediate_level(Guess_game G);
	       friend void Difficult_level(Guess_game G);
};
void Easy_level(Guess_game G)
{
	int choices=5;
	for(int i=0; i<5; i++)
	{
		cout<<"\nGuess Secret Number: ";
		cin>>G.player_choice;
		if(G.player_choice==G.secret_number)
		{
			cout<<"Congratulations!You won.\n"<<G.player_choice<<"is the secret number";
			cout<<"\nThanks for playing...";
			cout<<"\nchoose 4 to exit";
			break;
		}
		else
		{
			cout<<"\nBad Luck!\n "<<G.player_choice<<" is not the secret number";
			if(G.player_choice>G.secret_number)
			{
				cout<<"\nThe secret number is smaller then the player's choice.\nTry Again...";
			}
			else
			{
				cout<<"\nThe secret number is greater then the player's choice.\nTry Again...";
			}
		  }
		 choices--;
		 cout<<"\n"<<choices<<" choicesleft";
		if (choices==0)
		{
			cout<<"Better luck next time." ;
			cout<<"\n"<<G.secret_number<<" is the secret number..";
		}
	}
}
void Intermediate_level(Guess_game G)
{
	int choices=3;
	for(int i=0; i<3; i++)
	{
		cout<<"\nGuess Secret Number: ";
		cin>>G.player_choice;
		if(G.player_choice==G.secret_number)
		{
			cout<<"Congratulations!You won.\n"<<G.player_choice<<"is the secret number";
			cout<<"\nThanks for playing...";
			cout<<"\nchoose 4 to exit";
			break;
		}
		else
		{
			cout<<"\nBad Luck!\n "<<G.player_choice<<" is not the secret number";
			if(G.player_choice>G.secret_number)
			{
				cout<<"\nThe secret number is smaller then the player's choice.\nTry Again...";
			}
			else
			{
				cout<<"\nThe secret number is greater then the player's choice.\nTry Again...";
			}
		  }
		 choices--;
		 cout<<"\n"<<choices<<" choicesleft";
		if (choices==0)
		{
			cout<<"Better luck next time."  ;
			cout<<"\n"<<G.secret_number<<"is the secret number..";
		}
	}
}
void Difficult_level(Guess_game G)
{
	int choices=2;
	for(int i=0; i<2; i++)
	{
		cout<<"\nGuess Secret Number: ";
		cin>>G.player_choice;
		if(G.player_choice==G.secret_number)
		{
			cout<<"Congratulations!You won.\n"<<G.player_choice<<"is the secret number";
			cout<<"\nThanks for playing...";
			cout<<"\nchoose 4 to exit";
			break;
		}
		else
		{
			cout<<"\nBad Luck!\n "<<G.player_choice<<" is not the secret number";
			if(G.player_choice>G.secret_number)
			{
				cout<<"\nThe secret number is smaller then the player's choice.\nTry Again...";
			}
			else
			{
				cout<<"\nThe secret number is greater then the player's choice.\nTry Again...";
			}
		  }
		 choices--;
		 cout<<"\n"<<choices<<" choicesleft";
		if (choices==0)
		{
			cout<<"Better luck next time." ;
			cout<<"\n"<<G.secret_number<<"is the secret number..";
		}
	}
}
void main()
{
	int op;
	Guess_game G ;
	cout<<"\nWelcome to GuesstheNumber game!";
	cout<<"\nYou have to guess number between 1 to 100.";
	cout<<"\nYou have limited choice based on difficulty level you choose.";
	cout<<"\nDifficulty level:\n1.Easy\n2.Intermediate\n3.Difficult\n4.Exit";
	while(op!=4)
	{
		cout<<"\nEnter the Difficulty level:";
		cin>>op;
		switch(op)
		{
			case 1:
			{
				Easy_level(G);
				break;
			}
			case 2:
			{
				Intermediate_level(G);
				break;
			}
			case 3:
			{
				Difficult_level(G);
				break;
			}
			default:
			{
				cout<<"\nError!!Illegal Choice..."  ;
				break;
			}
		}

	}
clrscr();
getch();
}




