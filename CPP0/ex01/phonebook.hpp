/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:17:10 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/13 15:17:10 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
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