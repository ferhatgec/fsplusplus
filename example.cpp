/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#include "FileSystemPlusPlus.h"

int main() {
	fsplusplus::List();
	fsplusplus::ListPath(fsplusplus::CDFunction("/.git"));
	return 0;
}
