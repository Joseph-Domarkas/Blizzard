IDIR=../
CC=g++
CFLAGS=-I$(IDIR) -w -std=gnu++20 -g

ODIR=object
LDIR=library

LIBS=-lm

_DEPS =
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Blizzard.o instance/instance.o instance/compiler/compiler.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c++ $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

Blizzard: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ $(INCDIR)/*~ 
