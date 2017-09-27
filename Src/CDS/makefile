#compiles RTE component

CC = g++
CFLAGS = -std=c++14 -Wall -Iheaders $(COMMON) -g
LFLAGS = -lm -ldl -lpthread -L$(BINPATH)
VERSION=-DRTEVERSION=\"0.0.1\"
OUT = CDS
CLEANEXT = o a
BITVRS=64
DBGFLAG=
SRC=main.cpp CDS.cpp startup.cpp profile.cpp config.cpp

ifeq ($(shell uname), Linux)
	FixPath = $1
	PLATFORM = -D__LINUX
	OSMODE = -DBITMODE=$(BITVRS)
	EXPORT_PTH=../../bin/
	EXT=
	RUNPATH=./$(EXPORT_PTH)$(OUT)$(EXT)
else
#Windows
	FixPath = $(subst /,\,$1)
	PLATFORM = -D__WINDOWS
	OSMODE = -DBITMODE=$(BITVRS)
	EXPORT_PTH=../../bin/
	EXT=.exe
	RUNPATH=$(EXPORT_PTH)$(OUT)$(EXT)
endif

all:
	$(CC) $(SRC) $(OSMODE) $(CFLAGS) $(VERSION) $(PLATFORM) $(LFLAGS) $(KLIB) -o $(RUNPATH)

.PHONY: clean
clean:
	rm -f $@ *.o

.PHONY: dbg
dbg: $(OUT)
	$(RUNPATH) $(DBGFLAGS)
