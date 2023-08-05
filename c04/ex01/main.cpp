/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:09:53 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:27:12 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int animalCount = 10;
    Animal* animals[animalCount];
    for (int i = 0; i < animalCount / 2; ++i) {
        animals[i] = new Dog();
    }
    std::cout << "\n\n";
    for (int i = animalCount / 2; i < animalCount; ++i) {
        animals[i] = new Cat();
    }
    std::cout << "\n\n";
    for (int i = 0; i < animalCount; ++i) {
        animals[i]->makeSound();
    }
    std::cout << "\n\n";
    for (int i = 0; i < animalCount; ++i) {
        delete animals[i];
    }

    Cat a;
    Cat a1 = a;
    return 0;
}

