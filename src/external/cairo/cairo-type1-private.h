/* Cairo - a vector graphics library with display and print output
 *
 * Copyright © 2007 Red Hat, Inc.
 *
 * This library is tb_free software; you can redistribute it and/or
 * modify it either under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation
 * (the "LGPL") or, at your option, under the terms of the Mozilla
 * Public License Version 1.1 (the "MPL"). If you do not alter this
 * notice, a recipient may use your version of this file under either
 * the MPL or the LGPL.
 *
 * You should have received a copy of the LGPL along with this library
 * in the file COPYING-LGPL-2.1; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * You should have received a copy of the MPL along with this library
 * in the file COPYING-MPL-1.1
 *
 * The contents of this file are subject to the Mozilla Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY
 * OF ANY KIND, either express or implied. See the LGPL or the MPL for
 * the specific language governing rights and limitations.
 *
 * The Original Code is the cairo graphics library.
 *
 * The Initial Developer of the Original Code is Red Hat, Inc.
 *
 * Contributor(s):
 *	Adrian Johnson <ajohnson@redneon.com>
 */

#ifndef CAIRO_TYPE1_PRIVATE_H
#define CAIRO_TYPE1_PRIVATE_H

#include "cairoint.h"

#if CAIRO_HAS_FONT_SUBSET

/* Magic constants for the type1 eexec encryption */
#define CAIRO_TYPE1_ENCRYPT_C1		((unsigned short) 52845)
#define CAIRO_TYPE1_ENCRYPT_C2		((unsigned short) 22719)
#define CAIRO_TYPE1_PRIVATE_DICT_KEY	((unsigned short) 55665)
#define CAIRO_TYPE1_CHARSTRING_KEY	((unsigned short) 4330)

#endif /* CAIRO_HAS_FONT_SUBSET */

#endif /* CAIRO_TYPE1_PRIVATE_H */
