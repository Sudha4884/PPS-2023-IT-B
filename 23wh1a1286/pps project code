// program for snake and ladder
#include <stdio.h>
#include<stdlib.h>                      //this header file is to include the rand()
#include <time.h>                       //this header file is to include the time related manipulations
int board[10][10];                      //snake and ladder game board
void valuesinboard ();                  //this is to input values in board
void printboard ();                     //this is to board on out put
int rolldice ();                        //this is to get a random value on dice when rolled
int snakeorladder (int);                //this to spot the snakes and ladders in the game
void positionforplayers (int, int);     //this is to show the position of players in output
void main ()
{
  printf ("snakes: 25 to 9  |   65 to 40  |  99 to 1\n");
  printf ("ladder: 13 to 42 |   60 to 83  |  70 to 93\n");
  printf ("choose your option\n");
  printf ("[1]one player\n[2]two players\n[3]exit\n");
  printf ("enter option:");
  int option, result, present = 1, present1 = 0;
  scanf ("%d", &option);
  char enter;
//code for single player game,present is the position of only player and present1 is 0 as there is no other player
  if (option == 1)
    {
      valuesinboard ();
      positionforplayers (present, present1);
      while (present != 100)
	{
	  printf ("\nplayer is in %d position", present);
	  printf ("\n enter r to roll dice:");
	  scanf (" %c", &enter);
	  printf
	    ("\n-----------------------------------------------------\n");
	  if (enter == 'r')
	    {
	      result = rolldice ();
	      printf ("dice value:%d\n", result);
	      if (present + result <= 100)
		{
		  present = present + result;
		  if (present == 25 || present == 65 || present == 99
		      || present == 13 || present == 60 || present == 70)
		    {
		      present = snakeorladder (present);
		    }
		  positionforplayers (present, present1);
		}
	    }
	}
      printf ("cogratulations!!you WON :)");
    }
//code for two players,present is position of 1st player and present1 is position of 2nd player
  else if (option == 2)
    {
      int i;
      present1 = 1;
      valuesinboard ();
      positionforplayers (present, present1);

      for (int i = 1; present != 100 && present1 != 100; i++)
	{
	  printf ("\nplayer1 is in %d position", present);
	  printf ("\nplayer2 is in %d position", present1);
	  printf ("\n enter r to roll dice:");
	  scanf (" %c", &enter);
	  if (enter == 'r')
	    printf
	      ("\n-----------------------------------------------------\n");

	  if (i % 2 != 0)
	    {
	      result = rolldice ();
	      printf ("dice value:%d\n", result);
	      if (present + result <= 100)
		{
		  present = present + result;
		  if (present == 25 || present == 65 || present == 99
		      || present == 13 || present == 60 || present == 70)
		    {
		      present = snakeorladder (present);
		    }
		  positionforplayers (present, present1);
		}
	      if (present == 100)
		printf ("congratulations!!player1,you WON");
	    }
	  else
	    {
	      result = rolldice ();
	      printf ("dice value:%d\n", result);
	      if (present1 + result <= 100)
		{
		  present1 = present1 + result;
		  if (present1 == 25 || present1 == 65 || present1 == 99
		      || present1 == 13 || present1 == 60 || present1 == 70)
		    {
		      present1 = snakeorladder (present1);
		    }
		  positionforplayers (present, present1);
		  if (present1 == 100)
		    printf ("congratulations!!player2,you WON");
		}
	    }

	}
    }

  else
    printf ("exited");
}


void
valuesinboard ()
{
  int i, j, k = 100;
  for (i = 0; i < 10; i++)
    for (j = 0; j < 10; j++)
      {
	board[i][j] = k;
	k--;
      }
}


void
printboard ()
{
  int i, j;
  for (i = 0; i < 10; i++)
    {
      if (i % 2 == 0)
	{
	  for (j = 0; j < 10; j++)
	    printf ("%d\t", board[i][j]);
	}
      else
	{
	  for (j = 9; j >= 0; j--)
	    printf ("%d\t", board[i][j]);
	}
      printf ("\n");
    }
}


int
rolldice ()
{
  srand (time (0));
  int num = (rand () % 6) + 1;
  return num;
}

int
snakeorladder (int i)
{
  switch (i)
    {
    case 25:
      return 9;
      break;
    case 65:
      return 40;
      break;
    case 99:
      return 1;
      break;

    case 13:
      return 42;
      break;
    case 60:
      return 83;
      break;
    case 70:
      return 93;
      break;
    }
}

void
positionforplayers (int present, int present1)
{
  valuesinboard ();
  int i, j;
  for (i = 0; i < 10; i++)
    {
      if (i % 2 == 0)
	{
	  for (j = 0; j < 10; j++)
	    if (board[i][j] == present || board[i][j] == present1)
	      {
		if (present == present1)
		  printf ("-%c1,2-\t", 80);
		else if (board[i][j] == present)
		  printf ("-%c1-\t", 80);
		else
		  printf ("-%c2-\t", 80);
	      }
	    else
	      printf ("%d\t", board[i][j]);
	}
      else
	{
	  for (j = 9; j >= 0; j--)
	    if (board[i][j] == present || board[i][j] == present1)
	      {
		if (present == present1)
		  printf ("-%c1,2-\t", 80);
		else if (board[i][j] == present)
		  printf ("-%c1-\t", 80);
		else
		  printf ("-%c2-\t", 80);
	      }
	    else
	      printf ("%d\t", board[i][j]);
	}
      printf ("\n");
    }
}
