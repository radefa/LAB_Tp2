/*
 * bitmap.h
 *
 */

#ifndef BITMAP_H_
#define BITMAP_H_

#include "atv_types.h"
#include "ff.h"
#include "xil_io.h"

UINT bmp_nb_RLE_pixel(UCHAR *buf);

void bmp_to_crgb(const UCHAR *buf, UINT nbRLEpixel, UINT32 *crgb);

#endif /* BITMAP_H_ */
