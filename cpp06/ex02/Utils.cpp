/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:06:28 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 14:21:08 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Utils.hpp"

int generateRandomNbrs(void)
{
    int randomNbr = 0;
    
    srand ( time(NULL) * getpid() );
    randomNbr = (rand() % 3) + 1;
    if (randomNbr < 0)
    {
        randomNbr *= -1;
    }
    return (randomNbr);
    
}


Base    *generate(void)
{
    Base    *b = NULL;
    int     randomNbr = generateRandomNbrs();

    switch (randomNbr)
    {
        case 1:
        {
            b = new A;
            break ;
        }
        case 2:
        {
            b = new B;
            break ;
        }
        case 3:
        {
            b = new C;
            break ;
        }
        default:
        {
            std::cout << "Invalid Choice\n";
            break ;
        }
        
    }
    return (b);
}



void    identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if (a != NULL)
    {
        std::cout << "A\n";
    }
    else if (b != NULL)
    {
        std::cout << "B\n";
    }
    else if (c != NULL)
    {
        std::cout << "C\n";
    }
}


void    identify(Base   &p)
{

    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A\n";
        return ;
    }
    catch( std::exception &bc)
    {
        std::cerr << bc.what() << " to derived class A\n";
    }
    
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B\n";
        return ;
    }
    catch( std::exception &bc)
    {
        std::cerr << bc.what() << " to derived class B\n";
    }
    
    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C\n";
        return ;
    }
    catch( std::exception &bc)
    {
        std::cerr << bc.what() << " to derived class C\n";
    }
}