#include <stdio.h>
#include <string.h> //used to include strcasecmp function for taking both capital and small from user. used for case sensitive string comparison

void waitForNext() 
{
    char input[10];
    printf("\nEnter 'N' to continue...\n");
    scanf("%s", input);
    
    while (strcasecmp(input, "N") != 0) 
    {
        printf("Invalid input. Please enter 'N' to continue...\n");
        scanf("%s", input);
    }
  }

int main() //execution of the program starts from here
{
    printf("********************************************\n");
    printf("*  <<Welcome to the Mystic Isle Quest!>>   *\n");
    printf("*                                          *\n");
    printf("* You, the aspiring adventurer, find       *\n");
    printf("* yourself on Mystic Isle, a mysterious    *\n");
    printf("* land shrouded in magic. Your goal is     *\n");
    printf("* to discover the fabled Crystal of        *\n");
    printf("* Clarity that is said to grant the power  *\n");
    printf("* of immortality. Along your journey,      *\n");
    printf("* you'll encounter choices that shape      *\n");
    printf("* your destiny.                            *\n");
    printf("******************************************\n\n");
    waitForNext();

    char player[15]; //array for storing string variable
    printf("\n<<Enter Player Name>> ");
    scanf("%s", player);

    printf("\n******************************************\n");
    printf("*               <<Guide>>                  *\n");
    printf("* Enter '1' or '2' for choices             *\n");
    printf("* Enter 'N' to move to next to scene       *\n");
    printf("******************************************\n\n");

    printf("You land on Mystic Isle, a mysterious land shrouded in magic. You move forward, exploring the Isle and taking in its beauty.\n\n");

    printf("********************************************\n");
    printf("* Before %s, the trail splits into two     *\n", player);
    printf("* distinct paths, one leads to             *\n");
    printf("* <<the Enchanted Forest>> and the other to*\n");
    printf("* <<the Whispering Caves>>                 *\n");
    printf("********************************************\n\n");
    waitForNext();
    
    printf("\n************** The Enchanted Forest ************\n");
    printf("* A fog covered ancient forest with towering   *\n");
    printf("* trees,allowing only streaks of sunlight throu*\n");
    printf("* -gh mossy branches, amidst thorms & vines.   *\n");
    printf("************************************************\n\n");

    printf("\n************** The Whispering Caves ************\n");
    printf("* A mysterious and dark cave where the         *\n");
    printf("* blowing wind whispers as if they’re          *\n");
    printf("* talking to you.                              *\n");
    printf("************************************************\n\n");
    
    int choice1;
    printf("Enter your choice :\n");
    scanf("%d", &choice1);
    
    if(choice1 == 1)//for enchanted forest
    {
        printf("\nYou safely cross the Enchanted Forest and move ahead.\n\n");
        waitForNext();
        
         printf("\n******************************************\n");
         printf("* Here comes another level, which splits   *\n");
         printf("* into two parts, one leading to <<Mystic  *\n");
         printf("* Pond>> and other to <<Talking Statue>>   *\n");
         printf("******************************************\n\n");

         printf("\n***********************************************\n");
         printf("* [1] The Talking Statue: A 20,000-year-old   *\n");
         printf("* representation of human dominance over the  *\n");
         printf("* nature, reflecting ancient beliefs.         *\n");
         printf("***********************************************\n\n");
         
         printf("***********************************************\n");
         printf("* [2] The Mystic Pond: The pond itself looks  *\n");
         printf("* as if it's a spiral, reflecting the galaxy  *\n");
         printf("* with stars in it. The mists and the trees   *\n");
         printf("* in the background are fabulous.             *\n");
         printf("***********************************************\n\n");
         
         
         int choice2;
        printf("Enter your choice :\n");
        scanf("%d", &choice2);
        if(choice2 == 2)//for mystic pond
        {
            printf("\nAs you enter the mystic pond you're met with two challenges.\n You must make a choice to keep moving forward.\n\n");
            waitForNext();
            
            printf("\n***********************************************\n");
            printf("* [1] Brave the Maze                          *\n");
            printf("*                                             *\n");
            printf("* [2] Solve the Riddle                        *\n");
            printf("***********************************************\n\n");
            
            
            int choice3;
            printf("\nEnter your choice :\n");
            scanf("%d", &choice3);
            if (choice3 == 2)// for Riddle
            {
                
               do { //start of do-while loop. condition is checked on exit: EXIT CONTROL LOOP
               printf("\nYou must solve this riddle to continue the game\n\n");
               waitForNext();
               
               printf("\n******************************************\n");
               printf("*        SOLVE THE JUMBLED WORD            *\n");
               printf("*                                          *\n");
               printf("*         Your word is 'LATSYRC'           *\n");
               printf("******************************************\n\n");
               
               char word[20]; //storing a string variable for user's answer
               printf("Enter your answer:\n");
               scanf("%19s", word); // %19s ensures that the input is at most 19 characters to avoid buffer overflow.
               
               if(strcasecmp(word, "CRYSTAL")==0) //riddle solution
               {
                   printf("\nCongratulations! you have solved the riddle.\n\n");
                   break; //to exit the loop after condition is true. that is, right input from the user
                } else{
                     printf("invalid answer");
                    }
                     }while(1); /*The while(1) construct creates an infinite loop in C. 
                In C, any non-zero value is considered true, and 1 is commonly used to represent true. 
                Therefore, while(1) creates a loop that continues indefinitely because the condition is always true.*/
                
                printf("\n********************************************\n");
                printf("* %s successfully enter the <<Mystic Pond>>  *\n", player);
                printf("* and move forward. 2 creatures appear before*\n");
                printf("* you, <<The Friendly Spirit>> and           *\n");
                printf("* <<Mischievous Demon>>                      *\n");
                printf("**********************************************\n\n");
                waitForNext();
                
                printf("\n***************************************\n");
                printf("* [1] The Friendly Spirit: the spirit *\n");
                printf("* looks calm and peaceful. It appears *\n");
                printf("* to be a white humanoid figure with  *\n");
                printf("* angelic wings.                      *\n");
                printf("***************************************\n\n");

                printf("****************************************\n");
                printf("* [2] The Mischievous Demon: the red   *\n");
                printf("* devil has a mischievous grin as his  *\n");
                printf("* pointy ears and demonic wings move in*\n");
                printf("* excitement.                          *\n");
                printf("****************************************\n\n");
                
                
                int choice4;
                printf("\nEnter your choice :\n");
                scanf("%d", &choice4);
                if (choice4 == 1) //for friendly spirit
                {
                  printf("The Friendly Spirit guides you to the crystal of clarity, in between comes a maze,\n and the friendly spirit guides you to the end of the maze\n\n");
                  printf("***\n");
                  waitForNext();
                  
                  printf("\nWith the help of Friendly Spirit, you reach the bed of the pond.\n There you see a dimly lit cave, \nwhere you find a shiny blue glass-like ball of power, the Crystal of Clarity.\n");
                  printf("You lift the crystal of clarity and destroy it.\n");
                  printf("You leave the Mystic Isle and defeat the wicked King, \nrestoring the peace of the realm, and continue on your journey to different parts of the world.\n\n");
                  
                  printf("THE END\n");
                }else if (choice4 == 2) { // for mischievous demon
                    printf("The mischievous demon pranks you, leading you to a path where there is a humongous spider that bites you. You die out of spider venom.\n");
                }else {
                    printf("Invalid choice.\n");
                }
                
            }else if (choice3 == 1) { //for maze
                printf("You choose the maze and an unusual sound comes out from within the dark corners. A big anaconda appears, making a sniffing sound. It quickly follows and eats you in just one bite as you move back.\n");
            }else {
                printf("Invalid choice.\n");
            }
            
        }else if (choice2 == 1) { //for talking statue
            printf("You choose to examine the talking statue but little do you know that you’ll be bewitched and end up falling off the cliff under the statue’s spell. You die.\n");
        }else {
            printf("Invalid choice.\n");
        }
        
    }else if (choice1 == 2) { //for whispering cave
        printf("You anxiously walk inside the cave and eat the loaf of bread which you found lying in the corner as you were starving…Sadly, you die after eating bread as you forget that bread is one of your weaknesses :<\n");
    }else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}



