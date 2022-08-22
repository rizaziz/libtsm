/*
 * GtkTsm - Terminal Emulator
 *
 * Copyright (c) 2011-2014 David Herrmann <dh.herrmann@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef GTKTSM_WIN_H
#define GTKTSM_WIN_H

#include <cairo.h>
#include <gtk/gtk.h>
#include <stdbool.h>
#include <stdlib.h>
#include "gtktsm-app.h"
#include "gtktsm-terminal.h"

typedef struct _GtkTsmWin GtkTsmWin;
typedef struct _GtkTsmWinClass GtkTsmWinClass;

#define GTKTSM_WIN_TYPE (gtktsm_win_get_type())
#define GTKTSM_WIN(_obj) (G_TYPE_CHECK_INSTANCE_CAST((_obj), \
			  GTKTSM_WIN_TYPE, \
			  GtkTsmWin))

GType gtktsm_win_get_type(void);
GtkTsmWin *gtktsm_win_new(GtkTsmApp *app);

void gtktsm_win_run(GtkTsmWin *win);
GtkTsmTerminal *gtktsm_win_get_terminal(GtkTsmWin *win);

#endif /* GTKTSM_WIN_H */
