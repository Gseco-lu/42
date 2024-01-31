/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:24:56 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/31 20:34:26 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <stack>
# include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack &mutantstack);
        ~MutantStack();
        MutantStack &operator=(const MutantStack &mutantstack);
        typedef typename std::stack<T, Container>::container_type::iterator  iterator;
        iterator begin ();
        iterator end ();
};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &mutantstack)
{
    *this = mutantstack;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &mutantstack)
{
    this->std::stack<T, Container>::operator=(mutantstack);
    return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin ()
{
    return (std::stack<T, Container>::c.begin());
};

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end ()
{
    return (std::stack<T, Container>::c.end());
};

#endif