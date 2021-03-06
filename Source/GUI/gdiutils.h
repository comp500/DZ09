/*
* This file is part of the DZ09 project.
*
* Copyright (C) 2019 AJScorp
*
* This program is free software; you can redistribute it and/or modify 
* it under the terms of the GNU General Public License as published by 
* the Free Software Foundation; version 2 of the License.
*
* This program is distributed in the hope that it will be useful, 
* but WITHOUT ANY WARRANTY; without even the implied warranty of 
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License 
* along with this program; if not, write to the Free Software 
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 
*/
#ifndef _GDIUTILS_H_
#define _GDIUTILS_H_

#define RGB_565(v)    ((((v) & 0xF80000) >> 8) | (((v) & 0xFC00) >> 5) | ((v) & 0x1F))

extern TPOINT Point(int16_t x, int16_t y);
extern TRECT Rect(int16_t l, int16_t t, int16_t r, int16_t b);
extern boolean IsRectsOverlaps(pRECT a, pRECT b);
extern boolean IsPointInRect(int16_t x, int16_t y, pRECT Rct);
extern TPOINT GDI_LocalToGlobal(pPOINT pt, pPOINT Offset);
extern TPOINT GDI_GlobalToLocal(pPOINT pt, pPOINT Offset);
extern boolean GDI_ANDRectangles(pRECT a, pRECT b);
extern pDLIST GDI_ADDRectangles(pRECT a, pRECT b);
extern pDLIST GDI_SUBRectangles(pRECT a, pRECT b);
extern boolean GDI_ADDRectToRegion(pDLIST Region, pRECT Rct);
extern boolean GDI_SUBRectFromRegion(pDLIST Region, pRECT Rct);
extern void GDI_FillRectangleX(pLCONTEXT lc, pRECT Rct, uint32_t Color);

#endif /* _GDIUTILS_H_ */
