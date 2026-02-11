# === VARIABLES ===============================================================
MARV = .marvin/
PROJ = $(HOME)/$(MARV)
EXE = marvin
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -Iincludes
BUILD = $(PROJ)build/
BIN = $(PROJ)bin/
DS = $(PROJ)src/
CMD = $(PROJ)cmd/
SRC =	$(DS)printable.c \
        $(DS)warping.c \
        $(DS)alloc.c \
        $(DS)cmd_help.c \
        $(DS)cmd_update.c

CMD_LIST =	bbl

CMD_PATH = includes/cmd_path.h

CMD_SRC = $(addprefix $(CMD)cmd_, $(addsuffix .c, $(CMD_LIST)))

CMD_EXE = $(addprefix $(BIN), $(CMD_LIST))

# =============================================================================

# === OBJECT RULES ============================================================
OBJ = $(patsubst $(DS)%.c,$(BUILD)%.o,$(SRC))

$(BUILD)%.o: $(DS)%.c
	mkdir -p $(BUILD)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# =============================================================================

# === UTILS RULES ============================================================

re: fclean all bin

all: $(EXE) build

# =============================================================================

# === CLEAN RULES =============================================================

clean: 
	rm -Rf "$(BUILD)"

fclean: clean
	rm -f $(HOME)/.local/bin/$(EXE)
	echo "struct cmd commands_list[] = {" > $(CMD_PATH)

uninstall: remove
	rm -Rf $(PROJ)
	echo "Good bye"
	
# =============================================================================

# === INSTALL RULES ============================================================

$(CMD_EXE): $(CMD_SRC)
	@mkdir -p $(BIN)
	$(CC) $(CFLAGS) $(INCLUDE) $< $(OBJ) -o $@
	echo "	{"${$@%"$(BIN)"}"}, $@}," >> $(CMD_PATH)

link:
	echo "	{NULL: NULL}" >> $(CMD_PATH)
	echo "};" >> $(CMD_PATH)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE)  main.c $(OBJ) -o $(EXE)

bin: $(CMD_EXE) link

build: $(EXE)
	mv $(EXE) $(HOME)/.local/bin/
	@echo "You can enjoy now"

update:
	cd $(HOME)/$(MARV)
	git pull
	make -C $(HOME)/$(MARV) build

# =============================================================================

.PHONY: clean fclean uninstall re link build all
