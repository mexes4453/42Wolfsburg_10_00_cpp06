/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:01:40 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 14:00:43 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_HPP
# define UTILS_HPP
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <cstdlib>
# include <exception>
# include <unistd.h>
/**
 * @brief 
 * It randomly instanciates A, B or C and returns the instance as a Base 
 * pointer. 
 * 
 * @return Base* 
 */
Base * generate(void);


/**
 * @brief 
 * It prints the actual type of the object pointed to by p: "A", "B" or "C".
 * 
 * @param p 
 */
void identify(Base* p);


/**
 * @brief 
 * It prints the actual type of the object pointed to by p: "A", "B" or "C". 
 * Using a pointer inside this function is forbidden.
 * 
 * @param p 
 */
void identify(Base& p);


/**
 * @brief 
 * Generates random  numbers between 1 and 3 inclusive.
 * 
 * @return int 
 */
int generateRandomNbrs(void);

# endif // UTILS_H
