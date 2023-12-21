# Hero's Journey: Text-Based Role Playing Game 

## Authors
 > *  Karanvir Chima(https://github.com/karanvirchima/karanvirchima.git)

## Project Description
 > Description: 
A Text-Based Role-Playing Game (RPG): In this game, users can choose among three different characters to play with: Captain America, Ironman, and Aquaman. These characters are associated with different types of weapons and armors. Each character has different powers and is able to maneuver through each situation differently. At every step of the game, a narrative is presented and the user can select between different options. These options include attack, run, heal, and access inventory so they can access any items they may acquire throughout their journey in the game. These characters will have different paths to choose from, which will allow them to complete their unique journeys. After completing their journeys the final obstacle each character will face is a boss battle which will decide their faith in whether they win or lose the game.

## Tools/Languages
 > Used the following Tools/Languages: 
 >   * C++ 
 >   * PuTTy(vim)
 >   * Git/Github
 >   * Unit Testing
 >   * UML Notation 
 >   * Kanban Board/Scrum Meetings

## Input/Output
 > * What will be the input/output of this project? 
 >   * Input:
 >     * Choose among three different characters to play with: Captain America, Ironman, and Aquaman
 >     * After choosing the character there will be an output of what actions the characters can do.
 >     * Once the character arrives in their battle, they have to choose between the different options including attack, run, heal.
 >     * Choose the different options from attack, run, heal and access inventory.
 >     * Be able to quit the game 
 >   * Output:
 >     * You will get a message for which character and path that you have chosen
 >     * You will see the amount of health the boss has and the amount of health your character has after each attack.
 >     * Once you have won the first battle you will get the option to pick the next path and onwards.
 >     * You will get a message that you have reached the final boss.
 >     * Once the game is over you will get a message that you won or lost.
 >   * User Controls:
 >     * BasicAttack-1
 >     * SpecialAttack-2
 >     * Heal Character- 3
 >     * Quit the Game/Run- 4
 >     
 >      
 >
 >
## Additional Details/Information:
> The GameHandler, Boss and Enemy classes use the Factory pattern. This pattern is shown in these three classes when the user chooses what object to use. In this case, the objects would be the three different heroes: Iron Man, Aqua Man and Captain America. Because it is able to generate different objects at a time and its set in stone. It generates the character based on user input. It will make the boss if the character meets certain requirements. This follows for the enemy as well.

> The GameHandler class acts as a menu for the user. It outputs the character and attack options to the user to choose for the battle. In the chooseBoss function, a boss is generated and it outputs a message, The current character's health is reset after one round of battle. Next, the generateEnemy function generates enemies the same way the Boss function does. The chooseAction function allows the character to choose what attack they want. If there is an invalid input, an error message is outputted and prompts the user to choose an attack. In the isFightOver function, if the character’s health is less than zero the character will lose. On the other hand, if the enemy's health is greater than zero then the character will win the battle. 

> Both the Enemy and the Boss class have a destructor and a constructor. It includes 12 virtual functions.

> The Boss Class includes three attack functions: attack, specialAttack and heal. In all three attack functions, it calculates the damage that has been created. It outputs what type of attack was used and how much damage was inflicted. Then, it displays to the user the remaining health. The function genRandomStats, starts with a positive health and allows the specialAttack function to output more damage then the attack. In addition, it also has a variable called increaseHealth, which randomizes the amount of health that is increased. Also, the Boss constructor will call the genRandomStats. Next, the randomNumber function includes two parameters with return type int and the function generates a Boss with random values. Lastly, there is a decideAction function, which randomizes the attack that will be used by the Boss. If the value of the randomized is between 0 to 3 it will use attack, for 4 to 6 special Attack will be used, and for 7 to 9 it will use Heal.

> The Enemy class is similar to the boss class since the user battles the enemy first and will only proceed to battle boss if they win against the enemy. Similarly, the enemy class includes the same functions as the boss. One difference can be seen in the genRandomStats function. The values for the genRandomStats function for the enemy differ from those of the genRandomStats for the boss. For example, the initial health of the enemy is set to 150 while the boss is set to 300. Another difference can be seen in the decideAction function in the enemy class because the range that determines the enemy’s attack is larger. For example, 0 to 8 will implement Attack while 9 to 10 uses specialAttack. All the other functions that are implemented in the Enemy class work the same way as in the Boss class.
 
 > Aqua Man, Captain America, and Captain America class: In these three classes, they come directly from the character class. They inherit the functions that are implemented in the Character class.

 > Character Class: The game handler and attacks rely on using the Character class. We are able to implement composite into this . The various actions throughout the code rely on the Character being the base class. We have certain actions for the boss, certain actions for the character, aquaman,ironman,captain america and enemy. Character is inherited by all of the heroes. We are able to see where I am using composite in the pure virtual function which were created for attack,special attack,heal,and stats. Here inheritance is similar to a tree structure. In our code character would be the root node and Captain America , Iron Man, and Aqua man would be considered the leaf. Enemy would be an internal node which has the leaf of Boss. 
 
 ## Screenshots
 > Showing when the user selects Aqua Man and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/AquaOutput.png) 
 > 
 > Showing when the user selects Iron Man and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/IronOutput.png) 
 > 
 > Showing when the user selects Captain America and showing all the behaviors(attack,special attack, heal) working.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/CaptainOutput.png) 
 > 
 > Showing when the user beats the first boss.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/BeatBoss1.png) 
 > 
 > Showing when the user beats the second boss.   
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/BeatBoss2.png) 
 > 
 > Showing when the user loses against the first boss.
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/LossMessage1.png) 
 > 
 > Showing when the user loses against the second boss.
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/LossMessage2.png) 
 > 
 > Showing input validation for both menus.  
 > ![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/MenuValidation.png) 
 > 
 ## Installation/Usage
 > I am not deploying anything for this project. Thus I an only using hammer, vim, and valgrind. 
 >
 >The command line prompt that runs the game is ./game : This prompt runs the actual game itself and allows the user to play. 
 >
 >The command line prompt that runs the tests are ./test : This prompt runs all of my unit tests for the code. 


 ## Testing
  >I used unit tests to test the project. For the Heroes I created unit tests to check that the attacks, special attacks, and heal were always giving positive values. I also tested to make sure that these powers were not too powerful. To do this I tested their range by checking if they went over 100 damage or healing.
  > 
  >I also created unit tests for the Boss Thanos to check that the health, attack, special attack, and heal were all positive values above 0. In addition to this I also tested that the Enemy has the same values above 0 to make sure that positive damage and healing is taking place. 
  >
  >In addition to this I made sure the code had no memory leaks possible. I ran valgrind with the command line executable ./test to confirm that there were no leaks. The Heap Summary of valgrind shows that there are 3 allocs and 3 frees. It also states that “All heap blocks were freed -- no leaks are possible”. 
  >
  >Unit Tests Working
  >![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/Test1.png) 
  >![Hero's Journey](https://github.com/cs100/final-project-kchim003-nshar040-apand023-nmath018/blob/master/Test2.png) 
 
