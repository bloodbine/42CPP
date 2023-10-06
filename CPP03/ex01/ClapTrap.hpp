/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:39:33 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 10:55:03 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:
		//OCF
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj);
		//Member Functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		//Getters
		std::string	getName(void) const;
		int		getHP(void) const;
		int		getEP(void) const;
		int		getAP(void) const;
};

#endif
