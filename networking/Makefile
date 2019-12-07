EXEC=main
FORMAT=c
CC=gcc
OBJDIR=obj
SOURCEDIR=src
TESTDIR=test
FILES:=$(notdir $(basename $(shell find $(SOURCEDIR) -name '*.$(FORMAT)')))
TESTS:=$(basename $(shell find $(TESTDIR) -name '*.$(FORMAT)'))
TARGETS:=$(FILES:%=$(SOURCEDIR)/%.$(FORMAT))
OBJECTS:=$(FILES:%=$(OBJDIR)/%.o)
CFLAGS=-g -Wall -w
LDFLAGS=#-ldl -lm
INCLUDE=include

all: $(SOURCEDIR)

.PHONY: check
check:
	@echo 'Checking variables:'
	@echo -e "\t$(FILES)\n\t$(TARGETS)\n\t$(OBJECTS)\n\t$(TESTS)"

$(EXEC): $(OBJECTS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SOURCEDIR)/%.c
	$(CC) -o $@ -c $^ -I $(INCLUDE)

$(SOURCEDIR): $(basename $(TARGETS))

$(TESTDIR): $(TESTS)

.PHONY: list
list:
	@$(MAKE) -pRrq -f $(lastword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/^# File/,/^# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' | sort | egrep -v -e '^[^[:alnum:]]' -e '^$@$$'

clean:
	@rm -f $(EXECS) $(OBJECTS) $(TESTS)
