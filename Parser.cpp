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

int Parser::chooseParsing(std::vector<std::string> tokens) 
{
	switch (tokens[0])
	{
		case 'KICK':
			return (KickParser(tokens));
		case 'NICKNAME':
			return (nickParser(tokens));
		case 'PRIVMESSAGE':
			return (privMessageParser(tokens));
		case 'JOIN':
			return (joinParser(tokens));
		case 'USERNAME':
			return (userParser(tokens));
		case 'INVITE':
			return (inviteParser(tokens));
		case 'TOPIC':
			return (topicParser(tokens));
		case 'MODE':
			return (nickParser(tokens));
		default:
			return (groupMessageParser(tokens));
	}
	return 0;
}

int Parser::nickParse(std::vector<std::string> tokens) 
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

int Parser::userParse(std::vector<std::string> tokens) {

    std::vector<std::string> command = ?.getCommand();
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

