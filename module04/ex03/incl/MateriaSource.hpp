/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 17:36:25 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
private:
	AMateria* _templates[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource &copy);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
