#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int secret_No(int max)
{
    int No = rand() % max + 1;
    return No;
}

void selectLevel(int &max_no, int &max_attempts)
{
    int level_no;
    do
    {

        cout << "Select Level (easy = 1 ; medium = 2 ; hard = 3) : ";
        cin >> level_no;

        switch (level_no)
        {
        case 1:
            max_no = 100;
            max_attempts = 10;
            break;
        case 2:
            max_no = 250;
            max_attempts = 7;
            break;
        case 3:
            max_no = 500;
            max_attempts = 5;
            break;
        default:
            cout << "Enter valid level no !!" << endl;
        }
    } while (level_no != 1 && level_no != 2 && level_no != 3);
}



int playGame(int &secretNo,int max_no)
{
    char play;
    {
        cout << "Fail You Completed your attempts !!" << endl;
        cout << "Want to Play Again (y/n) : ";
    	cin >> play;
        if (play == 'y' || play == 'Y')
        {
            secretNo = secret_No(max_no);

            // count = 0;
            return 0;
        }
        else
        {
            return -1;
        }
    }
}
int game( int &count)
{
        int guessNo, max_no= 0 , play , max_attempts = 0 ;
        
        selectLevel(max_no, max_attempts);
       	int rem_attempts = max_attempts;

        int secretNo = secret_No(max_no);
        
        do
        {
            cout << "You have " << rem_attempts << " attempts to win !! " << endl;
            cout << "Guess a Number (1 - " << max_no << " ) : ";
            cin >> guessNo;

            rem_attempts--;
            count++;
            if (rem_attempts == 0 && guessNo != secretNo)
            {
            	play = playGame(secretNo,max_no);
            	if(play == -1){
            		cout << "Exit !!" << endl;
            		return -1;
				}
				rem_attempts = max_attempts;
            	
            }
            else if (guessNo > secretNo)
            {
                cout << "Guess lower one !!" << endl;
            }
            else if (guessNo < secretNo)
            {
                cout << "Guess higher one !!" << endl;
            }
        }while (guessNo != secretNo);
        
        	return 1;
        
    }
int playGame(int &count){
	char play;
	cout<<"Want to play more (y/n) : ";
	cin >> play;
	
	if(play=='Y'||play == 'y'){
		int ply = game(count);
		return ply;
	}
	else{
		return -1;
	}
	
	
}
    int main()
    {
        srand(time(0));
        int count = 0;
        
      	int play = game(count);
      	
    while(play == 1){
		  
        
            cout << "You successfully Guessed a number in "<<count<<" Attempts" << endl;
            count = 0;
            play = playGame(count);
            
        
       
    }
    cout << "Thanks for your Participation !!";

        return 0;
    }
