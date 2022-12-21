.PHONY: all debug release clean
target = calc.cpp
RELEASE_FLAGS = -O2 -Wall -DNDEBUG
DEBUG_FLAGS   = -g -O0 -Wall
RELEASE_EXEC  = calc
DEBUG_EXEC    = calc-dbg
#SOURCE        =

all: debug release

debug: $(DEBUG_EXEC)

$(DEBUG_EXEC): $(target)
	g++ $(DEBUG_FLAGS)  $(target) -o $(DEBUG_EXEC) 

release: $(RELEASE_EXEC)

$(RELEASE_EXEC):  $(target)
	g++ $(RELEASE_FLAGS)  $(target) -o $(RELEASE_EXEC)

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC)
