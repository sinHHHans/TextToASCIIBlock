CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -cpp
LDFLAGS=-g 

SRCS=main.cpp String.cpp
OBJS=$(subst .cc,.o,$(SRCS))

all: converter

converter: $(OBJS)
	$(CXX) $(LDFLAGS) -o converter $(OBJS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) *~ .depend

include .depend