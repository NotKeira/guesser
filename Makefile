CXX = g++
CXXFLAGS = -std=c++23 -Wall
SRC_DIR = src
OBJ_DIR = obj
TARGET = guessing_game

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)