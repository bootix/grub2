/* loader.h - OS loaders */
/*
 *  PUPA  --  Preliminary Universal Programming Architecture for GRUB
 *  Copyright (C) 2002  Yoshinori K. Okuji <okuji@enbug.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef PUPA_LOADER_HEADER
#define PUPA_LOADER_HEADER	1

#include <pupa/file.h>
#include <pupa/symbol.h>
#include <pupa/err.h>
#include <pupa/types.h>

void EXPORT_FUNC(pupa_loader_set) (pupa_err_t (*load_module) (int argc,
							      char *argv[]),
				   pupa_err_t (*boot) (void),
				   pupa_err_t (*unload) (void));

pupa_err_t EXPORT_FUNC(pupa_loader_load_module) (int argc, char *argv[]);
pupa_err_t EXPORT_FUNC(pupa_loader_boot) (void);

#endif /* ! PUPA_LOADER_HEADER */
