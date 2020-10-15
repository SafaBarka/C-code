#before runing make let's include another special phony target ,
#.PHONY , where we define all targets that are not files.
#mke will run its recipe regardless of whether a file with that name exists or what its last modification time is .
#-------------------------
.PHONY: all say_hello generate clean
#-------------------------

#if we try to run make , only the target say_hello will be executed.
#that;s because only the first target in the makefile is the default target.
#often called the default goal.
#this is the reason why you will see 'all' as the first target in most projects.
#it is the responsibility of 'all' to call other targets.

#we can override this default behavior using a special phony target called .DEFAULT_GOAL.
#this will run thr target 'generate' as default.
#as the name suggests , the phony target .DEFAULT_GOAL can run only one target at a time.
#-------------------------
#.DEFAULT_GOAL := generate
#-------------------------

#the simplest way to define a variable in a makefile is to use the = operator.
#for example to assign the command gcc to a variable CC.
#this is allso called a recursive expanded variable.

#Both $(CC) and $(CC) are valid references to call gcc. But if one trie to reassign a variable 
#to itself, it wwill cause an infinite loop .
#------------------------------
#CC = gcc
#CC = $(CC)
#-----------------------------

#to avoid this scenario , we can use the := operator (this is also called the simply expanded variable)
#---------
CC := gcc
CC := ${CC}
#-----------

#----------------------------
all : say_hello generate hello display_variable
#----------------------------

#----------------------------
display_variable:
	@echo $(CC)
#-----------------------------

#the variable is used in a rule
#----------------------------
hello: hello.c 
	$@{CC} hello.c -o hello
#----------------------------

#This is why most makefiles include all as a target that can call as many targets as needed
#the make should call say hello and generate.
#--------------------------
#all: say_hello generate
#--------------------------

#say_hello is a target
#-------------------------
say_hello:
#-------------------------
#when make was executed , the entire command echo "hello world" was displayed, 
#followed by actual command output, we often don't want that.
#-------------------
# echo "hello world";
#--------------------
#To supress echoing the actual command, we need to start echo with '@'
#"hello world" is called the recipe
#--------------------------
	@echo "hello World";
#----------------------

#add few more phony targets:generate and clean to makefile.
#-----------------------
generate:
#-------------------------
#-----------------------------------
	@echo "Creating empty text files..."
#-----------------------------------
#-----------------------------------
	@touch file-{1..3}.txt
#-----------------------------------

#it is a good practice not to call 'clean' in 'all', or put it as the first target.
#clean should be called manually when cleaning is needed as a first argument to make.
#---------------------------------------
clean:
#---------------------------------------
#---------------------
	@echo "Cleaning up..."
#---------------------
#---------------------
	rm *txt
#---------------------