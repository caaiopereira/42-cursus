# Introduction

The objective of this project is to create a simple shell and learn a lot about processes and file descriptors

The existence of shells is linked to the very existence of IT. At the time, all coders agreed that communicating with a computer using aligned 1/0 switches was seriously irritating. It was only logical that they came up with the idea to communicate with a computer using interactive lines of commands in a language somewhat close to english. With Minishell project, we’ll be able to travel through time and come back to problems people faced when Windows didn’t exist.

# Mandatory

### Your shell should:
		• Display a prompt when waiting for a new command.
		• Have a working history.
		• Search and launch the right executable (based on the PATH variable or using a relative or an absolute path).
		• Avoid using more than one global variable to indicate a received signal. Consider the implications: this approach ensures that your signal handler will not access your main data structures.

		Not interpret unclosed quotes or special characters which are not required by the subject such as \ (backslash) or ; (semicolon).
		• Handle ’ (single quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence.
		• Handle " (double quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence except for $ (dollar sign).
  
	• Implement redirections:
		◦ < should redirect input.
		◦ > should redirect output.
		◦ << should be given a delimiter, then read the input until a line containing the delimiter is seen. However, it doesn’t have to update the history!
		◦ >> should redirect output in append mode.
  
	• Implement pipes (| character). The output of each command in the pipeline is connected to the input of the next command via a pipe.
	• Handle environment variables ($ followed by a sequence of characters) which should expand to their values.
	• Handle $? which should expand to the exit status of the most recently executed foreground pipeline.
	• Handle ctrl-C, ctrl-D and ctrl-\ which should behave like in bash.
 
	• In interactive mode:
		◦ ctrl-C displays a new prompt on a new line.
		◦ ctrl-D exits the shell.
		◦ ctrl-\ does nothing.
  
	• Your shell must implement the following builtins:
		◦ echo with option -n
		◦ cd with only a relative or absolute path
		◦ pwd with no options
		◦ export with no options
		◦ unset with no options
		◦ env with no options or arguments
		◦ exit with no options

	The readline() function can cause memory leaks. You don’t have to fix them. But
	that doesn’t mean your own code, yes the code you wrote, can have memory
	leaks
