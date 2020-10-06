PROJECT_NAME = BillingSystemInDepartmentalStore

BUILD = build

SRC = main.c\
src/Add_Product.c\
src/Authenticate.c\
src/Calculate_Bill.c\
src/Design.c\
src/Edit_Product.c

TEST_SRC = src/Authenticate.c\
test/test_Project.c\
src/Add_Product.c\
src/Edit_Product.c\
src/Design.c\
src/Calculate_Bill.c\
CUnit/Automated.c\
CUnit/Basic.c\
CUnit/Console.c\
CUnit/CUError.c\
CUnit/Curses.c\
CUnit/MyMem.c\
CUnit/test_cunit.c\
CUnit/TestDB.c\
CUnit/TestRun.c\
CUnit/Util.c

TEST_OUTPUT = $(BUILD)/TEST_$(PROJECT_NAME).out

INC = -Iinc\
-ICUnit

PROJECT_OUTPUT =$(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

run: $(PROJECT_OUTPUT)
	./$(PROJECT_OUTPUT).out

doc:
	make -C ./documentation

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT).OUT
	
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)
	
$(BUILD):
		mkdir build