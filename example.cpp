/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#include "FileSystemPlusPlus.h"

int main() {
	fsplusplus::List();
	fsplusplus::ListPath("/.git");
	fsplusplus::ReadFile("run.scr");
	fsplusplus::ReadFilePath(fsplusplus::GetCurrentWorkingDir() + "/" + "run.scr");
	fsplusplus::CreateFileWithoutAppend("hello");
    fsplusplus::CreateFile("hello", "Hello from FileSystem++");
	fsplusplus::FindPath("e");
	if(fsplusplus::IsExistFile("/bin/afetcheya") == true)
		std::cout << "Yey!\n";
	else
		std::cout << "Yeyn't!\n";
	return 0;
}
