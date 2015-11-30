/** @file backends.h
 * @brief BACKEND_* constants
 */
/* Copyright (C) 2015 Olly Betts
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef XAPIAN_INCLUDED_BACKENDS_H
#define XAPIAN_INCLUDED_BACKENDS_H

enum {
    BACKEND_REMOTE = 0,
    BACKEND_INMEMORY = 1,
    BACKEND_CHERT = 2,
    BACKEND_GLASS = 3
};

#endif
