## Wednesday, 11/16: Time to make an executive decision by Dorothy Ng

Tech News: [The Web-Shaking Mirai Botnet Is Splintering—But Also Evolving](https://www.wired.com/2016/11/web-shaking-mirai-botnet-splintering-also-evolving/)

###execlp() - unistd.h
```
int execlp(const char *file, const char *arg, ...);
```
- file: path to the executable file
- arg[0]: executable program name
- arg[#]: arguments for the executable program
- takes command line arguments as strings

###execvp() - unistd.h
```
int execvp(const char *file, char *const argv[]);
```
- file: path to the executable file
- argv: an array containing the executable file name and the arguments for the executable
- takes command line arguments as an array of strings

###Notes for execlp() and execvp()
- runs executable files
- NULL must be the last argument
- replaces the current process with the process given by the arguments
```
printf("PID: %d",getpid());
execlp("emacs","emacs","main.c","-nw",NULL);
```
If you look at the PID for emacs main.c -nw, it will be the same PID as what your c program printed out.
