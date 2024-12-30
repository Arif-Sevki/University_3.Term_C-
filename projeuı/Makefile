# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -I C:\fltk-1.4.0-1 -I C:\ExternalLibs\FLTK

# Linker Flags
LDFLAGS = -L C:\ExternalLibs\FLTK\lib -lfltk -lcomctl32 -lole32 -luuid -lgdi32 -lws2_32 -lgdiplus -lwinspool -lcomdlg32

# Target
TARGET = hellofltk.exe

# Source Files
SRCS = hellofltk.cpp

# Build Rules
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

clean:
	del $(TARGET)
