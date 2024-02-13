/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:39:43 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/06 15:39:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <sstream>


class PmergeMe
{
	public:
		// Constructors
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		
		// Destructor
		~PmergeMe();
		
		// Operators
		PmergeMe & operator=(const PmergeMe &assign);
		
		static void execute(char **av, int size);

	private:
		static std::vector<int> _arr;
		static std::vector<int> _sorted_arr;
		static std::vector<std::pair<int,int> > pairs;
		static std::list<int> _list;
		static std::list<int> _sorted_list;
		static std::list<std::pair<int,int> > list_pairs;

		static void av_to_arr(char **av);
		static void merge_insert_vector();
		static void merge_insert_list();
		
		template <typename T>
		static std::string	t_print(T const &c)
		{
			std::stringstream ss;
			for (typename T::const_iterator it = c.begin(); it != c.end(); it++)
				ss << *it << " ";
			return ss.str();
		}
};

#endif