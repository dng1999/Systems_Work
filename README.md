## Wednesday, 11/16: Time to make an executive decision by Dorothy Ng

Tech News: [The Web-Shaking Mirai Botnet Is Splintering—But Also Evolving](https://www.wired.com/2016/11/web-shaking-mirai-botnet-splintering-also-evolving/)

###execlp() - unistd.h
```
int execlp(const char *file, const char *arg, ...);
```
- *const char \*file* - path to the executable file
- const char \*arg[0] - name of executable program to be run
- const char \*arg[#] - arguments for the executable program

###execvp() - unistd.h
```
int execvp(const char *file, char *const argv[]);
```
