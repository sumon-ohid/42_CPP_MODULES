/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:22:06 by msumon            #+#    #+#             */
/*   Updated: 2024/08/06 21:46:18 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::~C()
{
    std::cout << "\033[31m** C destructor called **\033[0m" << std::endl;
}
