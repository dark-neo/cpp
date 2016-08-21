
###########################################
# Copyright (c) 2014 Sergio Cruz          #
# All rights reserved.                    #
#                                         #
# Source code released under BSD license. #
# See LICENSE file for more details.      #
###########################################

# C/C++ development
# NOTE: USE ALWAYS `cc` OR `c++` FOR COMPILER COMMAND. CROSS-COMPILER.
#	(for example, between Linux and *BSD systems)

#################################################
# 		C RULES				#
#						#
# CC 		== C compiler			#
# CFLAGS	== C compiler flags		#
# LDFLAGS	== C libraries path		#
# SRCS		== always .c			#
#################################################

#################################################
# 		C++ RULES			#
#						#
# CXX		== C++ compiler			#
# CXXFLAGS	== C++ compiler flags		#
# LDXXFLAGS	== C++ libraries path		#
# SRCS		== can be: .cc .cpp .cxx	#
#################################################

PROJECT_NAME	= 03-intefaces
#CC		= cc
CXX		= c++
#CFLAGS		= -std=c11 -Wall -O3 -g -I$(INCLUDES)
CXXFLAGS	= -std=c++11 -Wall -O3 -g -I$(INCLUDES)
INCLUDES	= .
#LDFLAGS		=
LDXXFLAGS	=
SRCS		= main.cxx
#OBJS		= $(SRCS:.c=.o)
OBJS		= $(SRCS:.cxx=.o)
#OBJS		= $(SRCS:.cc=.o)
#OBJS		= $(SRCS:.cpp=.o)
DELCOM		= rm -rf
EXEC		= interfaces
VERSION		= 1.0.0
PREFIX		= /usr/local		# UNIX installation dir

default: help

help:
	@echo
	@echo "	$(PROJECT_NAME)"
	@echo
	@echo " Sergio Cruz"
	@echo " Copyright (c) 2014. All rights reserved."
	@echo
	@echo
	@echo " -- BUILD OPTIONS --"
	@echo
	@echo " help:		show this text and finish"
	@echo " all: 		build source code"
	@echo " depends:	build dependencies"
	@echo " clean:		delete object files"
	@echo " distclean:	delete object and executable files"
	@echo

all: depends $(OBJS)
	#$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS) $(LDXXFLAGS)
	@echo
	@echo
	@echo "Program version: $(VERSION)"
	@echo

# Generic Makefile part.
# It can be used to build any executable just by changing the definitions
# above (mainly, C(XX)FALGS, L(XX)FLAGS, SRCS, OBJS, DELCOM and EXEC variables)
# and deleting dependencies appended to the file from 'make depend'.

# This is a suffix replacement rule for building .o's from .c's.
# It uses automatic variables:
#	$<: the name of the prerequisite of the rule (a .c file)
#	$@: the name of the target of the rule (a .o file)
.c.o:
	#$(CC) $(CFLAGS) -c $< -o $@

.cc.o:
	#$(CXX) $(CXXFLAGS) -c $< -o $@

.cpp.o:
	#$(CXX) $(CXXFLAGS) -c $< -o $@

.cxx.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(DELCOM) $(OBJS)

distclean: clean
	$(DELCOM) $(EXEC)

depends: $(SRCS)
	#$(CC) $(CFLAGS) -E -M $(SRCS) > depends
	$(CXX) $(CXXFLAGS) -E -M $(SRCS) > depends

