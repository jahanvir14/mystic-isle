#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
    printf("<<Welcome to the Mystic Isle Quest!>>\n\n");
    Sleep(15);
    printf("You, the aspiring adventurer, find yourself on Mystic Isle, a mysterious land shrouded in magic.\nYour goal is to discover the fabled Crystal of Clarity that is said to grant the power of immortality.\nAlong your journey, you'll encounter choices that shape your destiny.\n\n");
    Sleep(15);

    char player[15];
    printf("<<Enter Player Name>>");
    scanf("%s", player);
    
    printf("<<Guide>>\n");
    printf("Enter '1' or '2' for choices\n\n");
    Sleep(15);

    printf("***\n\n");
    printf("You wake up in a Kingdom where everything is destroyed by the King.\nHe is greedy and determined to find the Crystal of Clarity to become immortal, which will result in him becoming invincible.\n");
    printf("%s have been chosen to find and destroy the crystal of clarity…\n\n", player);
    Sleep(15);

    printf("***\n\n");
    printf("You land on Mystic Isle, a mysterious land shrouded in magic. You move forward, exploring the Isle and taking in its beauty.\n");
    Sleep(15);
    printf("Before you, the trail splits into two distinct paths, one leads to <<the Enchanted Forest>> and the other to <<the Whispering Caves>>\n\n");
    Sleep(15);

    printf("[1] The Enchanted Forest: A vast old-growth forest, shrouded in fog, where the trees reach into the heavens, leaving only shafts of sunlight streaming between the moss-hung branches, thorns, and vines crowd among the undergrowth.\n");
    printf("[2] The Whispering Caves: A mysterious and dark cave where the blowing wind whispers as if they're talking to you.\n");
    Sleep(15);

    int choice1;
    printf("Enter your choice :\n");
    scanf("%d", &choice1);
    
    if(choice1 == 1)//for enchanted forest
    {
        printf("You safely cross the Enchanted Forest and move ahead.\n");
        printf("Here comes another level, which splits into two parts, one leading to the Mystic Pond, and the other is guarded by a talking statue.\n\n");
        Sleep(15);

        printf("[1] The Talking Statue: This statue is 20,000 years old and it represents the power of dominance over nature. In ancient times, people used to believe that humans are capable of dominating over the mother nature.\n\n ");
        printf("[2] The Mystic Pond: The pond itself looks as if it's a spiral, reflecting the galaxy with stars in it. The mists and the trees in the background are fabulous.\n\n");
        Sleep(15);

        int choice2;
        printf("Enter your choice :\n");
        scanf("%d", &choice2);
        if(choice2 == 2)//for mystic pond
        {
            printf("As you enter the mystic pond you're met with two challenges. You must make a choice to keep moving forward.\n\n");
            Sleep(15);

            printf("[1] Brave the Maze.\n\n");
            printf("[2] Solve the Riddle.\n\n");
            Sleep(15);

            int choice3;
            printf("Enter your choice :\n");
            scanf("%d", &choice3);
            if (choice3 == 2)// for Riddle
            {
               do {
               printf("You must solve this riddle to continue the game\n");
               Sleep(15);

               printf("write the word in original form");
               printf("your word is 'YRCLATS'\n");
               Sleep(15);

               char word[20];
               printf("Enter your answer:\n");
               scanf("%19s", word);
               
               if(strcasecmp(word, "CRYSTAL")==0)//riddle solution
               {
                   printf("Congratulations! You have solved the riddle\n\n");
                   break;
               } else{
                printf("invalid answer");}
                }while(1);
                
                
                printf("You successfully enter the Mystic Pond and moved forward. Suddenly two creatures appear in front of you, a Friendly Spirit and a Mischievous Demon.\n\n");
                Sleep(15);

                printf("[1] The Friendly spirit: the spirit looks calm and peaceful. It appears to be a white humanoid figure with angelic wings.\n\n");
                printf("[2] The Mischievous Imp: the red devil has a mischievous grin plastered over his face. His pointy ears and demonic wings move in excitement.\n\n");
                Sleep(15);

                int choice4;
                printf("Enter your choice :\n");
                scanf("%d", &choice4);
                if (choice4 == 1)
                {
                  printf("The Friendly Spirit guides you to the crystal of clarity, in between comes a maze, and the friendly spirit guides you to the end of the maze\n\n");
                  Sleep(15);

                  printf("***\n\n");
                  Sleep(15);

                  printf("With the help of Friendly Spirit, you reach the bed of the pond. There you see a dimly lit cave, where you find a shiny blue glass-like ball of power, the Crystal of Clarity.\n");
                  printf("You lift the crystal of clarity and destroy it.\n\n");
                  Sleep(15);
                  
                  printf("You leave the Mystic Isle and defeat the wicked King, restoring the peace of the realm, and continue on your journey to different parts of the world.");
                }else if (choice4 == 2) {
                    printf("The mischievous demon pranks you, leading you to a path where there is a humongous spider that bites you. You die out of spider venom.\n");
                }else {
                    printf("Invalid choice.\n");
                }
            }else if (choice3 == 1) { //brave the maze
                printf("You choose the maze and an unusual sound comes out from within the dark corners. A big anaconda appears, making a sniffing sound. It quickly follows and eats you in just one bite as you move back.\n");
            }else {
                printf("Invalid choice.\n");
            }
        }else if (choice2 == 1) { //talking statue
            printf("You choose to examine the talking statue but little do you know that you'll be bewitched and end up falling off the cliff under the statue's spell. You die.\n");
        }else {
            printf("Invalid choice.\n");
        }
    }else if (choice1 == 2) {
        printf("You anxiously walk inside the cave and eat the loaf of bread which you found lying in the corner as you were starving…Sadly, you die after eating bread as you forget that bread is one of your weaknesses :<\n");
    }else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}

