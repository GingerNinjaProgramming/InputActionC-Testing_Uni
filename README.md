# InputActionC-Testing_Uni

---

## Introduction 

In this task I was tasked with implementing one input action (movement or camera look) using Enhanced Input in C++ and expose at least one parameter to Blueprint for tuning and demonstrate it working and explain how it could support another input device (e.g., gamepad or touch).

Similar to other tasks I have done recently I am fairly new to unreal C++ and learning these things as I'm doing these tasks therefore my process was a combination of using unreal documentation information from google and debugging to complete the task.

This task is important as being able to implement input systems and having good control over them is important for making a game good and easily configurable. Doing this and understanding how this works will allow me to better create characters in unreal when I need to use C++.

---

## Implementation

This was accomplished by first making a C++ character class in unreal which automatically creates boiler plate for a ACharacter in C++ to be modified to meet the purposes of this task.

![](https://file.garden/aSY-yx_ZmANpQe1l/UniTasks/InputActionHeader.png)

Header file for Character

In the header file you first need to declare the relevant functions and variables to allow it to work. These being the Mapping Context, InputAction and Movement speed all exposed in the blueprint to be set per instance. Then we also have along with base boiler plate function we also have a method declared for setting up the input component called "SetupPlayerInputComponent" with a pointer to a UInputComponent as a parameter and another method for moving with a InputActionValue as a parameter

![](https://file.garden/aSY-yx_ZmANpQe1l/UniTasks/InputAction.png)

Main Script for Character

Now in the main script for the character we actually apply code to the bind the player to the exposed input action and allow that to move the player. First in the BeginPlay at the start we attempt to grab the player controller by doing:

```cpp
APlayerController* PC = Cast<APlayerController>(GetController())
```

![](https://file.garden/aSY-yx_ZmANpQe1l/UniTasks/AddMappingContext.png)

Blueprint equivalent for Adding Mapping Context 


This being the same as using the get controller and casting it to a player controller in unreal nodes. In this code it is also encapsulated in a if statement acting as a inbuilt isValid check along with grabbing the PlayerController in the PC variable if it is there.Then after this the same kind of thing is done when attempting to grab the UEnhancedLocalPlayerSubsystem as it attempts to grabs the subsystem,while using the result as a parameter for a if statement, using the player controller grabbed above it as a parameter to get the local player to get the subsystem from. If it can be grabbed that subsystem then has the mapping context variable exposed in the header file added to it using the "AddMappingContext".

Then we have the "SetupPlayerComponent" and since this already has some implementation built into unreal that we don't want to lose we first called the base classes version of the method using the "Super::" Identifier. After this we add our own custom logic which is fairly simple using the same technique used in the begin play to grab the EnhancedInput from the exposed PlayerInputComponent, this grabbed EnhancedInput then has the exposed MoveAction Binded to use the Trigger input behavior to call the Move function when its activated.

Then finally we use the parameter value gave by the binded action to grab a movement vector which can be then used to move the player in the correct direction as per their inputs. However first to ensure the movement happens based on the direction they are looking the controller's rotation is grabbed and used to get a forward and right movement direction that is then added as movement input to move the player so for the forward input 1 is forward -1 is back and for the right movement direction 1 is right and -1 is left.

Also to note as with most C++ work some blueprints were made to facilitated the testing of the C++ created here and obviously the values that are exposed are created in unreal as normal and provided to the classes instance in the world so it can function 

---

## Outcome

The final result has the player being able to move in all 4 of the cardinal directions at a press of the WASD keys with all primary logic coming from the C++ class with exposed values for the mapping context, input action and the movement speed.

I can confirm all task requirments have been met as i have implemented one movement action being movement using Enhanced Inputs in C++ and it has one parameter exposed being the speed, I have shown it working in the video bellow and it could support another input device as with Enhanced Input the actual logic of the inputs are universal just being able to tag on more buttons that activate that response like for example a gamepad

[**Demonstration video link**](https://file.garden/aSY-yx_ZmANpQe1l/UniTasks/ItWorkingInputAction.mkv)

---

## Bibliography

Unreal Engine 5.7 Documentation | Unreal Engine 5.7 Documentation | Epic Developer Community (s.d.) At: https://dev.epicgames.com/documentation/en-us/unreal-engine/unreal-engine-5-7-documentation (Accessed  03/12/2025).


---

## AI Usage Declaration

Chatgpt - General Debugging Help 
