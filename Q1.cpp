
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;






int game();

int main()
{
    char a;
    int check;


    cout<<"************************Word Search Puzzle***********************"<<endl;
    cout<<endl;
    
	cout<<"You have to search/guess a word from the given puzzle grid"<<endl;
     do
     {
     	 game();
      
        cout<<"Press 1 to play again and 0 to quit    :   ";
        cin>>check;
        cout<<endl;
      
     }while(check!=0);



     return 0;
     
}
int game()
{

    
    string output;
    string list[10]={"Week","Find","Random","Sieuth","Backward","WordSearch","Vertical","Diagonal","Wikipedia","Horizontal"};
    char arr[10][10];


    // putting random alphabets froma to z in the grid 

    
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char c;
            int r;
            r= rand() % 26;  
            c= 'a' + r;            
            arr[i][j]=c;
        }
    }
    int index=rand()%10;
    output=list[index];
    if(list[index].length()%2==0)
    {
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;list[index][i]!='\0';i++,col++)
            {
                arr[row][col]=list[index][i];
            }
        
    }

    
    else
    {
        // for odd string length case
                // for even string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;list[index][i]!='\0';i++,row++)
            {
                arr[row][col]=list[index][i];
            }
    }


     for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
          cout<<" "<<arr[i][j];
         
        }
        cout<<endl;
    }
    
    string guess;
	
	
    cout<<"Enter word you guess  :     ";
    cin>>guess;
    cout<<endl;


    if(guess==list[index])
    {
        cout<<"Congratulations !"<<endl;
        cout<<" You have guessed correct word  "<<endl;
        return 1;
    }


    else
    {
        cout<<"Sorry your input word does not match  "<<endl;
        cout<<"Please Try Again!"<<endl;
        return 0;
    }





}