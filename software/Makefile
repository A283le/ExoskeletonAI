CC = mpic++
SRC := src
OBJ := build
INC := include

DEBUG = -g
LFLAGS = -pthread
CFLAGS = -Wfatal-errors -std=c++11

PROJ = ExoSAI

SOURCES := $(wildcard $(SRC)/*.cpp)
OBJECTS := $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SOURCES))

$(PROJ): $(OBJECTS)
	$(CC) $(DEBUG) $(LFLAGS) $^ -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(DEBUG) $(CFLAGS) -I$(INC) -c $< -o $@

clean:
	rm $(OBJECTS) $(PROJ)
