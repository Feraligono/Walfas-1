#Will need these flags for gui compliation
Flags=`pkg-config gtkmm-3.0 --cflags --libs`

Warn= -Wall

STD= --std=c++11

CC= g++

Source= main.o buffer.o image.o gui.o

#Compiliation----------------------------------------------
all: total

total: main.o buffer.o image.o gui.o
	$(CC) $(STD) $(Warn) $(Source) -o Walfas $(Flags)

main.o: main.cc
	$(CC) $(Warn) -c $(STD) main.cc $(Flags)

buffer.o: buffer.cc
	$(CC) $(Warn) -c $(STD) buffer.cc

image.o: image.cc
	$(CC) $(Warn) -c $(STD) image.cc

gui.o: gui.cc
	$(CC) $(Warn) -c $(STD) gui.cc $(Flags)

#Installation and Removal----------------------------------
install: Walfas
	mv Walfas /usr/local/bin

clean: Walfas
	rm Walfas
	rm *.o
	rm test.svg #temp cmd

uninstall:
	rm /usr/local/bin/Walfas
