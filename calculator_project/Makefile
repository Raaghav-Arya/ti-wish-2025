INCLUDE_DIR = inc
OUTPUT_DIR = output
SRC_DIR = src
CC = gcc 

calculatorProjectTest : $(OUTPUT_DIR)/add.o $(OUTPUT_DIR)/sub.o $(OUTPUT_DIR)/mul.o $(OUTPUT_DIR)/div.o $(OUTPUT_DIR)/menu.o $(OUTPUT_DIR)/main.o
	$(CC) -o $(OUTPUT_DIR)/calculatorProjectTest $(OUTPUT_DIR)/add.o $(OUTPUT_DIR)/sub.o $(OUTPUT_DIR)/mul.o $(OUTPUT_DIR)/div.o $(OUTPUT_DIR)/menu.o $(OUTPUT_DIR)/main.o

$(OUTPUT_DIR)/add.o : $(SRC_DIR)/add.c $(INCLUDE_DIR)/add.h
	$(CC) -I $(INCLUDE_DIR) -c $(SRC_DIR)/add.c -o $(OUTPUT_DIR)/add.o

$(OUTPUT_DIR)/sub.o : $(SRC_DIR)/sub.c $(INCLUDE_DIR)/sub.h
	$(CC) -I $(INCLUDE_DIR) -c $(SRC_DIR)/sub.c -o $(OUTPUT_DIR)/sub.o

$(OUTPUT_DIR)/mul.o : $(SRC_DIR)/mul.c $(INCLUDE_DIR)/mul.h
	$(CC) -I $(INCLUDE_DIR) -c $(SRC_DIR)/mul.c -o $(OUTPUT_DIR)/mul.o

$(OUTPUT_DIR)/div.o : $(SRC_DIR)/div.c $(INCLUDE_DIR)/div.h
	$(CC) -I $(INCLUDE_DIR) -c $(SRC_DIR)/div.c -o $(OUTPUT_DIR)/div.o

$(OUTPUT_DIR)/menu.o : $(SRC_DIR)/menu.c $(INCLUDE_DIR)/menu.h
	$(CC) -I $(INCLUDE_DIR) -c $(SRC_DIR)/menu.c -o $(OUTPUT_DIR)/menu.o

$(OUTPUT_DIR)/main.o : $(SRC_DIR)/main.c $(INCLUDE_DIR)/add.h $(INCLUDE_DIR)/sub.h $(INCLUDE_DIR)/mul.h $(INCLUDE_DIR)/div.h $(INCLUDE_DIR)/menu.h
	$(CC) -c $(SRC_DIR)/main.c -o $(OUTPUT_DIR)/main.o

clean:
	rm -f $(OUTPUT_DIR)/*.o $(OUTPUT_DIR)/calculatorProjectTest.exe