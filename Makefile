###### MAKEFILE ######

# Global Config
NAME		= push_swap

# Source Files
SRC_FILES	= main.c \
			check_input.c \
			ft_split.c \
			split_utils.c \
			init.c \
			algorithm.c \
			general_utils.c \
			exit_utils.c \

SRC_DIR		= src
SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))

# Objects Files
OBJ_DIR		= $(SRC_DIR)/obj
OBJ			= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

CFLAGS		= -Wall -Wextra -Werror

# Colors
RED=\033[38;5;216m
GREEN=\033[38;5;158m
YELLOW=\033[38;5;229m
BLUE=\033[38;5;159m
PINK=\033[38;5;217m
NC=\033[0m  # (reset)

# RULES
all: $(NAME)

$(NAME): $(OBJ)
	@echo -e '$(PINK) 🌱🐞 Littlebugs are finishing their work $... 🌱⚒️$(NC)'
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo -e '$(GREEN) Linking finished!🌱🌼 $(NAME) is ready!$(NC)'

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo -e '$(PINK) $< 🌱 Bugs are building$.... 🐞 $(NC)'
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	@echo -e '$(RED) 🧼 Bugs are cleaning $(NAME) objects ... 🫧🐛'
	@$(RM) -rf $(OBJ) 

fclean: clean
	@echo -e '$(RED) 🧼 Just cleaning up a bit more! 🫧🐝'
	@$(RM) $(NAME)
	@echo -e '$(BLUE)🦋🫧🧼🫧 The bugs have clean everything! 🫧🧼🫧🐞$(NC)'

re: fclean all

.PHONY: all clean fclean re
