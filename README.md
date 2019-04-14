#  SIMPLE SHELL

0x15. C - Simple Shell: is a project from Holberton School where are to write a simple UNIX command interpreter.
__________

### How to run
 `./hsh`

#### Compilation
It would be compiled this way:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
### Testing

The shell should work like this in interactive mode:

```sh
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:

```sh
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

### Usage

- Includes shell.h
- Run the executable: ./hsh
- Use the command that you need.
- Function returns the output of the command, or error if the command was not found.

### Example Usage
- `Shell start! \*\\(\^-^)/*` = is displayed after run ./hsh
- `\(\^.^)/$ /bin/ls` = display de command ls.
- `\(\^.^)/$ pwd` = display the current directory.
- `\(\^.^)/$ exit` = end with the program  and display a message like:  `Bye! (-_-)zzz`

### Files

 File Name | Description
 --- | ---
 `add_new_str.c` | replace the command in the argv[0] for the created command.
 ` _atoi.c`|  convert the string of characters to numbers.
 `catch_binfunc.c` |  capture the special cases like exit.
 `cmd_not_found.c` |  print the error "command not found".
 `create_container.c` | create a malloc to keep copies.
 `exe.c` |  execute the functions.
 `extract_path.c` | capture the PATH.
 `find_command.c` | search the command in the directories of PATH.
 `free_argv.c` | free the mallocs of the arguments.
 `handle_exit.c` | manage the exit built in function "exit".
 `handle_path.c` |  manage and print the "PATH".
 `miniPrint.c` | is the main function.
 `mod_command.c` | free and modify.
 `penv.c` | print the environment.
 `search_path.c` | looking at environment for the "PATH".
 `search_slash.c` | search in the command for the "/" to execute immediately.
 `shell.h` | is the header file, containing all the declared functions.
 `split.c` | put apart the arguments to be executed.
 `_strcmp.c` | make a comparison in environ and the word to found.
 `_strdup.c` | make a duplicate of the commands and function if is necessary.
 __________________
### Task Project

##### Mandatories

* `README, man, AUTHORS` - Write a README.Write a man for your shell. You should have an AUTHORS file at the root of your repository.
* `Betty would be proud` - Write a beautiful code that passes the Betty checks.
* `Simple shell 0.1` -  Write a UNIX command line interpreter.
* `Simple shell 0.2 ` - Handle command lines with arguments.
* `Simple shell 0.3` - Handle the PATH.
* `Simple shell 0.4` - Implement the exit built-in, that exits the shell, usage: exit, You don’t have to handle any argument to the built-in exit.
* `Simple shell 1.0 ` - Implement the env built-in, that prints the current environment.
* `What happens when you type ls -l in the shell` - Write a blog post describing step by step what happens when you type ls -l.

##### Advanced

* `Test suite` - Contribute to a test suite for your shell. This is a task shared by everyone in the class.
* `Simple shell 0.1.1` - Write your own getline function.
* `Simple shell 0.2.1` -  You are not allowed to use strtok.
* `Simple shell 0.4.1 ` - handle arguments for the built-in exit. Usage: exit status, where status is an integer used to exit the shell.
* `Simple shell 0.4.2` - Handle Ctrl+C: your shell should not quit when the user inputs ^C
man 2 signal.
* `setenv, unsetenv` - IImplement the setenv and unsetenv builtin commands.
* `cd` - Implement the builtin command cd.
* `;` - Handle the commands separator ;.
* `&& and ||` - Handle the && and || shell logical operators.
* `alias` -Implement the alias builtin command. Usage: alias [name[='value'] ...]
* `Variables` - Handle variables replacement.Handle the `$?` variable. Handle the `$$` variable.
* `Comments` - Handle comments (#).
* `help` - Implement the help built-in. Usage: help [BUILTIN].
* `history` - Implement the history built-in, without any argument.
* `File as input` - Your shell can take a file as a command line argument.
___________________
#### About this project

This project was created by Andres Lopez and Jeniffer Vanegas at Holberton School.

All files were created and compiled on `Ubuntu 14.04.4 LTS using GCC 4.8.4` with the following flags:

`-Wall -Werror -Wextra -Wno-format -pedantic`.
