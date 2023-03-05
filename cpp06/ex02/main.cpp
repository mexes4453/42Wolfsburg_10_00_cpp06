/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:37:59 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 14:07:38 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Utils.hpp"

int main(void)
{
    Base    *ptr_b = generate();
    identify(ptr_b);


    //Base    &ref_b = *(generate());
    identify(*ptr_b);
   
    delete ptr_b; 
    //delete ref_b; 
    
    return (0);
}