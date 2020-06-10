/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef FILE_SYSTEM_PLUS_PLUS_H
#define FILE_SYSTEM_PLUS_PLUS_H

#include <cstring>
#include <iostream>
#include <pwd.h>
#include <dirent.h>
#include <fstream>
#include <sys/stat.h>

namespace fsplusplus {
	void List() {
	    DIR *directory;
	    struct dirent *entryname;
	    struct stat filestat;
    	    directory = opendir(getenv("PWD"));
    	    if(directory == NULL) {
        	printf("ERR: DIRECTORY NOT FOUND OR NULL\n");
        	return;
    	    }
            while ((entryname = readdir(directory)))
    	    {
        	stat(entryname->d_name, &filestat);
        	if(entryname->d_type == DT_DIR) {// DT_DIR -> directory
            	if(strstr(entryname->d_name, ".")) {
            		// Null
            	} else if(strstr(entryname->d_name, "..")){
	    		// Null
	    	} else {  
            	printf("%4s: %s\n", "[Dir]", entryname->d_name);
            	}
            } 
            else if(strstr(entryname->d_name, ".scr"))
            {
            	printf("%4s: %s\n", "[Scrift]", entryname->d_name);
            }     
	    else if(strstr(entryname->d_name, ".cpp")) 
	    {
            	printf("%4s: %s\n", "[C++]", entryname->d_name);
	    }  
	    else if(strstr(entryname->d_name, ".c"))
	    {
            	printf("%4s: %s\n", "[C]", entryname->d_name);		
	    }
	    else if(strstr(entryname->d_name, "CMakeLists.txt"))
	    {
            	printf("%4s: %s\n", "[CMake]", entryname->d_name);	
	    }
	    else if(strstr(entryname->d_name, ".sh"))
	    {
            	printf("%4s: %s\n", "[Bash]", entryname->d_name);	
	    }
 	    else if(strstr(entryname->d_name, ".py")) 
	    {
            	printf("%4s: %s\n", "[Python]", entryname->d_name);
	    }
	    else if(strstr(entryname->d_name, ".md")) 
	    {
            	printf("%4s: %s\n", "[Markdown]", entryname->d_name);
	    }	
            else {
               printf("%4s: %s\n", "[File]", entryname->d_name);
            }
    	}
   	 closedir(directory);
	}
}

#endif // FILE_SYSTEM_PLUS_PLUS_H
