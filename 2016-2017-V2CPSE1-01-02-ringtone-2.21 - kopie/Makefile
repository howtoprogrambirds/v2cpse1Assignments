#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source files in this project (main.cpp is automatically assumed)
SOURCES := player.cpp

# header files in this project
HEADERS := player.hpp

# other places to look for files for this project
SEARCH  := 

# set REATIVE to the next higher directory 
# and defer to the Makefile.due there
RELATIVE := $(RELATIVE)../

player.cpp : Makefile converter.exe
	converter.exe plays IndianaJones:d=4,o=5,b=250:e,8p,8f,8g,8p,2c.6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,2f.6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,1c6 > player.cpp 

converter.exe : converter.cpp
	g++ converter.cpp -o converter.exe
include $(RELATIVE)Makefile.due