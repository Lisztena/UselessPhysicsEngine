objects = object.o vector.o

all : $(objects)
	ar -r libupe.a $(objects)

object.o : object.cpp object.h data.h
	cc -c object.cpp

vector.o : vector.cpp vector.h data.h
	cc -c vector.cpp

install : libupe.a
	cp libupe.a /usr/lib/

.PHONY : clean

clean :
	-rm libupe.a $(objects)
