#include "GameHandler.hpp"
int main()
{       
    GameHandler game;
    game.chooseHero();

    /* The Grunt Fight or Level one */
    game.generateEnemy();
    while (!game.isFightOver(game.getHero(), game.getEnemy())) /* while loop which shows that when battle is over it wil check 
                                                                health of the enemy to see if it is less than 0*/
    {
        game.chooseAction();
        if (game.getEnemy()->getHealth() <= 0)
        {
            cout << game.getHero()->name << " defeated the grunt. Now for the boss!\n";
            break;
        }

        game.getEnemy()->decideAction(game.getHero());
        if (game.getHero()->getHealth() <= 0)
        {
            cout << "Congrats on losing to a grunt. Try again next time.\n";
            return 0;
        }

    }

    /* The Boss Fight */

    game.chooseBoss(); // this will let the game be able to choose the boss
    while (!game.isFightOver(game.getHero(), game.getBoss())) /* while loop which shows that when battle is over it wil check 
                                                                health of the enemy to see if it is less than 0*/
    {

        game.chooseAction();
        if (game.getBoss()->getHealth() <= 0)
        {
            cout << game.getHero()->name << " defeated Thanos! You have saved Earth from exploding \n";
            return 0;
        }
        game.getBoss()->decideAction(game.getHero());
        if (game.getHero()->getHealth() <= 0)
        {
            cout << "Thanos snapped ya'. Try again in the next timeline.\n";
            return 0;
        }
    }

        return 0;
}

