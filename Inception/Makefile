FILE=$(PWD)/srcs/docker-compose.yml
DATA_DIR=/home/$(USER)/data
MYSQL_DIR=/home/$(USER)/data/mysql
WORDPRESS_DIR=/home/$(USER)/data/wordpress

all: up

create_data_directory:
	@if ! [ -d "/home/$(USER)/data/mysql" ] || ! [ -d "/home/$(USER)/data/wordpress" ]; then \
        sudo mkdir -p $(MYSQL_DIR) $(WORDPRESS_DIR); \
    fi

up: create_data_directory
	@sudo docker-compose -f $(FILE) up -d --build

clean:
	@sudo docker-compose -f $(FILE) down;

fclean: clean
	@sudo rm -rf $(MYSQL_DIR)
	@sudo rm -rf $(WORDPRESS_DIR)
	@if [ "$$(docker volume ls -q)" ]; then \
		sudo docker volume rm -f mariadb_data wordpress_data; \
	fi
	@sudo docker system prune -fa

re: fclean all

