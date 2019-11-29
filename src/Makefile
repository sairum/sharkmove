#Makefile for sharkmove

CC		= g++
GDB_FLAGS 	= -Wall -ggdb
CC_OPTS		= -O2
LIBS		= -lm

TARGET		= sharkmove

SOURCES		= main.cpp random.cpp model.cpp help.cpp status.cpp parse_args.cpp run.cpp

OBJECTS		= main.o random.o model.o help.o status.o parse_args.o run.o

# Implicit rules

#.SUFFIXES:
.SUFFIXES: .cpp

%.o:	%.cpp
	$(CC) -c $(GDB_FLAGS) $(CC_OPTS) $(INCDIR) $<

# Build rules

all:	$(TARGET)

$(TARGET):	$(OBJECTS)
	$(CC) $(GDB_FLAGS) $(CC_OPTS) $(OBJECTS) $(INCDIR) $(LIBDIR) $(LIBS) -o $(TARGET)

depend:
	@makedepend $(SOURCES) 2> /dev/null
	
clean:	
	-rm -f *.o *~ 

# DO NOT DELETE THIS LINE -- make depend depends on it.


