#include "Parser.hpp"

int Parser::port(char *p)
{
	for (int i = 0; p[i]; i++)
		if (!std::isdigit(p[i]))
			throw ParserPortException();
	return(std::atoi(p));
}

int Parser::pass(char *p)
{
	for (int i = 0; p[i]; i++)
		if (p[i] <= '\t' && p[i] >= '\r')
			return 0;
	return 1;
}


std::vector<std::string> Parser::splitString(const std::string &str) {
    
	std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, ' ')) 
	{
		if (token)
        tokens.push_back(token);
    }
    return tokens;
}

int Parser::chooseParsing(std::vector<std::string> tokens, Client &client) 
{
	switch (tokens[0])
	{
		case "KICK":
			return (KickParser(tokens, client));
		case "NICKNAME":
			return (nickParser(tokens, client));
		case "PRIVMESSAGE":
			return (privMessageParser(tokens, client));
		case "JOIN":
			return (joinParser(tokens, client));
		case "USERNAME":
			return (userParser(tokens, client));
		case "INVITE":
			return (inviteParser(tokens, client));
		case "TOPIC":
			return (topicParser(tokens, client));
		case "MODE":
			return (nickParser(tokens, client));
		default:
			return (groupMessageParser(tokens, client));
	}
	return 0;
}

int Parser::nickParse(std::vector<std::string> tokens, Client &client) 
{

    if (tokens.size() < 2)
	{
	    std::cout << "Invalid command (more parameters needed)" << std::endl;
	    return 0;
	}
	if (tokens.size() > 2)
	{
	    std::cout << "Invalid command (only 2 parameters required)" << std::endl;
	    return 0;
	}
    if (tokens[1].size() < 3) {
        std::cout << "Invalid command (Nickname need more characters)" << std::endl;
        return 0;
    }
	for (int i = 0; i < tokens[i]; i++)
	{
		if (tokens[i] <= '\t' && tokens[i] >= '\r')
			return 0;
	}
    if (tokens[1].size() > 9 || tokens[1][0] == '#' || tokens[1][0] == ':') 
	{
        std::cout << "Invalid Nickname" << std::endl;
        return 0;
    }
    for (int i = 0; i < ClientsNick.size(); i++) {
        if (ClientsNick.getNickName() == tokens[1]) 
		{
            std::cout << "Repeated Nickname" << std::endl;
            return 0;
        }
    }
    return 1;
}

int Parser::userParse(std::vector<std::string> tokens, Client &client) {

    if (tokens.size() < 2)
	{
	    std::cout << "Invalid command (more parameters needed)" << std::endl;
	    return 0;
	}
	if (tokens.size() > 2)
	{
	    std::cout << "Invalid command (only 2 parameters required)" << std::endl;
	    return 0;
	}
    if (tokens[1].size() < 3) 
	{
        std::cout << "Invalid command (Nickname need more characters)" << std::endl;
        return 0;
    }
	for (int i = 0; i < tokens[i]; i++)
	{
		if (tokens[i] <= '\t' && str[i] >= '\r')
			return 0;
	}
    if (tokens[1].size() > 9 || tokens[1][0] == '#' || tokens[1][0] == ':') 
	{
        std::cout << "Invalid Nickname" << std::endl;
        return 0;
    }
    for (int i = 0; i < ClientsNick.size(); i++) 
	{
        if (ClientsNick.getNickName() == tokens[1]) 
		{
            std::cout << "Repeated Nickname" << std::endl;
            return 0;
        }
    }
    return 1;
}

int Parser::joinParse(std::vector<std::string> tokens, Client &client, Server &server) 
{
	std::vector<std::string> Server.getChannels() = channels;

	if (!client.getNick() || !client.getUser())
		return 0;
	if (tokens[1][0] != '#')
		return 0;
	for (int i = 0; channels[i] != channels.size(); i++)
	{
		if (channels[i] == tokens[1] && flags[1] == 1)
			return 0;
	}
	for (int j = 0; channels[j] != channels.size(); j++)
	{
		if (channels[j] == tokens[1])
		{
			if (channels[j].getflags()[0] == 1)
				return 0;
			if (channels[j].getflags()[2] == 1)
			{
				if (tokens[2])
				{
					if tokens[2] != channels[j].getPass()
						return 0;
				}
			}
		}

	}
	Channel::createChannel();
	return 1;


}

