#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <iostream>

class Brain {
		private:
			std::string ideas[100];
		public:
			Brain( void );
			Brain( Brain &obj );
			Brain& operator=( Brain& obj );
			~Brain( void );
			void setIdeas( std::string idea, int indice );
			const std::string getIdea( int indice ) const;
};

#endif