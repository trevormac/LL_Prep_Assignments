//
//  main.c
//  Two Doors
//
//  Created by Trevor MacGregor on 2017-01-26.
//  Copyright © 2017 Trevor MacGregor. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    

    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    
    scanf("%c", &play);
// Original Incorrect Code (Missing =)
    //if (play = 'y') {

    // Correct Code
    if (play == 'y') {
        
// Original Incorrect Code (Missing printf and scanf)
//        print("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
//        print("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
//        print("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
//        print("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
//        print("What do you ask so you can pick the door to freedom?\n\n");
//        print("\t1.Ask the truth-guard to point to the door of doom.\n");
//        print("\t2.Ask the liar-guard to point to the door of doom.\n");
//        print("\t3.Doesn't matter which one you pick.\n");
//        scan("%f", choice);
//        
//        char answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
        
        
// Correct Code
        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        scanf("%d", &choice);
    }
    
// Original Incorrect Code (Missing *)
    //char answer = ("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
    
        char *answer = ("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");

// Original Incorrect Code (Missing printf and placeholder for char answer)
//        switch (choice) {
//            case 1:
//                print("c", answer);
//                break;
//            case 2:
//                print("c", answer);
//                break;
//            case 3:
//                print("c", answer);
//                break;
//            default:
//                break;
//        }
    // Correct Code
    switch (choice) {
        case 1:
            printf("The answer is 3.%s", answer);
            break;
        case 2:
            printf("The answer is 3.%s", answer);
            break;
        case 3:
            printf("The answer is 3.%s", answer);
            break;
        default:
            break;
    }
    
    return 0;
}


