/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:09:53 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 17:50:47 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "\n\n";
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << "\n\n";

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "\n\n";

delete meta;
delete j;
delete i;

// tests

const WrongAnimal* i1 = new WrongCat();

i1->makeSound();

std::cout << "\n\n";

delete i1;
return 0;
}
