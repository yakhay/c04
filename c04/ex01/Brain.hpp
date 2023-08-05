/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:10:40 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:46:34 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain {

public:
    std::string ideas[100];
    Brain();
    Brain(std::string *ideas);
    Brain(Brain &other);
    Brain &operator=(const Brain & other);
    ~Brain();
};
#endif
