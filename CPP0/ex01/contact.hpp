#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
private:

public:
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	Contact(void);
	~Contact(void);
	
};

#endif