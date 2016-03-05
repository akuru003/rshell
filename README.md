RShell
=======

Licesing Information can be found in: LICENSE
---
Project download link: https://github.com/akuru003/rshell.git
---

Author List:
-----------
Abraham Kuruvila
 
Brent Badhwar

File List:
------
```
main.cpp

makefile

test_test.sh

precedence_test.sh

commented_command.sh

exit.sh

LICENSE

README.md
```

Overview:
---

RShell is a linux terminal emulator, a program that takes bash commands from the user to execute. Like other terminals, RShell displays a prompt in the following format: `user001@machine001$` where `user001` is the user’s login name and `machine001` is the machine. 

RShell reads in commands in the following format:
`user001@machine001$ command [argumentList] connector`, where a command is an executable operation and a connector “connects” multiple commands together if necessary. 

There are three different types of connectors:
‘;’ = executes the next command unconditionally
‘&&’ = executes the next command only if the command that precedes it is successful
‘||’ = executes the next command only if the command that precedes it fails

This effectively allows the user to “string” together commands in one input string.

To execute the commands given by the user, the process could be summarized briefly as: 
1. Pass the command to the execute function (`execute(string command)`). 
2. Invoke `fork()`, which creates a child process and a parent process. 
3. Child process will run execvp which will ultiametly run the command  `execvp(command.c_str())`_
4. When the child process is done executing, the parent process will resume.  

The user may enter as many commands as they wish and will continue to execute until the user enters the `exit` command which quits the program.

RShell allows for precedence operators () to be used, which allows the user to decide the order 
a particular command should execute. For an example, if the user enters: `(echo A && echo B) || (echo C && echo D)` RShell should output in the order: `A C D`, as opposed to outputing according to the default precedence of the connectors (&& before ||) which would output in the order: `A B`. 

RShell also has a built-in Test Command, denoted by `test` before the command or using square brackets around a command , which returns (TRUE) if a  command was successful and (FALSE) if the command fails. For instance, for the following command: `[-e /documents/test.txt]` , (where the command ' -e' checks if the file test.txt exists) if the file test.txt exists, RShell should return (TRUE), otherwise it should return (FALSE). This test command comes in handy when writing complex conditional commands into RShell. The default test command flag is -e, which checks if the parameter the user passed in the command exists.  


How to run:
---
To run,

``` 
1. Open terminal and run the following commands:
2. git clone https://github.com/akuru003/rshell.git
3. cd rshell
4. git checkout hw1
5. make
6. bin/rshell
```

Known bugs:
---

1. `cd` command is not supported (returns an error).
2. Only single and double `&` and `|` connectors are supported
(more than two `&` and `|` will return an error). 
3. User can enter as many commands as they wish with connectors, however, commands with over 1,000,000 parameters will return an error, due to statically defined memory. Ex: (echo a a a a ...). 
4. When running the echo command, if the user enters a phrase using quotes containing any connector, the program will output everything within the quotations except the connector.
5. Garbage input, (ex. "ajdhfhjs") might crash the program.
6. Unmatched parentheses and brackets still allow for command to execute as intended, however, this should ideally cause an error to inform the user that they did not enter a valid command. 
7. The usage of the the arrow keys will not give the previous and next command.
8. Entering commands within paratheses without connectors crashes the program.  


