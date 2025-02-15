# ***INTRODUCTION***
This is the tutorial for the [***Makefile***](https://en.wikipedia.org/wiki/Make_(software)#Makefile)!
A **Makefile** is a file that is used to build projects, ***and*** is easier than [***CMake***](https://en.wikipedia.org/wiki/CMake), but can also be use to run ***ANY*** command possible in the terminal.
</br>
</br>
</br>
</br>
</br>
# ***SYNTAX***
Alright, let's get to the [***syntax***](https://en.wikipedia.org/wiki/Syntax_(programming_languages)). A ***Makefile*** is like a [***BASH***](https://en.wikipedia.org/wiki/Bash_(Unix_shell)) file, except, the ***syntax*** is different.
```
all:
	echo "Blah, blah, blah."
	@echo "Blah, blah, blah."
```
You see a difference, don't you? The first line has no ```@``` symbol. The ```@``` symbol tells the ```make``` command to not print the entered</br>command to the shell before executing the command.
If you put ```@``` before the command, it executes the command without</br>printing ```echo "Blah, blah, blah."``` to the shell.
