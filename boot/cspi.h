/*
 *  A module for creating rebootless custom image boot support.
 *
 *  Copyright (C) 2010 XVilka <xvilka at gmail.com>
 *
 *  Inspired by 2ndboot by dimich: http://hg.ezxdev.org/2ndboot/
 * 
 *  This file is part of 2ndboot-ng.
 *
 *  2ndboot-ng is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *   along with 2ndboot-ng.  If not, see <http://www.gnu.org/licenses/>.
 * 
*/

#ifndef __HW_CSPI_H__
#define __HW_CSPI_H__

#include "types.h"

struct cspi_config {
  int chip_select;
  int data_rate;
  int bit_count;
  int active_high_ss_polarity;
  int ss_waveform;
  int phase;
  int active_high_clk_polarity;
};

int cspi_init(int module, struct cspi_config *cfg);
int cspi_send(int module, uint32_t *data, size_t len, unsigned int *timeout);
int cspi_recv(int module, uint32_t *buf, size_t size, unsigned int *timeout);

#endif // __HW_CSPI_H__
