## Wednesday, 11/16: Time to make an executive decision by Dorothy Ng

Tech News: [The Web-Shaking Mirai Botnet Is Splintering—But Also Evolving](https://www.wired.com/2016/11/web-shaking-mirai-botnet-splintering-also-evolving/)

###execlp() - unistd.h
```
int execlp(const char *file, const char *arg, ...);
```
- file: path to the executable file
- arg[0]: executable program name
- arg[#]: arguments for the executable program
--
- runs the executable file specified in the second parameter using the arguments given by the following parameters
- note: the last argument must always be NULL

###execvp() - unistd.h
```
int execvp(const char *file, char *const argv[]);
```
