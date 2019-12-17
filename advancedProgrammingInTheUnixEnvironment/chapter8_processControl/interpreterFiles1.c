#include "apue.h"
#include "apueerror.h"

int main(void){
	pid_t pid;
	if ((pid = fork()) < 0){
		err_sys("fork error");
	}else if (pid == 0){
		if ( execl("/Users/yiyang.zhou/Playground/books/advancedProgrammingInTheUnixEnvironment/chapter8_processControl/testinterp", "testinterp", "myarg1", "MY ARG2", (char *)0) < 0)
			err_sys("execl error");
	}
	if (waitpid(pid, NULL, 0) < 0)
		err_sys("waitpid error");
	exit(0);
}
