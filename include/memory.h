/*
 * include/memory.h
 * Copyright 2016 Zane J Cersovsky
 * This file is part of Project Paxico.

 * Project Paxico is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Project Paxico is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Project Paxico.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * Declares testing/initialization routines for malloc & related
 */
#ifndef _PAXICO_MEMORY_H
#define _PAXICO_MEMORY_H
/*Set the branding macro*/
#ifndef _PAXICO_LIBC_
#define _PAXICO_LIBC_
#endif
#include <stdint.h>
/*Private functions used mostly by the test suite*/
void init_malloc();
size_t _PAXICO_get_free_space();
int _PAXICO_check_leaks();
#endif
