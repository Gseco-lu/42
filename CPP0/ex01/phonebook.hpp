#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class Phonebook {
	
private:

	Contact		_list[8];
	static int	_next_empty_index;
	void		_get_info(Contact cont, int i) const;
	void		_info(std::string str) const;

public:

	Phonebook(void);
	~Phonebook(void);

	void		add();
	void		search() const;
};

#endif