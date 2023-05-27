#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER1 = 'O';
const char PLAYER2 = 'X';

void resetboard();
void printboard();
int checkfreeespaces();
void playermove();
void computermove();
char checkwinner();
void printwinner(char);

int main()
{
    printf("Player is %c\n",PLAYER1);
    printf("Computer is %c\n",PLAYER2);
    printf("\n");
    char winner = ' ';
    char response;
    do
    {
        winner=' ';
        response=' ';
        resetboard();
    while(winner==' '&& checkfreeespaces()!=0)
    {
        printboard();
        printf("Player's turn:\n");
        playermove();
        winner=checkwinner();
        if(winner!=' '|| checkfreeespaces()==0)
        {
            break;
        }
        printf("Computer's turn:\n");

        computermove();
        winner=checkwinner();
        if(winner!=' '|| checkfreeespaces()==0)
        {
            break;
        }
    }
        printboard();
        printwinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        getchar();
        scanf("%c",&response);
        response=toupper(response);

    } while (response=='Y');
    printf("Thanks for playing!");
    return 0;
}

void resetboard()
{
    for(int i = 0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j]=' ';
        }
    }
}
void printboard()
{
    printf(" %c | %c | %c ", board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0],board[2][1],board[2][2]);
    printf("\n");
}
int checkfreeespaces()
{
    int freespace=9;
    for(int i = 0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if (board[i][j]!=' ')
            {
                freespace--;
            }
            
        }
    }    
    return freespace;
}
void playermove()
{
    int x;
    int y;
    do
    {
    printf("Enter row number (1-3): ");
    scanf("%d",&x);
    x--;
    printf("Enter column number (1-3): ");
    scanf("%d",&y);
    y--;

    if(board[x][y] !=' ')
    {
        printf("Invalid move!\n");
    }
    else
    {
        board[x][y] = PLAYER1;
        break;
    }
    }while(board[x][y]!=' ');

}
void computermove()
{
    srand(time(0));
    int x;
    int y;
    if(checkfreeespaces()>0)
    {
        do
        {
            x =rand()%3;
            y =rand()%3;
        }while(board[x][y] !=' ');
        board[x][y]= PLAYER2;
    }
    else
    {
       printwinner(' '); 
    }
}
char checkwinner()
{
    for(int i = 0; i<3;i++)
    {
        if (board[i][0]==board[i][1]&&board[i][0]==board[i][2])
        {
            return board[i][0];
        }   
    } 
    for(int i = 0; i<3;i++)
    {
        if (board[0][i]==board[1][i]&&board[0][i]==board[2][i])
        {
            return board[0][i];
        }   
    } 
    if (board[0][0]==board[1][1]&&board[0][0]==board[2][2])
    {
        return board[0][0];
    }  
    if (board[0][2]==board[1][1]&&board[0][0]==board[2][0])
    {
        return board[0][2];
    }  
    return ' ';
} 
void printwinner(char winner)
{
    if(winner== PLAYER1)
    {
        printf("You win");
    }
    else if(winner == PLAYER2)
    {
        printf("You lose");
    }
    else{
        printf("TIE");
    }

}