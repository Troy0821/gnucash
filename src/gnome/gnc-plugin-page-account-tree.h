/* 
 * gnc-plugin_page-account-tree.h -- 
 *
 * Copyright (C) 2003 Jan Arne Petersen <jpetersen@uni-bonn.de>
 * Copyright (C) 2003 David Hampton <hampton@employees.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, contact:
 *
 * Free Software Foundation           Voice:  +1-617-542-5942
 * 59 Temple Place - Suite 330        Fax:    +1-617-542-2652
 * Boston, MA  02111-1307,  USA       gnu@gnu.org
 */

#ifndef __GNC_PLUGIN_PAGE_ACCOUNT_TREE_H
#define __GNC_PLUGIN_PAGE_ACCOUNT_TREE_H

#include <gtk/gtkwindow.h>

#include "gnc-plugin-page.h"

G_BEGIN_DECLS

/* type macros */
#define GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE            (gnc_plugin_page_account_tree_get_type ())
#define GNC_PLUGIN_PAGE_ACCOUNT_TREE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE, GncPluginPageAccountTree))
#define GNC_PLUGIN_PAGE_ACCOUNT_TREE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE, GncPluginPageAccountTreeClass))
#define GNC_IS_PLUGIN_PAGE_ACCOUNT_TREE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE))
#define GNC_IS_PLUGIN_PAGE_ACCOUNT_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE))
#define GNC_PLUGIN_PAGE_ACCOUNT_TREE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GNC_TYPE_PLUGIN_PAGE_ACCOUNT_TREE, GncPluginPageAccountTreeClass))

#define GNC_PLUGIN_PAGE_ACCOUNT_TREE_NAME "gnc-plugin_page-account-tree"

/* typedefs & structures */
typedef struct GncPluginPageAccountTreePrivate GncPluginPageAccountTreePrivate;

typedef struct {
	GncPluginPage parent;

	GncPluginPageAccountTreePrivate *priv;
} GncPluginPageAccountTree;

typedef struct {
	GncPluginPageClass parent;
} GncPluginPageAccountTreeClass;

/* function prototypes */
GType          gnc_plugin_page_account_tree_get_type (void);

GncPluginPage *gnc_plugin_page_account_tree_new  (void);

G_END_DECLS

#endif /* __GNC_PLUGIN_PAGE_ACCOUNT_TREE_H */
