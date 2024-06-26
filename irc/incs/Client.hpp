#ifndef CLIENT_HPP
# define CLIENT_HPP

# include <iostream>

class Client
{
	private:
		int				_fd;
		int				_id;
		std::string		_user;
		std::string		_nick;
		
	public:
		/* Constructor*/
		Client( int fd , int id );
		~Client();

		/* main member function */
		void				start( void );

		/* get funcs */
		int					getId( void ) const;
		const std::string	&getUser( void ) const;
		const std::string	&getNick( void ) const;
};

#endif