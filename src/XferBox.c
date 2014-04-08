/********************************************************************\
 * XferBox.c -- account transfers for xacc (X-Accountant)           *
 * Copyright (C) 1997 Linas Vepstas                                 *
 *                                                                  *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, write to the Free Software      *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.        *
 *                                                                  *
\********************************************************************/

#include <Xm/Xm.h>

#include "Data.h"
#include "PopBox.h"
#include "util.h"

/********************************************************************\
 * xferBox                                                          *
 *   creates the xfer widget                                        *
 *                                                                  *
 * Args:   parent  - the parent of this window                      *
 * Return: PopBox  - the xfer GUI structure                         *
\********************************************************************/

static void 
XferBoxTraverse (PopBox *popGUI, AccountGroup *grp)
{
   Account * acc;
   int n;

   if (!grp) return;

   /* build the xfer menu out of account names */
   /* traverse sub-accounts ecursively */
   n = 0;
   acc = getAccount (grp, n);
   while (acc) {
      AddPopBoxMenuItem (popGUI, acc->accountName);
      XferBoxTraverse (popGUI, acc->children);
      n++;
      acc = getAccount (grp, n);
   }
}

PopBox *
xferBox (Widget parent, AccountGroup *grp, int width, int drop_down_width)
{
   PopBox *popGUI;
   Account * acc;

   popGUI = popBox (parent, width, drop_down_width);

   XferBoxTraverse (popGUI, grp);

   return popGUI;
}

/************************* END OF FILE ******************************/