compile: mainDriver.c parse.c print.c flipHoriz.c menu.c mirror.c purple.c
	gcc -Wall -o transform mainDriver.c parse.c print.c flipHoriz.c menu.c mirror.c purple.c
run: compile
	./transform tiger.ppm > img.ppm
clean:
	rm transform
