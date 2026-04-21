CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = numerical_demo
SRCS = main.cpp numerical_methods.cpp

all:
	$(CXX) $(SRCS) -o $(TARGET) $(CXXFLAGS)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)