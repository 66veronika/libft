This project has been created as part of the 42 curriculum by vskopova

DESCRIPTION
The purpose of this function is to read a file and detect the end of each line.
Each line will then be seperately output on the terminal after compiling. The last line is returned even if it does not end with \n.
This is achieved by breaking the read loop when read() returns \0 (end of file), allowing the remaining content in the stash (without a newline) to be processed.
We create char buffer, where we temporarily store read data through the read function. The amount of bytes read is set with BUFFER_SIZE and no matter the size our program should work. 
If the BUFFER_SIZE is smaller it will be a little slower, because we need more calls from the read function, so stash (which must be static so its value persists between function calls) will be filled slower too. 
If the size of BUFFER_SIZE is higher then we will need fewer function calls and we will have more \n in our stash, but with the function get_line we will only extract the first line and stash will get updated. 

Function explanations:

get_next_line.c
- get_next_line(int fd) 
	in this function we declare a static variable (stash), which is initialized to NULL and keeps its value between calls.
	we have to set guards - if fd is < 0 (-1 is error/failure) or BUFFER_SIZE <= 0, then we will return NULL
	then we call the helper functions needed to run our program

- read_and_stash(int fd, char *stash)
	in this function we call the function read and we store the output into bytes_read
	at the same time our data are put into buffer. We use function strjoin to put buffer data into stash. If in the stash is \n (found by using function strchr) then the while loop ends and we move on to extract the line from stash. 

	if (bytes_read == 0) - we have to end the loop with break, because 0 means it is end of file.

- get_line(char *stash)
	Here we extract the line from our stash. 

- clean_stash(char *stash)
	In this function we update our stash after we extracted a new line. If there is nothing after said \n then we free our stash. If there is something after \n we save that into another variable - with the help of function strdup, clean our stash and then put back only the value from another variable back.


get_next_line_utils.c
- ft_strjoin(char const *s1, char const *s2)
	Allocates new memory using malloc, copies both input strings into it, and returns the newly created concatenated string.
	used in read_and_stash to update stash with newly read buffer.

- ft_strlen(const char *str)
	Returns the length of a string.
	Used in our strjoin function.

- ft_strchr(const char *s, int c)
	Locates the first occurrence of character c in the string s.
	Used in read_and_stash to stop reading once a newline is found.

- ft_strdup(const char *s)
	Allocates memory and returns a duplicate of the string s.
	Used in clean_stash to update our stash after we extracted a line.


BONUS PART
For the bonus part, the function must be able to handle multiple file descriptors at the same time. For that we only have to turn our static char stash into an array. That way, each fd has its own stash. 

INSTRUCTIONS
To compile the project, run:
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c

To compile bonus part, run:
cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main.c

RESOURCES
https://www.geeksforgeeks.org/c/input-output-system-calls-c-create-open-close-read-write/
https://42-cursus.gitbook.io/guide/1-rank-01/get_next_line
https://medium.com/@beatrizbazaglia/get-next-line-3872eb3189e6
https://labex.io/tutorials/c-how-to-manage-input-buffer-in-c-418766