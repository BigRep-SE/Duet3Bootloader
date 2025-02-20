/*
 * Version.h
 *
 *  Created on: 15 Oct 2020
 *      Author: David
 */

#ifndef SRC_VERSION_H_
#define SRC_VERSION_H_

#ifndef VERSION_TEXT
#ifndef VERSIONTAG
#define VERSION_TEXT		"3.6.LOC"
#else
# define VERSION_STR(x) #x
# define VERSION_TO_STR(x) VERSION_STR(x)
# define VERSION_TEXT VERSION_TO_STR(VERSIONTAG)
#endif
#endif


#endif /* SRC_VERSION_H_ */
