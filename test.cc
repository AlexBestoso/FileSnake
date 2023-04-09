#include <stdio.h>
#include <string>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <typeinfo>

using namespace std;

#include "./fileSnake.class.h"

int main(void){
	FileSnake fs;
	string targetDir = "./sample";

	if(fs.removeDirRecursive(targetDir)){
		printf("Appears successful.\n");
	}else{
		printf("Looks like it failed...\n");
	}
	return 0;
}
