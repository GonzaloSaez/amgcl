#ifndef AMGCL_UTIL_HPP
#define AMGCL_UTIL_HPP

/*
The MIT License

Copyright (c) 2012-2014 Denis Demidov <dennis.demidov@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

/**
 * \file   amgcl/util.hpp
 * \author Denis Demidov <dennis.demidov@gmail.com>
 * \brief  Various utilities.
 */

#include <stdexcept>

#define AMGCL_DEBUG_SHOW(x)                                                    \
    std::cout << std::setw(20) << #x << ": "                                   \
              << std::setw(15) << std::setprecision(8) << std::scientific      \
              << (x) << std::endl

namespace amgcl {

/// Throws if @cond is not true.
template <class Cond, class Message>
void precondition(const Cond &cond, const Message &message) {
    if ( !static_cast<bool>(cond) ) throw std::runtime_error(message);
}

} // namespace amgcl


#endif
