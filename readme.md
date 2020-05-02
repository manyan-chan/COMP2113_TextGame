# Epidemic survival game

## Team Members

CHAN Man Yan    3035582954  
YAO Yau Yu      3035575858

## Game Description

This is an epidemic survival game. During the epidemic, 90% of people on Earth have died because of the disease, the world has become a chaos. The society has completely collapsed and there are no longer laws, the city is in an anarchy state. Stealing, robbing, killing is normal under this lawless circumstance. Luckily, at the beginning of the pandemic, you stockpiled a lot of resources and decided to stay at home until the emergence has past. After staying at home for 6 months, the player has run out of supplies and is forced to go out to scout for daily necessities. The player is given with 10 inventory slots, he has to choose wisely what to bring with him in this apocalyptic world. Player are able to find these three main resources in his scavenge hunts.

1. Food
2. Water
3. Mask

These are the essential elements for survival. You will consume each resource every day, if any of them drops to zero, game ends.

The game lasts for 10 days. The player will undergo 2-3 events everyday. For each event, 3 options will be given. Here is the example.

Q: You are going to the school, where do you want to visit?

A. School Hall

B. Physics Laboratory

C. Lawn

After he has made the choice, next event will be triggered.

The questions have a wide scope. For instance, visiting a particular site, finishing tasks and making choices within a dilemma. Player has to try his best to earn more credits on these three categories.

## List of features / functions to be implemented

### Event Randomizer

Choose one event from a pool of possible triggerable events after player's choice.  
E.g. 10% to get two items, 60% to get one item, 30% to get zero item.  
In some events, items or equipment may be confiscated.

*(Requirement 1 & 5)

### Dynamic Inventory System

Record the change of player's items or equipment.  
*(Requirement 2 & 5)

### Game state Loading System

When the player leaves in the middle of the game, a .txt file will be created. An unique filename will be assigned.
The file records the amount of player's items and equipment.
It will be exported to the game directory (i.e. the .txt file and the game are located in the same directory).
When the player resumes the game, the file will be imported to the game.

If the game is over, all the game save data will be erased and the game will restart.  
*(Requirement 2, 3 & 4)

### Scenario Loader

Upon receiving player's choice, load a specific text from a txt file for the story the player encounters.  
*(Requirement 3, 4 & 5)
