/*
 * Copyright (C) Tildeslash Ltd. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 *
 * You must obey the GNU Affero General Public License in all respects
 * for all of the code used other than OpenSSL.  
 */

/**
 *  System dependent filesystem methods.
 *
 *  @author Jan-Henrik Haukeland, <hauk@tildeslash.com>
 *  @author Martin Pala, <martinp@tildeslash.com>
 *
 *  @file
 */

#include "config.h"

#include "monit.h"
#include "device_sysdep.h"

/**
 * Unknown OS special block device dummy mountpoint method.
 *
 * @param inf  Information structure
 * @param blockdev Identifies block special device
 * @return         NULL
 */
char *device_mountpoint_sysdep(Info_T inf, char *blockdev) {
  LogError("%s: Unsupported mounted filesystem information method\n", prog);
  return NULL;
}


/**
 * Unknown OS filesystem dummy usage statistics.
 *
 * @param inf Information structure
 * @return        FALSE
 */
int filesystem_usage_sysdep(Info_T inf) {
  LogError("%s: Unsupported filesystem informations gathering method\n", prog);
  return FALSE;
}

