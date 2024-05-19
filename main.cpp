#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        car
//  action 1:    the car idles
car.idles();
//  action 2:    the car accelerates
car.accelerate();
//  action 3:    the car turns left
car.turnLeft(); 
//  2)
//  Noun:        cat
//  action 1:    the cat purrs
cat.purr();
//  action 2:    the cat meows
cat.meow();
//  action 3:    the cat sleeps
cat.sleep();
//  3)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog wags it's tail
dog.wagTail();
//  action 3:    the dog runs
dog.run();
//  4)           falcon
//  Noun:
//  action 1:    the falcon soars
falcon.soar();
//  action 2:    the falcon dives
falcon.dive();
//  action 3:    the falcon flaps it's wings
falcon.flapWings();
//  5)
//  Noun:        lighter    
//  action 1:    the lighter ignites
lighter.ignite(); 
//  action 2:    consumes fuel
lighter.consumesFuel();
//  action 3:    creates heat
lighter.createsHeat();
//  6)
//  Noun:        controller
//  action 1:    the controller registers an press
controller.registerInput();
//  action 2:    the controller registers a release
controller.registerRelease();
//  action 3:    the controller registers a pressure level
controller.registerPressureLevel();
//  7)
//  Noun:        amplifier 
//  action 1:    sends a signal to speaker
amplifier.sendsSignal();
//  action 2:    lowers volume
amplifier.decreaseAmplitude();
//  action 3:    increase volume
amplifier.increaseAmplitude();
//  8)
//  Noun:        river 
//  action 1:    the river flows faster
river.flowIncrease();
//  action 2:    the river's level rises
river.levelIncrease();
//  action 3:    erodes the banks
river.erodesBanks();
//  9)
//  Noun:        mouse
//  action 1:    register click
mouse.registerClick();
//  action 2:    track motion
mouse.trackMotion();
//  action 3:    illuminate desk
mouse.illuminateDesk();
//  10)
//  Noun:        bear
//  action 1:    the bear growls
bear.growl();
//  action 2:    the bear hunts
bear.hunt();
//  action 3:    the bear eats
bear.eat();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
