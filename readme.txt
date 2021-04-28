  This entire program is meant to simulate a version control system that allows it's user to add, remove and modify a variety of files in it's collection.
  
  The dirver file inital prompts the user to create a repository where all the files will be stored. The driver code then contains a menu for the user to select options from including adding a file to the repoistory, removing one, commit any changes to the file and a method of chekcing out previous versions of the file. This is implemented using a while loop and a basic switch statement to read the user's iput and run the correct function from the mniGit.cpp file.

Adding a File
  The user is prompted to enter the name of the file they would like to add to the repository. Then a singely linked list is traversed to see if this fail currently exists in the repository or not. If the file name is unique then it is added to the repository with a version number 00 and the user continues on with the program and taken back to the menu options.
  
Removing a File
  This function also prompts the user to enter a file name, but this of a file to be deleted. The singly linked list is again traverse to search for the file. If it's found then it's deleted, otherwise the user is told it can not be found. The user is returned to the same menu option loop.
  
Commmiting Changes
    With each time the user commits a new node in the doubly linked list with a new increment number, one higher than the previous one. If the file doesn't currently exist in the repository then it copies it into the repository and and sets the number to 00. If it does exist already it will check if the current version against the previous version if any changes have been detected. if they have the file will be copied in the repository and the file version will be increased by one. 
    
Checkout
  If the user wants this option to see a previous commit of a file. They are told that the may lose any changes to files they have not commited. The suer msut then enter a valid commit number for the file the file will be overwritten with the contents of the previous commit. Here the user can add or remove a file. Once the user is done they are returned to the menu loop. 
  
Quit Option
  The user is printed a goodbye statement and the file and repository are deleted. 
