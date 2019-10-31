#include <iostream> // print f();
#include <string> std::string

std::string name 

#define CLEAN for (int i =0; i <500; i++) (printf("\n");)
#define NEWLINE printf("\n");

int mode = 0;
/*
z = Liver Kick
x = Block
c = Peek a boo
o = Jump
k = Left
l = Right
m = Slide
*/

bool quit = false

struct player
{
	std::string name
	int energy;
	int force;
	int attack_choice;
	bool status // WIN/LOOSE
 }Player_A, Player_B, COM ; //COM=computer

int choice;
int tours= 0;

void Game_check ()
{
	quit = false;
	if (player_A.energy <= 0 && mode ==1)
	{
		player_A.status = false;
		COM.status = true;
		for (int i = 0; i < 4; i++) { NEWLINE; } 
			std::cout << "Cazzo! \n\nPress 1 to continue\nPress 2 to reset the game \n->";

CHOOSE_COME:
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			COM.point = COM.point +1;
			COM.energy = 10;
			player_A.energy=10;
			break;
			case 2:
			COM.energy= 0;
			player_A.energy= 0;
			quit = true;
			CLEAN;
			break;
			default:
			std::cout << "\n\Wrong move! Choose another one\n1 = Continue\nReset\n-> ";
			goto CHOOSE_COM;
			break;
		}				
	}
	
	else if (COM.energy <= 0 && mode ==1)
	{
		player_A.status = true;
		COM.status=false;
		for (int i = 0; i <4; i ++) {NEWLINE; }
		std::cout << "Congratulations chico! You won\n\nPress 1 to continue\nPress 2 to reset the game \n ->";
	CHOOSE;
		std::cin >> choice;
		switch (choice)
		{
			case 1 :
			player_A.point = player_A.point +1 ; 
			player_A.energy = 10;
			COM.energy = 10;
			break;
			case 2:
			player_A.energy = 0;
			COM.energy = 0;
			quit = true;
			CLEAN;
			break ;
			default :
			std::cout << "\n\Wrong move! Choose another one\n1 = Continue\nReset\n-> ";
		}
	}
	
	else if (player_A ==0 )
	{
		player_A.status = false;
		COM.status = true;
		for ( int i =0; i <45; i++) { NEWLINE; }
		std::cout << "\n\Wrong move! Choose another one\n1 =
			Continue\nReset\n-> ";
		CHOOSE_B:
		std::cin >> choice;
		switch (chsize)
		{
			case 1:
			if (player_A.point >= ) { player_A.point =
				player_A.point + }
				else (player_A.point = player_A.point + NULL; }
				player_A.energy= 10;
				COM.energy=10;
				break;
			case 2:
			CLEAN ;
			quit=true;
			default:
			std::cout << "\n\Wrong move! Choose another one\n1 =
				Continue\nReset\n-> ";
			goto CHOOSE_B
				break ;
	
		}
	}			
}
___________________________________________________________________
void Game_check_2()
{
	quit = false;
	if (player_A.energy <= 0 && mode ==2)
	{
		player_A.status = false;
		player_B.status = true;
		for (int i = 0; i < 4; i++) { NEWLINE; } 
			std::cout << "Cazzo! \n\nPress 1 to continue\nPress 2 to reset the game \n->";
			CHOOSE_player_B""
			std::cin >> choice;
			switch (choice)
			{
			case 1:
			player_B.point =player_B.point +1;
			player_B.energy = 10;
			player_A.energy = 10;
			break;
			case 2:
			player_B.energy = 0;
			player_A.energy = 0;
			break;
			default:
			std::cout << "\n\Wrong move! Choose another one\n1 = Continue\nReset\n-> ";
			goto CHOOSE_COM;
			break;
		}				
	}
	
	else if (player_A ==0)
	{
		player_A.status = false;
		player_A.status = true;
		for (int i = 0; i <4; i ++) {NEWLINE; }
		std::cout << "Chico you lost!\n\nPress 1 to continue\nPress 2 to reset the game \n ->";
	CHOOSE;
		std::cin >> choice;
		switch (choice)
		{
			case 1 :
			player_A.point = player_A.point +1 ; 
			player_A.energy = 10;
			COM.energy = 10;
			break;
			case 2:
			player_A.energy = 0;
			COM.energy = 0;
			quit = true;
			CLEAN;
			break ;
			default :
			std::cout << "\n\Wrong move! Choose another one\n1 = Continue\nReset\n-> ";
		}
	}
	
	else if (player_A ==0 )
	{
		player_A.status = false;
		player_B.status = true;
		for ( int i =0; i <45; i++) { NEWLINE; }
		std::cout << "\n\Chico you lost! Choose another one\n1 =
			Continue\nReset\n-> ";
		CHOOSE_B:
		std::cin >> choice;
		switch (chsize)
		{
			case 1:
			if (player_A.point >= ) { player_A.point =
				player_A.point + 1;}
				else (player_A.point = player_A.point + NULL; }
				player_A.energy= 10;
				COM.energy=10;
				break;
			case 2:
			CLEAN ;
			quit=true;
			default:
			std::cout << "\n\Wrong move! Choose another one\n1 =
				Continue\nReset\n-> ";
			goto CHOOSE_B
				break ;
	
		}
	}			
}
___________________________________________________________________
void Computer_attack_choice()
{
	choice:
	com.attack_choice = rand () % 6+1;
	switch (COM.attack_choice)
	{
		case 1:
		player_A.energy = player_A.energy -2;
		break;
		case 2:
		player_A.energy = player_A.energy -5 + (player_A.force /22);
		break;
		case 3:
		player_A.energy = player_A.energy -5 + (player_A.energy /33);
		break;
		case 4:
		player_A.energy = player_A.energy -2; (player_A.force /55);
		break;
		case 5:
		player_A.energy = player_A.energy -2 (player_A.energy/(player_A.force -15));
		break;
		case 6 :
		player_A.energy = player_A.energy -2;
		break;
		default:
		goto CHOICE; 
		
		
	}
		 
}
______________________________________________________________________
int main()
{
	START;
	std::cout <<"Chico, tell me your name\n->";
	std::cin >> player_A.name;
	std::cout << "\n\mChoose the game mode\n1 = one player \n2= two players\n->";
	std::cin >> mode;
	switch(mode)
	{
		case 1:
		XXX : 
		player_a.energy= 10;
		COM.energy = 10;
		player_A.force = rand () % 100 + 1; // 1 <->100
		COM.force = rand () % 100 + 1; // 1 <->100
		COM.name = "COM";
		
		FIGHT :
		Game_check ()
			if (quit == true)
		{
			COM.point= 0;
			player_A.point= 0;
			goto START;
		}
		CLEAN;
		Computer_attack_choice();
		std::cout << player_A.name << "-" << COM.point << std::endl << std::endl;
		std::cout << player_A.name << std::endl << "Energy ->";
		for (int i=0; i < player_A.energy; i++)
		{
			std::cout <<"O";
		}
		NEWLINE;
		std::cout << player_A.force;
		for (int i = 0; i< 2; i++ ) { NEWLINE;}
		std::cout << COM.name << std::endl << "Energy ->";
		for (int i =0; i <2; i++)
		{
			std::c0out << "X";
		}
		NEWLINE;
		std::cout << COM.force;
		for (int i = 0; <2;  i++) { NEWLINE; }
		for (int i = 0; <2 ; i++)
		{
				for (int b = 0; b 9 ; b++)
				{
					printf("");
				}
				printf ("I");
	
		}
		NEWLINE;
		for (int i = 0; i < 36;  i++) // 2*9) *2= 36
		{
				printf ("=");
		}		
		for (int i = 0; i < 2;  i++) { NEWLINE; }
		std::cout << "1.Liver kick 2.Peek a boo 3.Jump"
			<< std::endl;
			<< "4.Block 5.Slide 6.Choke";
		for (int i = 0; i < 2;  i++) { NEWLINE; }
		std::cout << "Choose your move by typing an number\n->";
		std::cin >> player_A.attack_choice;
		switch (player_A.attack_choice)
		{
		case 1:
			COM.energy= COM.energy -2;
			tours = tours +1;
			goto FIGHT;
			break;
		case 2:
			COM.energy= COM.energy -5 + (COM.force/ 22);
			tours = tours +1;
			goto FIGHT;
			break; 
		case 3:
			COM.energy= COM.energy -5 + (COM.force/ 33);
			tours = tours +1;
			goto FIGHT;
			break; 
		case 4:
			COM.energy= COM.energy + (COM.force/55));
			tours = tours +1;
			goto FIGHT;
			break; 
		case 5:
			COM.energy= COM.energy -5 + (COM.force/ (COM.force-15));
			tours = tours +1;
			goto FIGHT;
			break; 
		case 6:
			COM.energy= COM.energy -/ 2;
			tours = tours +1;
			goto FIGHT;
			break; 
		default:
		    std::cout << "\n\nWrong move\npress the [ENTER] key for letting the enemy attack"
			std::getchar();
			tours = tours +1 ;
			goto FIGHT;
			break;
	
		}
		std::getchar();
		break;
	case 2:
	std::cout <<"Chico, tell me your name\n->";
	std::cin >> player_B.name;
	player_A.energy = 10;
	player_B.energy = 10;
	player_A.force = rand() % 100;
	player_B.force = rand() % 100;
	
FIGHT_B
	Game_check_2();
	if (quit== true)
	{
		player_B.point = 0;
		player_A.point = 0;
		goto START;
	}
	CLEAN;
	std::cout << player_B.force;
	for (int i = 0; i < 4;  i++) { NEWLINE ;}
	for (int i = 0; i < 2;  i++)
	{
		for (int b = 0; b < 9;  b++)
		{
			printf(" ");
		}
		printf("I");
	}
	NEWLINE;
	for (int i = 0;)
	{
		for (int i = 0; i < 36;  i++) { NEWLINE; }
		std::cout << "1.Liver kick 2.Peek a boo 3.Jump"
			<< std::endl;
			<< "4.Block 5.Slide 6.Choke";
		for (int i = 0; i < 2;  i++) { NEWLINE; }
		std::cout << "Choose your move by typing a number\n->"
			std::cin >> player_A.attack_choice;
		switch (player_A.attack_choice)
		{
				case 1:
					player_B.energy= player_B.force -2;
					tours = tours +1;
					goto FIGHT;
					break;
				case 2:
					player_B.energy= player_B.force -5 + (player_B.force/ 22);
					tours = tours +1;
					goto FIGHT;
					break; 
				case 3:
					player_B.energy= player_B.energy -5 + (player_B.force/ 33);
					tours = tours +1;
					goto FIGHT;
					break; 
				case 4:
					player_B.energy= player_B.energy - (player_B.force/55);
					tours = tours +1;
					goto FIGHT;
					break; 
				case 5:
					player_B.energy= player_B.force -5 + (COM.force/ (player_B.force-15));
					tours = tours +1;
					goto FIGHT;
					break; 
				case 6:
					player_B.energy= layer_B.energy-/ 2;
					tours = tours +1;
					goto FIGHT;
					break; 
				default:
				    std::cout << "\n\nWrong move\npress the [ENTER] key for letting the enemy attack"
					std::getchar();
					tours = tours +1 ;
					goto FIGHT;
					break;
	
				}
				
				PLAYER_B:
				for (int i =0; i < 2; i++ ) { NEWLINE;}
				std::cout << "Now the " << player_B.name << "'s attack\n->";
				std::cin >> player_B.attack_choice;
				switch (player_A.attack_choice)
				{
						case 1:
							player_A.energy= player_A.force -2;
							tours = tours +1;
							goto FIGHT;
							break;
						case 2:
							player_A.energy= player_A.force -5 + (player_B.force/ 22);
							tours = tours +1;
							goto FIGHT;
							break; 
						case 3:
							player_A.energy= player_A.energy -5 + (player_B.force/ 33);
							tours = tours +1;
							goto FIGHT;
							break; 
						case 4:
							player_A.energy= player_A.energy - (player_B.force/55);
							tours = tours +1;
							goto FIGHT;
							break; 
						case 5:
							player_A.energy= player_A.force -5 + (COM.force/ (player_B.force-15));
							tours = tours +1;
							goto FIGHT;
							break; 
						case 6:
							player_A.energy= player_A.energy-/ 2;
							tours = tours +1;
							goto FIGHT;
							break; 
						default:
						    std::cout << "\n\nWrong move\npress the [ENTER] key for letting the enemy attack"
							std::getchar();
							tours = tours +1 ;
							goto FIGHT_B;
							break;
	
						}
						std::getchar();
						break;
					default:
					std::cout <<"\n\nBad move ! Try another one"
						<< std::endl
						<< " 1= one player\n2 = two players\n->";
					break;
					}
					std::getchar();
					return 0;
}

