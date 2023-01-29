CC=gcc
IDIR=include
CFLAGS=-g -Wall -I$(IDIR)
SRC=src
OBJ=obj

# both lines below are for replacement of OBJS=obj/file1.o obj/file2.o
SRCS=$(wildcard $(SRC)/*.c) # taking the files from SRC folder and store them in SRCS
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS)) # is substituting SRC .c files with OBJ .o files from the SRCS variable store into OBJS variable - I think this line copy .o files into obj directory

BINDIR=bin
BIN=$(BINDIR)/main
SUBMITNAME=project5.zip

_DEPS = api.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#below line is building the target for BIN
all:$(BIN)

#below line is building the target is for release
release: CFLAGS=-Wall -O2 -DNDEBUG -I$(IDIR)
release: clean
release: $(BIN)


$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@
	
$(OBJ)/%.o: $(SRC)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*
	
submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)

