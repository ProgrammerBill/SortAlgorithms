CC = g++
CFLAGS += -ISelectionSort/cpp 
CFLAGS += -ISortCommon/cpp 
CFLAGS += -ITestUtils/cpp
LDFLAGS += -std=c++11 -lpthread  

target := sort_cpp
SRC_FILES := main.cpp 
all :$(target)  

$(target): 
	$(CC) -g -o $@ $(SRC_FILES) $(CFLAGS) $(LDFLAGS)

clean :    
	@rm -rf *.o *~
	@rm $(target)
.PHONY : clean  
