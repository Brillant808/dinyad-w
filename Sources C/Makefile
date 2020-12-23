EXE = dinyad

HD = $(shell find . -name "*.h")

SRC = $(shell find . -name "*.c")

OBJ = $(SRC:.c=.o)

OPTIONS = -g 

all: 	$(EXE)

$(EXE):	$(OBJ)
	gcc -o $(EXE) $(SRC) $(HD) $(OPTIONS)

temp:
	find . -name "*[#,~,.o]" -type f -delete

clean:   temp
	rm -f $(EXE)
	rm -f $(OBJ)

fclean:  clean
	rm -f $(EXE)

re: 	 fclean  all