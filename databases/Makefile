EXEC=main
FORMAT=c
CC=gcc
FC=gfortran
OBJDIR=obj
SOURCEDIR=src
TEST_DIR=test
FILES:=$(notdir $(basename $(shell find $(SOURCEDIR) -name '*.$(FORMAT)')))
OBJECTS:=$(FILES:%=$(OBJDIR)/%.o)
TARGETS:=$(FILES:%=$(SOURCEDIR)/%.$(FORMAT))
TESTS:=$(wildcard $(TEST_DIR)/*.$(FORMAT))
CFLAGS=-g -Wall -w
LDFLAGS=-ldl -lm
INCLUDE=include

all: $(EXEC)

.PHONY: check
check:
	@echo 'Checking variables:'
	@echo -e "\t$(FILES)\n\t$(TARGETS)\n\t$(OBJECTS)\n\t$(TESTS)"

$(EXEC): $(OBJECTS)
	$(FC) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SOURCEDIR)/%.c
	$(FC) -o $@ -c $^ -I $(INCLUDE)

#$(basename test/%): test/%.c
	#@echo $^

.PHONY: test
test/%.c: test/%
	@echo $(TESTS)

.PHONY: list
list:
	@$(MAKE) -pRrq -f $(lastword $(MAKEFILE_LIST)) : 2>/dev/null | awk -v RS= -F: '/^# File/,/^# Finished Make data base/ {if ($$1 !~ "^[#.]") {print $$1}}' | sort | egrep -v -e '^[^[:alnum:]]' -e '^$@$$'

clean:
	@rm -f $(EXECS) $(OBJECTS)
