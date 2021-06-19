/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlasrite <mlasrite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:12:01 by mouadlas          #+#    #+#             */
/*   Updated: 2021/06/19 15:29:22 by mlasrite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"

// void PrintStack(std::stack<int> s)
// {
//     // If stack is empty
//     if (s.empty())
//         return;

//     // Extract top of the stack
//     int x = s.top();

//     // Pop the top element
//     s.pop();

//     // Print the current top
//     // of the stack i.e., x
//     std::cout << x << ' ';

//     // Proceed to print
//     // remaining stack
//     PrintStack(s);

//     // Push the element back
//     s.push(x);
// }

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    // std::cout << "---------------------\n";
    // MutantStack<int> mstack2(mstack);
    // mstack2 = mstack;

    // MutantStack<int>::iterator it = mstack2.begin();
    // MutantStack<int>::iterator ite = mstack2.end();
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    return 0;
}