int Parser::kickParse(std::vector<std::string> tokens, Client &client, Server &server)
{
	std::vector<std::string> clients = server.getClients();
	std::vector<std::string> channels = server.getChannels();
	if (!client.getNick() || !client.getUser())
		return 0;
	for (int j = 0; channels[j] != channels.size(); j++)
	{
		if (tokens[2] == channels[j])
		{
			std::vector<std::string> operators = channels[j].getOperators();
			for (int q = 0; operators[q] != operators.size(); q++)
			{
				if (operators[q] == client)
				{
					for (int i = 0; clients[i] != clients.size(); i++)
					{
						if (tokens[1] == clients[i])
							return 1;
					}
				}
			}
		}
	}
	return 0;

}

int Parser::inviteParse(std::vector<std::string> tokens, Client &client, Server &server)
{
	std::vector<std::string> clients = server.getClients();
	std::vector<std::string> channels = server.getChannels();
	if (!client.getNick() || !client.getUser())
		return 0;
	for (int j = 0; channels[j] != channels.size(); j++)
	{
		if (tokens[2] == channels[j])
		{
			std::vector<std::string> operators = channels[j].getOperators();
			for (int q = 0; operators[q] != operators.size(); q++)
			{
				if (operators[q] == client)
				{
					for (int i = 0; clients[i] != clients.size(); i++)
					{
						if (tokens[1] == clients[i])
							return 1;
					}
				}
			}
		}
	}
	return 0;
}

int Parser::topicParse(std::vector<std::string> tokens, Client &client, Server &server)
{
	std::vector<std::string> clients = server.getClients();
	std::vector<std::string> channels = server.getChannels();
	if (!client.getNick() || !client.getUser())
		return 0;
	for (int j = 0; channels[j] != channels.size(); j++)
	{
		if (tokens[2] == channels[j])
		{
			if (channels[j].getflags()[2] == 1)
			{
				std::vector<std::string> operators = channels[j].getOperators();
				for (int q = 0; operators[q] != operators.size(); q++)
				{
					if (operators[q] == client)
					{
						for (int i = 0; clients[i] != clients.size(); i++)
						{
							if (tokens[1] == clients[i])
								return 1;
						}
					}
				}
			}
			else
			{
				for (int i = 0; clients[i] != clients.size(); i++)
				{
					if (tokens[1] == clients[i])
						return 1;
				}
			}
		}
	}
	return 0;
}

int Parser::modeParse(std::vector<std::string> tokens, Client &client, Server &server)
{
	std::vector<std::string> clients = server.getClients();
	std::vector<std::string> channels = server.getChannels();

	if (!client.getNick() || !client.getUser())
		return 0;
	for (int j = 0; channels[j] != channels.size(); j++)
	{
		if (tokens[1] == channels[j])
		{
			std::vector<std::string> flags = channels[j].getflags();
			for (int q = 0; operators[q] != operators.size(); q++)
			{
				if (operators[q] == client)
				{
					if (token[2] == 'i')
					{
						if (flags[0] == 1)
							channels[j].setFlag(0, 0);
						else
							channels[j].setFlag(0, 1);
					}
					if (token[2] == 't')
					{
						if (flags[1] == 1)
							channels[j].setFlag(1, 0);
						else
							channels[j].setFlag(1, 1);
					}
					if (token[2] == 'k')
					{
						if (flags[2] == 1)
						{
							channels[j].setFlag(2, 0);

						}
						else
						{
							channels[j].setFlag(2, 1);
							if (token[3])
								channels[j].setPass(token[3]);
							else 
								return error_pass;
						}
					}
					if (token[3] == 'o')
					{
						if (flags[3] == 1)
							channels[j].setFlag(3, 0);
						else
							channels[j].setFlag(3, 1);
					}
				}
			}
		}
	}
	return 0;

}