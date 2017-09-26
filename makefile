#compiles entire KNX project

SUBDIRS = Src/CDS/
BITVRS=64
BINPATH=$(shell pwd)/bin
DEBUG=false
COMMON=

export BITVRS
export BINPATH
export DEBUG
export COMMON

subdirs:
	for dir in $(SUBDIRS); do \
	 $(MAKE) -C $$dir; \
	done

.PHONY: run
run:
	bin/CDS

.PHONY: dbg
dbg:
	bin/CDS -d -v --nolog --test=hello

.PHONY: clean
clean:
	for dir in $(SUBDIRS); do \
	 $(MAKE) clean -C $$dir; \
	done
	 rm -f $@ bin/KNX
	 rm -f $@ bin/*.so

build: clean subdirs run