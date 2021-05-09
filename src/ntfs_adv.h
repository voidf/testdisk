/*

    File: ntfs.h

    Copyright (C) 1998-2006,2008 Christophe GRENIER <grenier@cgsecurity.org>

    This software is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write the Free Software Foundation, Inc., 51
    Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 */
#ifndef _NTFS_ADV_H
#define _NTFS_ADV_H
#ifdef __cplusplus
extern "C" {
#endif
/*@
  @ requires \valid_read(nh1);
  @ requires \valid_read(nh2);
  @*/
int log_ntfs2_info(const struct ntfs_boot_sector *nh1, const struct ntfs_boot_sector *nh2);


/*@
  @ requires \valid(disk_car);
  @ requires valid_disk(disk_car);
  @ requires \valid(partition);
  @ requires \separated(disk_car, partition);
  @*/
int rebuild_NTFS_BS(disk_t *disk_car, partition_t *partition, const int verbose, const unsigned int expert, char**current_cmd);


#ifdef __cplusplus
} /* closing brace for extern "C" */
#endif
#endif
